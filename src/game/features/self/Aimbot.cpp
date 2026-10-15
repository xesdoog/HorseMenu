#include "core/commands/BoolCommand.hpp"
#include "core/commands/FloatCommand.hpp"
#include "core/commands/LoopedCommand.hpp"
#include "game/backend/Self.hpp"
#include "game/rdr/Entity.hpp"
#include "game/rdr/Ped.hpp"
#include "game/rdr/Player.hpp"
#include "game/rdr/Natives.hpp"
#include "game/rdr/Pools.hpp"
#include "util/Math.hpp"
#include "rage/vector.hpp"

#include <numbers>


namespace Teminus::Features
{
	static FloatCommand _AimbotDistance{"aimbotdistance", "Distance", "Aimbot Maximum Distance", 50.0f, 500.0f, 50.0f};
	static FloatCommand _AimbotFOV{"aimbotfov", "FOV", "Field Of View", 10.0f, 200.0f, 10.0f};
	static FloatCommand _AimbotSmoothingSpd{"aimbotsmoothingspd", "Smoothing ", "Smoothing Speed", 0.0f, 10.0f, 0.0f};

	static BoolCommand _AimbotSmoothing{"aimbotsmoothing", "Smoothing", "Enable Aimbot Smoothing"};
	static BoolCommand _AimbotNPC{"aimbotnpc", "NPC", "Aim At Human NPCs"};
	static BoolCommand _AimbotEnemies{"aimbotenemies", "Enemies", "Aim At Enemies"};
	static BoolCommand _AimbotPlayers{"aimbotplayers", "Players", "Aim At Players"};
	static BoolCommand _AimbotAnimals{"aimbotanimals", "Animals", "Aim At Animals"};

	static float WrapDegrees(float angle)
	{
		angle = std::remainder(angle, 360.0f);
		return angle;
	}

	class Aimbot : public LoopedCommand
	{
		using LoopedCommand::LoopedCommand;

		static inline bool initialized;
		static inline Vector3 smoothing;
		static inline Vector3 targetPos;
		static inline Ped target{0};

		static void Reset()
		{
			target      = Ped(0);
			initialized = false;
		}

		virtual void OnTick() override
		{
			auto playerHandle = Self::GetPed().GetHandle();
			auto playerIndex  = Self::GetPlayer().GetId();
			if (!GetPedPool() || !WEAPON::IS_PED_ARMED(playerHandle, 4) || !PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
			{
				Reset();
				return;
			}

			auto playerPos = Self::GetPed().GetPosition();
			auto fov       = _AimbotFOV.GetState();
			auto distance  = _AimbotDistance.GetState();

			Vector3 camPos      = CAM::GET_GAMEPLAY_CAM_COORD();
			Vector3 camRot      = CAM::GET_GAMEPLAY_CAM_ROT(0);
			Vector3 camDir      = Math::RotationToDirection(camRot);
			const float fovRads = fov * std::numbers::pi_v<float> / 180.0f;
			const float minDot  = std::cos(fovRads * 0.5f);

			for (auto ped : Pools::GetPeds())
			{
				auto pedHandle = ped.GetHandle();
				if (ped.IsDead() || pedHandle == playerHandle)
					continue;

				if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(playerHandle, pedHandle, 17))
					continue;

				auto pedCoords = ENTITY::GET_ENTITY_COORDS(pedHandle, true, false);
				if (BUILTIN::VDIST2(playerPos.x, playerPos.y, playerPos.z, pedCoords.x, pedCoords.y, pedCoords.z) > (distance * distance))
					continue;

				bool isEnemy = ped.IsEnemy();
				if (isEnemy && !_AimbotEnemies.GetState())
					continue;

				bool isPlayer = ped.IsPlayer();
				if (isPlayer && !_AimbotPlayers.GetState())
					continue;

				bool isAnimal = ped.IsAnimal();
				if (isAnimal && !_AimbotAnimals.GetState())
					continue;

				bool isNPC = (!isAnimal && !isPlayer && !isEnemy);
				if (isNPC && !_AimbotNPC.GetState())
					continue;

				Vector3 toTarget = ped.GetBonePosition(21030) - camPos;
				float magnitude  = std::hypot(toTarget.x, toTarget.y, toTarget.z);
				if (magnitude < 0.001f)
					continue;

				toTarget  = Vector3(toTarget.x / magnitude, toTarget.y / magnitude, toTarget.z / magnitude);
				float dot = camDir.x * toTarget.x + camDir.y * toTarget.y + camDir.z * toTarget.z;
				if (dot < minDot)
					continue;

				target = ped;
			}

			if (!target.IsValid() || target.IsDead())
			{
				Reset();
				return;
			}

			if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
			{
				targetPos = target.GetBonePosition(21030); // TODO: add bone list

				Vector3 camTarget;
				Vector3 targetDir = targetPos - camPos;
				float magnitude   = std::hypot(targetDir.x, targetDir.y, targetDir.z);
				if (magnitude < 0.001f)
				{
					Reset();
					return;
				}

				targetDir.x /= magnitude;
				targetDir.y /= magnitude;
				targetDir.z /= magnitude;

				if (_AimbotSmoothing.GetState())
				{
					if (!initialized)
					{
						smoothing   = camDir;
						initialized = true;
					}

					float alpha = std::clamp(_AimbotSmoothingSpd.GetState() / 10.f, 0.001f, 1.0f);

					smoothing.x += (targetDir.x - smoothing.x) * alpha;
					smoothing.y += (targetDir.y - smoothing.y) * alpha;
					smoothing.z += (targetDir.z - smoothing.z) * alpha;

					magnitude = std::hypot(smoothing.x, smoothing.y, smoothing.z);
					if (magnitude < 0.001f)
					{
						Reset();
						return;
					}

					smoothing.x /= magnitude;
					smoothing.y /= magnitude;
					smoothing.z /= magnitude;

					camTarget = smoothing;
				}
				else
				{
					camTarget = targetDir;
				}

				if (targetPos.x == 0.0f && targetPos.y == 0.0f && targetPos.z == 0.0f)
				{
					Reset();
					return;
				}

				constexpr float RADPI = 180.0f / std::numbers::pi;
				float camMagnitude    = std::hypot(camTarget.x, camTarget.y, camTarget.z);
				float camHeading      = atan2f(camTarget.x, camTarget.y) * RADPI;
				float camPitch        = asinf(camTarget.z / camMagnitude) * RADPI;
				float selfHeading     = ENTITY::GET_ENTITY_HEADING(playerHandle);
				float selfPitch       = ENTITY::GET_ENTITY_PITCH(playerHandle);

				if (camHeading >= 0.0f && camHeading <= 180.0f)
				{
					camHeading = 360.0f - camHeading;
				}
				else if (camHeading <= -0.0f && camHeading >= -180.0f)
				{
					camHeading = -camHeading;
				}

				float headingDelta = camHeading - selfHeading;
				float pitchDelta   = camPitch - selfPitch;
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0))
				{
					CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(headingDelta, headingDelta);
					CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(pitchDelta, pitchDelta);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(headingDelta, 1.0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(pitchDelta, 1.0f);
				}
			}
			else
			{
				Reset();
			}
		}

		virtual void OnDisable() override
		{
			Reset();
		}
	};

	static Aimbot _Aimbot{"aimbot", "Aimbot", "Aims for you."};
}
