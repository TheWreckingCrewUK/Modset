#include "script_component.hpp"

private["_unit", "_localUnitType"];
_unit = _this select 0;
_localUnitType = _this select 1;

["ACRE_PRC148", "default", "example1"] call acre_api_fnc_copyPreset;
["ACRE_PRC343", "default", "example1"] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default", "example1"] call acre_api_fnc_copyPreset;

["ACRE_PRC343", "example1", 2, "description", "Alpha Section"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "example1", 2, "description", "Bravo Squad"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "example1", 3, "description", "Charlie Squad"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 4, "description", "Delta Squad"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 5, "description", "CAS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "example1", 6, "description", "FIRES"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "example1", 1, "name", "CMD NET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 2, "name", "FAC"] call acre_api_fnc_setPresetChannelField;


["ACRE_PRC152", "example1"] call acre_api_fnc_setPreset;
["ACRE_PRC117F", "example1"] call acre_api_fnc_setPreset;

if(isDedicated) exitWith { false };

_this spawn {
	_unit = _this select 0;
	_localUnitType = _this select 1;
	
	waitUntil { !isNull player };
	if(_unit != player) exitWith { false }; 
	
	waitUntil { ([] call acre_api_fnc_isInitialized) };

	switch _localUnitType do {
		case 'ftl_leader_1': { [ (["ACRE_PRC343"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'ftl_leader_2': { [ (["ACRE_PRC343"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'ftl_leader_3': { [ (["ACRE_PRC343"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'ftl_leader_4': { [ (["ACRE_PRC343"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		case 'ftl_leader_5': { [ (["ACRE_PRC343"] call getRadioByType), 5] call acre_api_fnc_setRadioChannel; };
		case 'ftl_leader_6': { [ (["ACRE_PRC343"] call getRadioByType), 6] call acre_api_fnc_setRadioChannel; };
		
		case 'p1': { 
			[ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; 
			[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; 
		};
		case 'squad_leader_2': { 
			[ (["ACRE_PRC343"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; 
			[ (["ACRE_PRC152"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; 
		};
		case 'squad_leader_3': { 
			[ (["ACRE_PRC343"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; 
			[ (["ACRE_PRC152"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; 
		};
		case 'squad_leader_4': { 
			[ (["ACRE_PRC343"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; 
			[ (["ACRE_PRC152"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; 
		};
		case 'squad_leader_5': { 
			[ (["ACRE_PRC343"] call getRadioByType), 5] call acre_api_fnc_setRadioChannel; 
			[ (["ACRE_PRC152"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; 
		};
		case 'squad_leader_6': { 
			[ (["ACRE_PRC343"] call getRadioByType), 6] call acre_api_fnc_setRadioChannel; 
			[ (["ACRE_PRC152"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; 
		};
		
		case 'platoon_hq_1':  { [ (["ACRE_PRC343"] call getRadioByType), 7] call acre_api_fnc_setRadioChannel; };
		case 'platoon_hq_2':  { [ (["ACRE_PRC343"] call getRadioByType), 8] call acre_api_fnc_setRadioChannel; };
		case 'company_hq':  { [ (["ACRE_PRC343"] call getRadioByType), 9] call acre_api_fnc_setRadioChannel; };
		
		case 'company_rto': { 
			[ (["ACRE_PRC343"] call getRadioByType), 9] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC117F"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC152"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'company_commander': { 
			[ (["ACRE_PRC343"] call getRadioByType), 9] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC152"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel;
		};
		case 'platoon_leader_1': {
			[ (["ACRE_PRC343"] call getRadioByType), 7] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC152"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'platoon_leader_2': { 
			[ (["ACRE_PRC343"] call getRadioByType), 8] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC152"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel;
		};
		case 'platoon_rto_1': { 
			[ (["ACRE_PRC343"] call getRadioByType), 7] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC117F"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC152"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'platoon_rto_2': { 
			[ (["ACRE_PRC343"] call getRadioByType), 8] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC117F"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel;
			[ (["ACRE_PRC152"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel;
		};
	};
};