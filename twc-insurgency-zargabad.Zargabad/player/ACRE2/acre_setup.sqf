//#include "script_component.hpp"

["ACRE_PRC148", "default", "example1"] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default", "example1"] call acre_api_fnc_copyPreset;
["ACRE_PRC343", "default", "example1"] call acre_api_fnc_copyPreset;

["ACRE_PRC148", "example1", 1, "description", "Command Channel"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "example1", 2, "description", "1 Section"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "example1", 3, "description", "2 Section"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "example1", 4, "description", "3 Section"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "example1", 5, "description", "Attachment 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "example1", 6, "description", "Attachment 2"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "example1", 1, "name", "Command NET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 2, "name", "2 PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 3, "name", "Air NET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 4, "name", "Air NET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 5, "name", "Attachment 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "example1", 6, "name", "Attachment 2"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC343", "example1", 1, "description", "1 Section"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC148", "example1"] call acre_api_fnc_setPreset;
["ACRE_PRC117F", "example1"] call acre_api_fnc_setPreset;

if(isDedicated) exitWith { false };






_this spawn {
	_unit = _this select 0;
	_localUnitType = _this select 1;
	
	waitUntil { !isNull player };
	if(_unit != player) exitWith { false }; 
	
	waitUntil { ([] call acre_api_fnc_isInitialized) };

	switch _localUnitType do {
		case 'p1': {
		[ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'p2': { [ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; };
		case 'p3': { [ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; };
		case 'p4': { [ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; };
		case 'p5': { [ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; };
		case 'p6': { [ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; };
		case 'p7': { [ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; };
		case 'p8': { [ (["ACRE_PRC343"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel; };
		
		case 'p9': {
		[ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel;
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'p10': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'p11': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'p12': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'p13': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'p14': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'p15': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'p16': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
		case 'p17': { [ (["ACRE_PRC148"] call getRadioByType), 2] call acre_api_fnc_setRadioChannel; };
				
		case 'p18': {
		[ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel;
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'p19': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p20': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p21': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p22': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p23': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p24': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p25': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p26': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p27': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p28': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p29': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		case 'p30': { [ (["ACRE_PRC148"] call getRadioByType), 3] call acre_api_fnc_setRadioChannel; };
		
		case 'p31': {
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'p32': {
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'p33': {
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'p34': {
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		
		case 'p37': {
		[ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel;
		[ (["ACRE_PRC117F"] call getRadioByType), 1] call acre_api_fnc_setRadioChannel;
		};
		case 'p38': { [ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		case 'p39': { [ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		case 'p40': { [ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		case 'p41': { [ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		case 'p42': { [ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		case 'p43': { [ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		case 'p44': { [ (["ACRE_PRC148"] call getRadioByType), 4] call acre_api_fnc_setRadioChannel; };
		
	};
};