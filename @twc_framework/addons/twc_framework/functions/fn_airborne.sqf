/*
* Author: [TWC] Rik
* Spawns a cargo plane with group(s) for airborne assault.
*
* Arguments:
* 0: Drop Location <ARRAY> OR <STRING>
* 1: Drop Direction <NUMBER>
* 2: Plane/Unit Preset <STRING>
* 3: Plane Class <STRING>
* 4: Group Class <STRING>
* 5: Group Amount <NUMBER>
* 6: Attack Location <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* ["planeDrop", "270", "Modern_British_Woodland", "", "", 2, "attack_location", "this execVM 'infantry_move.sqf'"] call twc_fnc_airborne;
*
* Public: No
*/
params ["_dropPos", "_dropDir", "_planeUnits", "_typePlane", "_typeCargo", "_amountCargo", "_attackPos", "_script"];

if (isServer) then {
	_dropPos = switch (typeName _dropPos) do {
		case "STRING": {getMarkerPos _dropPos;};
		case "ARRAY": {_dropPos};
		default {throw "Invalid Drop Location Type"};
	};
	_attackPos = switch (typeName _attackPos) do {
		case "STRING": {getMarkerPos _attackPos;};
		case "ARRAY": {_attackPos};
		default {throw "Invalid Infantry Attack Location Type"};
	};

	_spawnPos = _dropPos getPos [4000, _dropDir - 180];
	_spawnPos set [2, 200];
	_deletePos = _dropPos getPos [4000, _dropDir];
	_deletePos set [2, 200];

	if (_typePlane isEqualTo "" && _typeCargo isEqualTo "") then {
		switch (_planeUnits) do {
			case "Modern_British_Woodland": {
				_typePlane = "CUP_B_C130J_GB";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "TWC_Groups_Modern" >> "TWC_Groups_Modern_Regular_Woodland" >> "Section";
			};
			case "Cold_British_Woodland": {
				_typePlane = "CUP_B_C130J_GB";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "TWC_Groups_ColdWar" >> "TWC_Groups_ColdWar_Airborne_Woodland" >> "Section";
			};
			case "Cold_British_Desert": {
				_typePlane = "CUP_B_C130J_GB";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "TWC_Groups_ColdWar" >> "TWC_Groups_ColdWar_Airborne_Desert" >> "Section";
			};
			case "1990_British_Woodland": {
				_typePlane = "CUP_B_C130J_GB";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "TWC_Groups_Millennial" >> "TWC_Groups_1990_Regular_Woodland" >> "Section";
			};
			case "1990_British_Desert": {
				_typePlane = "CUP_B_C130J_GB";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "TWC_Groups_Millennial" >> "TWC_Groups_1990_Regular_Desert" >> "Section";
			};
			case "1990_British_Tropic": {
				_typePlane = "CUP_B_C130J_GB";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "TWC_Groups_Millennial" >> "TWC_Groups_1990_Regular_Tropic" >> "Section";
			};
			case "1990_British_Arctic": {
				_typePlane = "CUP_B_C130J_GB";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "TWC_Groups_Millennial" >> "TWC_Groups_1990_Regular_Arctic" >> "Section";
			};
			case "WW2_British_Woodland": {
				_typePlane = "LIB_C47_RAF";
				_typeCargo = configfile >> "CfgGroups" >> "INDEP" >> "TWC_Groups_WW2" >> "TWC_Groups_WW2_UK_Airborne_Woodland" >> "Section";
			};
			case "WW2_British_Arctic": {
				_typePlane = "LIB_C47_RAF";
				_typeCargo = configfile >> "CfgGroups" >> "INDEP" >> "TWC_Groups_WW2" >> "TWC_Groups_WW2_UK_Airborne_Arctic" >> "Section";
			};
			case "Cold_VDV": {
				_typePlane = "an12BK_RU";
				_typeCargo = configfile >> "CfgGroups" >> "East" >> "BCCCCP" >> "BBC" >> "Airborne_Section";
			};
			case "Modern_VDV": {
				_typePlane = "an12BK_RU";
				_typeCargo = configfile >> "CfgGroups" >> "East" >> "CUP_O_RU" >> "Infantry" >> "CUP_O_RU_InfSquad_VDV_M_EMR";
			};
			case "SLA": {
				_typePlane = "CUP_O_C47_SLA";
				_typeCargo = configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad";
			};
			case "RACS": {
				_typePlane = "CUP_I_C130J_RACS";
				_typeCargo = configfile >> "CfgGroups" >> "Indep" >> "CUP_I_RACS" >> "Infantry" >> "CUP_I_RACS_InfantrySquad";
			};
			case "Takistani_Army_1": {
				_typePlane = "CUP_O_C130J_TKA";
				_typeCargo = configfile >> "CfgGroups" >> "East" >> "CUP_O_TK" >> "Infantry" >> "CUP_O_TK_InfantrySquad";
			};
			case "Takistani_Army_2": {
				_typePlane = "CUP_O_AN2_TK";
				_typeCargo = configfile >> "CfgGroups" >> "East" >> "CUP_O_TK" >> "Infantry" >> "CUP_O_TK_InfantrySquad";
			};
			case "Fallschirmjäger": {
				_typePlane = "LIB_Ju52";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "LIB_FSJ" >> "Jump" >> "LIB_FSJ_Infantry_squad";
			};
			case "Fallschirmjäger_Sicily": {
				_typePlane = "LIB_Ju52";
				_typeCargo = configfile >> "CfgGroups" >> "West" >> "LIB_FSJ" >> "DAK" >> "LIB_FSJ_Infantry_squad";
			};
		};
	};
	_side = switch getNumber (_typeCargo >> "side") do {
		case 0: {east};
		case 1: {west};
		case 2: {resistance};
		case 3: {civilian};
		default {throw "Invalid Object in Paradrop"};
	};

	_vehicleArray = [_spawnPos, _dropDir, _typePlane, _side] call BIS_fnc_spawnVehicle;
	_vehicleArray params ["_plane", "_crew", "_crewGroup"];

	if (_typePlane isEqualTo "an12BK_RU") then {
		_plane setObjectTextureGlobal[0, "\an12bkv3\liveries\18\An12main01.pac"];
		_plane setObjectTextureGlobal[1, "\an12bkv3\liveries\18\An12main02.pac"];
		_plane setObjectTextureGlobal[2, "\an12bkv3\liveries\18\An12main03.pac"];
		_plane setObjectTextureGlobal[3, "\an12bkv3\liveries\18\An12wing.pac"];
	};

	_plane flyInHeight 200;
	_plane setVelocityModelSpace [0, 55, 0];
	_plane limitSpeed 200;
	_plane setVariable ["twc_cacheDisabled",true];

	_crewGroup setBehaviour "CARELESS";

	for "_i" from 1 to _amountCargo do {
		_group = [_spawnPos, _side, _typeCargo] call BIS_fnc_spawnGroup;
		{
			_x moveInCargo _plane;
		} forEach (units _group);
		
		_waypoint_infantry = _group addWaypoint [_attackPos, 50];
		_waypoint_infantry setWaypointType "SAD";
		_waypoint_infantry setWaypointStatements ["true", _script];
	};

	_wpPlane_1 = _crewGroup addWaypoint [_dropPos, 0];
	_wpPlane_1 setWaypointType "MOVE";
	_wpPlane_1 setWaypointStatements ["true", "[vehicle this] call twc_fnc_airborne_paradrop;"];
	_wpPlane_2 = _crewGroup addWaypoint [_deletePos, 0];
	_wpPlane_2 setWaypointType "MOVE";
	_wpPlane_2 setWaypointStatements ["true", "_vehicle = vehicle this; {_vehicle deleteVehicleCrew _x} forEach (crew _vehicle); deleteVehicle _vehicle"];
};