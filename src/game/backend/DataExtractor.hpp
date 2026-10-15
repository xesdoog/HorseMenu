#pragma once
#include <string>

namespace Teminus::Data
{
	std::string GetAppDataPath();
	bool DownloadModelsJson();
	bool ExtractModelsJson(); // Keep for backward compatibility
}