#pragma once
#include "../PCH/PCH.h"
#include "../Dependencies/tomlplusplus/toml.hpp"

namespace Config {
	inline std::string Path = "./Total-Config.toml";
    inline std::string Section = "Config";

    // CONFIG VALUES

    inline bool     bShowGlobalHud;
    inline bool     bShowItems;
    inline bool     bShowLargeItems;
    inline bool     bShowNPCs;
    inline bool     bShowObjectiveActors;
    inline bool     bShowPrimaryObjectiveActors;
    inline bool     bShowPlayers;
    inline bool     bShowStamina;
    inline bool     bSuperlight;

    inline float    fShowItems;
    inline float    fShowNPCs;
    inline float    fShowLargeItems;
    inline float    fShowObjectiveActors;
    inline float    fShowPrimaryObjectiveActors;
    inline float    fShowPlayers;
    inline float    fSuperlightRadius;
    inline float    fSuperlightIntensity;
    inline float    fSuperlightAngle;

    inline bool AllowedItems[(int)SDK::EItemType::Max];

    void SaveConfig();
    void WriteConfig(std::string path, toml::v3::ex::parse_result config);
    void CheckConfig(std::string path);
	bool ParseConfig();
}