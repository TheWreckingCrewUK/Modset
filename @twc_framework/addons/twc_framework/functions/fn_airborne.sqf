/*
* Author: [TWC] Rik
* Spawns a cargo plane with group(s) for airborne assault.
*
* Arguments:
* 0: Spawn Location <ARRAY>
* 1: Airdrop Marker <STRING>
* 2: Delete Marker <STRING>
* 3: Plane Class <STRING>
* 4: Group Class <STRING>
* 5: Group Amount <NUMBER>
* 6: Attack Location <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* ["planeSpawn", "planeDrop", "planeDelete", "Modern_British", "", "", 2, "attack_location", "this execVM 'infantry_move.sqf'"] call twc_fnc_Airborne;
*
* Public: No
*/
params ["_pos", "_destination", "_end", "_Plane_Units", "_type_plane", "_type_cargo", "_amount_cargo", "_attackpos", "_script"];

if (isServer) then 
{
	if ((typeName _pos) != "ARRAY") then
	{
		_pos = getMarkerPos _pos;
	};
	if ((typeName _destination) != "ARRAY") then
	{
		_destination = getMarkerPos _destination;
	};
	if ((typeName _end) != "ARRAY") then
	{
		_end = getMarkerPos _end;
	};
	if ((typeName _attackpos) != "ARRAY") then
	{
		_attackpos = getMarkerPos _attackpos;
	};
	_pos = [_pos select 0, _pos select 1, 200];
	_dir = _pos getDir _destination;
	_side = "";
	
	if ("" isEqualTo _type_plane && "" isEqualTo _type_cargo) then 
	{
		switch (_Plane_Units) do
		{
			case ("Modern_British"): {_type_plane = "CUP_B_C130J_GB"; _type_cargo = ["Modern_British_Squadleader", "Modern_British_Rifleman", "Modern_British_Grenadier", "Modern_British_Autorifleman", "Modern_British_2IC", "Modern_British_Autorifleman", "Modern_British_Machinegunner", "Modern_British_Marksman"]; _side = 1;};
			case ("Cold_British"): {_type_plane = "CUP_B_C130J_GB"; _type_cargo = ["ColdWar_Section_Leader_Para", "ColdWar_Rifleman_Para", "ColdWar_Rifleman_SUIT_Para", "ColdWar_AT_Para", "ColdWar_AT_Ass_Para", "ColdWar_2IC_Para", "ColdWar_MG_Para", "ColdWar_MG_AS_Para"]; _side = 1;};
			case ("1990_British"): {_type_plane = "CUP_B_C130J_GB"; _type_cargo = ["1990_British_SectionCommander", "1990_British_Rifleman", "1990_British_Rifleman_AT", "1990_British_Gunner", "1990_British_2IC", "1990_British_Rifleman", "1990_British_Rifleman_AT", "1990_British_Gunner"]; _side = 1;};
			case ("WW2_British"): {_type_plane = "LIB_C47_RAF"; _type_cargo = ["WW2_Para_British_Section_Commander", "WW2_Para_British_Rifleman", "WW2_Para_British_Rifleman", "WW2_Para_British_Rifleman", "WW2_Para_British_Rifleman", "WW2_Para_British_2IC", "WW2_Para_British_MG", "WW2_Para_British_MGASS"]; _side = 0;};
			case ("Cold_VDV"): {_type_plane = "an12BK_RU"; _type_cargo = ["BCCCCP_VDV_Squadlead_Para", "BCCCCP_VDV_MG_RPK_Para", "BCCCCP_VDV_Grenadier_Para", "BCCCCP_VDV_GrenadierAss_Para", "BCCCCP_VDV_Rifleman_Para", "BCCCCP_VDV_Rifleman_Para", "BCCCCP_VDV_Rifleman_Para", "BCCCCP_VDV_Rifleman_Para", "BCCCCP_VDV_SenRifleman_Para"]; _side = 0;};
			case ("Modern_VDV"): {_type_plane = "an12BK_RU"; _type_cargo = ["CUP_O_RU_Soldier_SL_VDV_EMR", "CUP_O_RU_Soldier_MG_VDV_EMR", "CUP_O_RU_Soldier_AT_VDV_EMR", "CUP_O_RU_Soldier_LAT_VDV_EMR", "CUP_O_RU_Soldier_GL_VDV_EMR", "CUP_O_RU_Soldier_Marksman_VDV_EMR", "CUP_O_RU_Soldier_MG_VDV_EMR", "CUP_O_RU_Soldier_AT_VDV_EMR", "CUP_O_RU_Soldier_AR_VDV_EMR", "CUP_O_RU_Soldier_LAT_VDV_EMR", "CUP_O_RU_Soldier_GL_VDV_EMR", "CUP_O_RU_Soldier_VDV_EMR"]; _side = 0;};
			case ("SLA"): {_type_plane = "CUP_O_C47_SLA"; _type_cargo = ["CUP_O_sla_Soldier_SL", "CUP_O_sla_Soldier_MG", "CUP_O_sla_Soldier_AT", "CUP_O_sla_Soldier_GL", "CUP_O_sla_Soldier_MG", "CUP_O_sla_Soldier_LAT", "CUP_O_sla_Soldier_GL", "CUP_O_sla_Soldier_AAT", "CUP_O_sla_Soldier_AMG"]; _side = 0;};
			case ("RACS"): {_type_plane = "CUP_I_C130J_RACS"; _type_cargo = ["CUP_I_RACS_SL", "CUP_I_RACS_MMG", "CUP_I_RACS_Soldier", "CUP_I_RACS_GL", "CUP_I_RACS_MMG", "CUP_I_RACS_Soldier_MAT", "CUP_I_RACS_GL", "CUP_I_RACS_Medic", "CUP_I_RACS_Sniper"]; _side = 2;};
			case ("Takistani_Army_1"): {_type_plane = "CUP_O_C130J_TKA"; _type_cargo = ["CUP_O_TK_Soldier_SL", "CUP_O_TK_Soldier_MG", "CUP_O_TK_Soldier_AT", "CUP_O_TK_Soldier_GL", "CUP_O_TK_Soldier_MG", "CUP_O_TK_Soldier_LAT", "CUP_O_TK_Soldier_GL", "CUP_O_TK_Soldier_AAT", "CUP_O_TK_Soldier_AMG"]; _side = 0;};
			case ("Takistani_Army_2"): {_type_plane = "CUP_O_AN2_TK"; _type_cargo = ["CUP_O_TK_Soldier_SL", "CUP_O_TK_Soldier_MG", "CUP_O_TK_Soldier_AT", "CUP_O_TK_Soldier_GL", "CUP_O_TK_Soldier_MG", "CUP_O_TK_Soldier_LAT", "CUP_O_TK_Soldier_GL", "CUP_O_TK_Soldier_AAT", "CUP_O_TK_Soldier_AMG"]; _side = 0;};
		};
	} else 
	{
		_side = getNumber (configFile >> "cfgVehicles" >> (_type_cargo select 0) >> "side");
	};
	switch (_side) do
	{
		case 0: {_side = east};
		case 1: {_side = west};
		case 2: {_side = resistance};
		case 3: {_side = civilian};
		default {_side = east};
	};
	
	_vehicle = [_pos, _dir, _type_plane, _side] call BIS_fnc_spawnVehicle;
	_plane = _vehicle select 0;
	_plane setVariable ["twc_cacheDisabled",true];
	if (_type_plane == "an12BK_RU") then {
		_plane setObjectTextureGlobal[0,"\an12bkv3\liveries\18\An12main01.pac"];
		_plane setObjectTextureGlobal[1,"\an12bkv3\liveries\18\An12main02.pac"];
		_plane setObjectTextureGlobal[2,"\an12bkv3\liveries\18\An12main03.pac"];
		_plane setObjectTextureGlobal[3,"\an12bkv3\liveries\18\An12wing.pac"];
	};
	_crewGroup = _vehicle select 2;
	
	_plane flyInHeight 200;
	_plane setVelocity [(sin _dir) * 80, (cos _dir) * 80, 0];
	_plane limitSpeed 200;
	
	for [{_i = 0}, {_i < _amount_cargo}, {_i=_i+1}] do
	{
		_group = [_pos, _side, _type_cargo] call BIS_fnc_spawnGroup;
		{
			_x moveInCargo _plane;
		} forEach (units _group);
		
		_waypoint_infantry = _group addWaypoint [_attackpos, 50];
		_waypoint_infantry setWaypointType "SAD";
		_waypoint_infantry setWaypointStatements ["true", _script];
	};
	
	twc_ai_paradrop = 
	{
		params ["_v"];
		_cargo = assignedCargo _v;
		_delay = (1/(((speed _v) max 55)/150));
		{
			// perform action only for cargo
			_x disableAI "MOVE";
			_x disableCollisionWith _v;
			moveout _x;
			unassignVehicle _x;
			[_x] allowGetIn false;
			_x setDir (getDir _v);

			//sleep _delay;
			sleep 0.2;

			//if units don't have a parachute type backpack then create parachute for him
			private _type = getText (configFile >> "cfgVehicles" >> backpack _x >> "ParachuteClass");
			if(!(_type isKindOf "ParachuteBase"))then
			{
				private _para = "NonSteerable_Parachute_F" createVehicle [0,0,0];
				_para setPosASL (getPosASLVisual _x);
				_para setVectorDirAndUp [vectorDirVisual _x, vectorUpVisual _x];
				if (! local _x) then {[_x,_para] remoteExecCall ["moveInDriver",_x]} else {_x moveInDriver _para;};
				_x assignAsDriver _para;
				[_x] allowGetIn true;
				[_x] orderGetIn true;
			};
			_x enableAI "MOVE";
		} foreach _cargo;
		
		{
			(group _x) leaveVehicle _v;
			_x enableCollisionWith _v;
		} foreach _cargo;
	};
	
	_destination_2 = _destination getPos [400, _pos getDir _destination];
	
	_waypoint_plane_1 = _crewGroup addWaypoint [_destination, 0];
	_waypoint_plane_1 setWaypointType "MOVE";
	_waypoint_plane_1 setWaypointStatements ["true", "[vehicle this] spawn twc_ai_paradrop;"];
	_waypoint_plane_2 = _crewGroup addWaypoint [_destination_2, 0];
	_waypoint_plane_2 setWaypointType "MOVE";
	_waypoint_plane_3 = _crewGroup addWaypoint [_end, 0];
	_waypoint_plane_3 setWaypointType "MOVE";
	_waypoint_plane_3 setWaypointStatements ["true", "_vehicle = vehicle this; {_vehicle deleteVehicleCrew _x} forEach (crew _vehicle); deleteVehicle _vehicle"];
};