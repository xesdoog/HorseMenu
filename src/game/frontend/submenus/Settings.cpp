#include "settings.hpp"

#include "core/commands/Commands.hpp"
#include "core/commands/HotkeySystem.hpp"
#include "core/commands/LoopedCommand.hpp"
#include "game/backend/Self.hpp"
#include "game/features/Features.hpp"
#include "game/frontend/items/Items.hpp"
#include "lua/LuaManager.hpp"

namespace YimMenu::Submenus
{
	// TODO: refactor this
	static void Hotkeys()
	{
		ImGui::BulletText("Hold the command name clicked to change its hotkey");
		ImGui::BulletText("Press any registered key to remove");

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		for (auto& [Hash, Command] : Commands::GetCommands())
		{
			ImGui::PushID(Hash);

			if (g_HotkeySystem.m_CommandHotkeys.find(Hash) != g_HotkeySystem.m_CommandHotkeys.end())
				HotkeySetter(Hash).Draw();

			ImGui::Spacing();

			ImGui::PopID();
		}
	};

	static void LuaScripts()
	{
		if (!g_LuaManager)
		{
			ImGui::Text("Lua Manager was not initialized.");
			return;
		}

		static bool autoReloadEnabled = true;
		static int selectedModuleIndex = -1;
		static std::shared_ptr<LuaModule> selectedModule = nullptr;

		if (ImGui::Checkbox("Auto-Reload Changed Scripts", &autoReloadEnabled))
		{
			g_LuaManager->SetAutoReload(autoReloadEnabled);
		}

		ImGui::BeginChild("Lua Script Manager", ImVec2(0, 300), true);
		{
			ImGui::Columns(2, "ScriptControls", false);
			ImGui::BeginChild("ScriptList", ImVec2(ImGui::GetColumnWidth() - 10, 0), true);
			{
				if (ImGui::BeginTabBar("ScriptTabs"))
				{
					auto DrawModuleList = [](const auto& modules, const char* listId) {
						static std::vector<const char*> moduleNames;
						moduleNames.clear();

						for (const auto& [name, module] : modules)
							moduleNames.push_back(name.c_str());

						ImGui::SetNextItemWidth(-1);
						ImGui::ListBox(
							listId,
						    &selectedModuleIndex,
						    moduleNames.data(),
						    static_cast<int>(moduleNames.size()),
						    moduleNames.size() > 10 ? 10 : static_cast<int>(moduleNames.size()));

						if (selectedModuleIndex >= 0 && selectedModuleIndex < static_cast<int>(moduleNames.size()))
						{
							auto it = modules.begin();
							std::advance(it, selectedModuleIndex);
							selectedModule = it->second;
						}
					};

					if (ImGui::BeginTabItem("Enabled"))
					{
						DrawModuleList(g_LuaManager->GetEnabledModules(), "##EnabledList");
						ImGui::EndTabItem();
					}

					if (ImGui::BeginTabItem("Disabled"))
					{
						DrawModuleList(g_LuaManager->GetDisabledModules(), "##DisabledList");
						ImGui::EndTabItem();
					}

					ImGui::EndTabBar();
				}
			}
			ImGui::EndChild();

			ImGui::NextColumn();
			ImGui::BeginChild("ScriptControls", ImVec2(0, 0), true);
			{
				if (ImGui::Button("Reload All", ImVec2(-1, 0)))
				{
					g_LuaManager->ReloadAllModules();
					selectedModuleIndex = -1;
				}

				if (ImGui::Button("Enable All", ImVec2(-1, 0)))
				{
					g_LuaManager->EnableAllModules();
				}

				if (ImGui::Button("Disable All", ImVec2(-1, 0)))
				{
					g_LuaManager->DisableAllModules();
					selectedModuleIndex = -1;
				}

				ImGui::Spacing();
				ImGui::Separator();

				if (selectedModule)
				{
					bool isEnabled = !selectedModule->IsDisabled();

					if (ImGui::Button(isEnabled ? "Disable" : "Enable", ImVec2(-1, 0)))
					{
						const auto& moduleName = selectedModule->GetName();

						if (isEnabled)
							g_LuaManager->DisableModule(moduleName);
						else
							g_LuaManager->EnableModule(moduleName);

						selectedModule.reset();
						selectedModuleIndex = -1;
					}

					if (ImGui::Button("Reload", ImVec2(-1, 0)))
					{
						const auto& moduleName = selectedModule->GetName();
						g_LuaManager->ReloadModule(moduleName);
					}

					if (ImGui::Button("Show In Explorer", ImVec2(-1, 0)))
					{
						std::string cmd = "explorer /select,\"" + selectedModule->GetPath().string() + "\"";
						system(cmd.c_str());
					}
				}
			}
			ImGui::EndChild();
		}
		ImGui::EndChild();
	}

	Settings::Settings() :
	    Submenu::Submenu("Settings")
	{
		auto hotkeys           = std::make_shared<Category>("Hotkeys");
		auto gui               = std::make_shared<Category>("GUI");
		auto protections       = std::make_shared<Category>("Protection");
		auto luaScripts        = std::make_shared<Category>("Lua Scripts");
		auto syncGroup         = std::make_shared<Group>("Sync");
		auto networkEventGroup = std::make_shared<Group>("Network Events");
		auto scriptEventGroup  = std::make_shared<Group>("Script Events");
		auto playerEsp         = std::make_shared<Group>("Player ESP", 10);
		auto pedEsp            = std::make_shared<Group>("Ped ESP", 10);
		auto overlay           = std::make_shared<Group>("Overlay");
		auto context           = std::make_shared<Group>("Context Menu");
		auto misc              = std::make_shared<Group>("Misc");

		hotkeys->AddItem(std::make_shared<ImGuiItem>(Hotkeys));
		luaScripts->AddItem(std::make_shared<ImGuiItem>(LuaScripts));

		// Players
		playerEsp->AddItem(std::make_shared<BoolCommandItem>("espdrawplayers"_J));
		playerEsp->AddItem(std::make_shared<ConditionalItem>("espdrawplayers"_J, std::make_shared<BoolCommandItem>("espdrawdeadplayers"_J)));

		playerEsp->AddItem(std::make_shared<ConditionalItem>("espdrawplayers"_J, std::make_shared<BoolCommandItem>("espnameplayers"_J, "Player Name")));
		playerEsp->AddItem(std::make_shared<ConditionalItem>("espdrawplayers"_J, std::make_shared<ColorCommandItem>("namecolorplayers"_J)));

		playerEsp->AddItem(std::make_shared<ConditionalItem>("espdrawplayers"_J, std::make_shared<BoolCommandItem>("espdistanceplayers"_J, "Player Distance")));
		//playerEsp->AddItem(std::make_shared<ConditionalItem>("espdrawplayers"_J, std::make_shared<ColorCommandItem>("distancecolorplayers"_J))); // TO DO

		playerEsp->AddItem(std::make_shared<ConditionalItem>("espdrawplayers"_J, std::make_shared<BoolCommandItem>("espskeletonplayers"_J, "Player Skeleton")));
		playerEsp->AddItem(std::make_shared<ConditionalItem>("espdrawplayers"_J, std::make_shared<ColorCommandItem>("skeletoncolorplayers"_J)));

		// Peds
		pedEsp->AddItem(std::make_shared<BoolCommandItem>("espdrawpeds"_J));
		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<BoolCommandItem>("espdrawdeadpeds"_J)));

		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<BoolCommandItem>("espmodelspeds"_J, "Ped Hashes")));
		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<ColorCommandItem>("hashcolorpeds"_J)));

		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<BoolCommandItem>("espnetinfopeds"_J, "Ped Net Info")));
		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<BoolCommandItem>("espscriptinfopeds"_J, "Ped Script Info")));

		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<BoolCommandItem>("espdistancepeds"_J, "Ped Distance")));
		//pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<ColorCommandItem>("distancecolorpeds"_J))); // TO DO

		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<BoolCommandItem>("espskeletonpeds"_J, "Ped Skeleton")));
		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<ColorCommandItem>("skeletoncolorpeds"_J)));

		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<BoolCommandItem>("espskeletonhorse"_J, "Horse Skeleton")));
		pedEsp->AddItem(std::make_shared<ConditionalItem>("espdrawpeds"_J, std::make_shared<ColorCommandItem>("skeletoncolorhorse"_J)));

		overlay->AddItem(std::make_shared<BoolCommandItem>("overlay"_J));
		overlay->AddItem(std::make_shared<ConditionalItem>("overlay"_J, std::make_shared<BoolCommandItem>("overlayfps"_J)));

		context->AddItem(std::make_shared<BoolCommandItem>("ctxmenu"_J));
		context->AddItem(std::make_shared<ConditionalItem>("ctxmenu"_J, std::make_shared<BoolCommandItem>("ctxmenuplayers"_J, "Players")));
		context->AddItem(std::make_shared<ConditionalItem>("ctxmenu"_J, std::make_shared<BoolCommandItem>("ctxmenupeds"_J, "Peds")));
		context->AddItem(std::make_shared<ConditionalItem>("ctxmenu"_J, std::make_shared<BoolCommandItem>("ctxmenuvehicles"_J, "Vehicles")));
		context->AddItem(std::make_shared<ConditionalItem>("ctxmenu"_J, std::make_shared<BoolCommandItem>("ctxmenuobjects"_J, "Objects")));

		syncGroup->AddItem(std::make_shared<BoolCommandItem>("blockspectate"_J));
		syncGroup->AddItem(std::make_shared<BoolCommandItem>("blockspectatesession"_J));
		syncGroup->AddItem(std::make_shared<BoolCommandItem>("blockattach"_J));
		syncGroup->AddItem(std::make_shared<BoolCommandItem>("blockvehflood"_J));

		networkEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockexplosions"_J));
		networkEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockptfx"_J));
		networkEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockclearpedtasks"_J));
		networkEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockscriptcommand"_J));
		networkEventGroup->AddItem(std::make_shared<BoolCommandItem>("userelaycxns"_J));

		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockhonormanipulation"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockdefensive"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockoffensive"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockpresscharges"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockstartparlay"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockendparlay"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blocktickerspam"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockstableevents"_J));
		scriptEventGroup->AddItem(std::make_shared<BoolCommandItem>("blockkickfrommissionlobby"_J));

		gui->AddItem(playerEsp);
		gui->AddItem(pedEsp);
		gui->AddItem(overlay);
		gui->AddItem(context);
		gui->AddItem(misc);

		protections->AddItem(syncGroup);
		protections->AddItem(networkEventGroup);
		protections->AddItem(scriptEventGroup);
		AddCategory(std::move(hotkeys));
		AddCategory(std::move(gui));
		AddCategory(std::move(protections));
		AddCategory(std::move(luaScripts));
	}
}
