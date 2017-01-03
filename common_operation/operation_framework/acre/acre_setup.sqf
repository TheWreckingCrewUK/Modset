#include "script_component.hpp"

["ACRE_PRC152", "default", "example1"] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default", "example1"] call acre_api_fnc_copyPreset;

["ACRE_PRC152", "example1", 1, "description", "PLT Command"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 2, "description", "1 Section"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 3, "description", "2 Section"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 4, "description", "3 Section"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 5, "description", "Attachment 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 6, "description", "Attachment 2"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "example1", 1, "name", "1 PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 2, "name", "2 PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 3, "name", "Air NET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 4, "name", "Air NET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 5, "name", "Attachment 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 6, "name", "Attachment 2"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "example1"] call acre_api_fnc_setPreset;
["ACRE_PRC117F", "example1"] call acre_api_fnc_setPreset;

if(isDedicated) exitWith { false };
