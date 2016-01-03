/*
* Details:
* 
* Creates a group of insurgents that spawn bewteen two radius then move to attack given marker.
*
* Required parameters:
*
* 0 - String     Marker name
*
* Addtional parameters:
*
* 1 - Array      inner and outer radius   Default: [600,700]
*          0 - Interger     inner raduis
*          1 - Interger     outer radius
*
* 2 - expression  Group that you would like to spawn   Default:(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")
*
* 3 - amount of squads
*
* Example:
*
*["bastam",[600,700],(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")] spawn twc_fnc_Spawncounter
*["respawn_west"] spawn twc_fnc_Spawncounter
* Author: [TWC] Fakematty 
*/

private ["_marker","_radius","_Group"];
params ["_AOmarker",["_radius",[900,980]],["_Group",(configfile >> "CfgGroups" >> "EAST" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_squad")],["_amount",2],["_playableunits",15]];

if (isServer) then {
        _pos = [getMarkerpos _AOmarker,_radius] call SHK_pos;
		_posmove = [getMarkerpos _AOmarker,[10,12]] call SHK_pos;
		
	if ((count playableUnits) < _playableunits) then {	
		if (random 100 > 50)then{
			hint "counter attack";
			_positionForTrigger = _posmove;
			_areaForTrigger = [1000,1000,0,false];
			_activationForTrigger = ["EAST", "NOT PRESENT", false];
			_stateForTrigger = ["this", "CounterAttackCheck = 1;", "deleteVehicle thisTrigger;"];
			_BunkerTriggerAreaOne = ([_positionForTrigger, "AREA:", _areaForTrigger, "ACT:", _activationForTrigger, "STATE:", _stateForTrigger] call CBA_fnc_createTrigger) select 0;
			_BunkerTriggerAreaOne setTriggerTimeout [0, 0, 0, true];
	
			_SpawnMarker = createMarker [ str random 1000, _pos];
			_SpawnMarker setmarkershape "ICON";
			_SpawnMarker setmarkertype "hd_arrow";
			_SpawnMarker setmarkersize [1, 1];
			_SpawnMarker setmarkercolor "ColorRed";
			_SpawnMarker setmarkertext "Enemy Counter Attack";
			_dir = [getmarkerpos _SpawnMarker , getmarkerpos _AOmarker] call BIS_fnc_dirTo;
			_SpawnMarker setmarkerdir _dir;
			for "_i" from 1 to _amount do {
				_groupSpawn = [_pos, East, _Group] call BIS_fnc_spawnGroup;
				[_groupSpawn,_posmove, 40] call CBA_fnc_taskAttack;
			};
		}else {CounterAttackCheck = 1};		
	}else {CounterAttackCheck = 1};	
};
