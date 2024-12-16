#include "../PCH/PCH.h"
#include "../Dependencies/tomlplusplus/toml.hpp"
#include <fstream>

namespace Config {

	bool ParseConfig()
	{
		CheckConfig(Path);
		auto config = toml::parse_file(Path);

		if (config.empty())
			std::cout << "Empty config loaded from " << Path << std::endl;
		else
			std::cout << "Config loaded from " << Path << std::endl;
		
		bShowGlobalHud				= config["bShowGlobalHud"]				.value_or(true);
		bShowItems					= config["bShowItems"]					.value_or(false);
		bShowLargeItems				= config["bShowLargeItems"]				.value_or(false);
		bShowLargeItems				= config["bShowNPCs"]					.value_or(false);
		bShowObjectiveActors		= config["bShowObjectiveActors"]		.value_or(false);
		bShowPrimaryObjectiveActors	= config["bShowPrimaryObjectiveActors"]	.value_or(false);
		bShowPlayers				= config["bShowPlayers"]				.value_or(false);
		bShowStamina				= config["bShowStamina"]				.value_or(false);
									  
		fShowItems					= config["fShowItems"]					.value_or(150.f);
		fShowLargeItems				= config["fShowLargeItems"]				.value_or(300.f);
		fShowNPCs					= config["fShowNPCs"]					.value_or(300.f);
		fShowPrimaryObjectiveActors	= config["fShowPrimaryObjectiveActors"]	.value_or(300.f);
		fShowObjectiveActors		= config["fShowObjectiveActors"]		.value_or(300.f);
		fShowPlayers				= config["fShowPlayers"]				.value_or(150.f);

		if (toml::array* arr = config["AllowedItems"].as_array()) {
			if (!arr->empty())
			for (int i = 0; i < (int)SDK::EItemType::Max; i++) {
				if (!arr->get(i)) {
					AllowedItems[i] = false;
					continue;
				}
				AllowedItems[i] = arr->get(i)->value_or(false);
			}
		}
		
		return true;
	}

	void SaveConfig() {
		toml::v3::table config = toml::parse_file(Path);

		config.insert_or_assign("bShowGlobalHud",				bShowGlobalHud				);
		config.insert_or_assign("bShowItems",					bShowItems					);
		config.insert_or_assign("bShowLargeItems",				bShowLargeItems				);
		config.insert_or_assign("bShowNPCs",					bShowNPCs					);
		config.insert_or_assign("bShowObjectiveActors",			bShowObjectiveActors		);
		config.insert_or_assign("bShowPrimaryObjectiveActors",	bShowPrimaryObjectiveActors	);
		config.insert_or_assign("bShowPlayers",					bShowPlayers				);
		config.insert_or_assign("bShowStamina",					bShowStamina				);

		config.insert_or_assign("fShowItems",					fShowItems					);
		config.insert_or_assign("fShowLargeItems",				fShowLargeItems				);
		config.insert_or_assign("fShowPrimaryObjectiveActors",	fShowPrimaryObjectiveActors	);
		config.insert_or_assign("fShowObjectiveActors",			fShowObjectiveActors		);
		config.insert_or_assign("fShowPlayers",					fShowPlayers				);

		config.insert_or_assign("AllowedItems",			toml::array());
		if (toml::array* arr = config["AllowedItems"].as_array()) {
			arr->clear();
			for (int i = 0; i < (int)SDK::EItemType::Max; i++) {
				arr->push_back(AllowedItems[i]);
			}
		}

		WriteConfig(Path, config);
	}

	void WriteConfig(std::string path, toml::v3::table config) {
		std::ifstream checkconfig(path);
		if (checkconfig.good()) checkconfig.close();
		std::ofstream createconfig(path);
		createconfig << config;
		createconfig.close();
	}
	
	void CheckConfig(std::string path) {
		std::ifstream checkconfig(path);
		if (!checkconfig.good()) {
			std::ofstream createconfig(path);
			createconfig.close();
		}
	}
};
