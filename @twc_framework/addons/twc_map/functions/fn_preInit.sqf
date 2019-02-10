if !(hasInterface) exitWith {};

twc_map_temporary = false;
twc_map_lookingAt = 0;
twc_map_temporaryMarkers = [];

twc_map_mapObject = "Land_Map_blank_F";
_worldMap = format["Land_Map_%1_F", worldName];

if (!isNull (configFile >> "CfgVehicles" >> _worldMap)) then {
	twc_map_mapObject = _worldMap;
};