/*
* Details:
* 
* Creates a enemy squads to defend around a given marker
*
* Required parameters:
*
* 0 - String     Marker name
*
* Example:
*
*["bastam"] spawn twc_SpawnDefend
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/

params["_pos"];
for "_i" from 1 to 5 do{
	if (isServer) then {
		_buildings = nearestObjects[_pos,["house","buildings"],300];
		_spawnPos = _buildings call BIS_fnc_selectRandom;
		_spawnPos = getPos _spawnPos;
		_groupSpawn = [_spawnPos, East, townSpawn,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn, _spawnPos, 200, 1, False] call CBA_fnc_TaskDefend;
		{
			_x addMPEventHandler ["MPKilled",{
				if (side (_this select 1) == WEST) then{
					InsP_enemyMorale = InsP_enemyMorale + 0.06; publicVariable "InsP_enemyMorale";
				};
			}];
			_x addMagazines ["handGrenade",2];
			_x setVariable ["location",str _pos,false];
		}forEach units _groupSpawn;
	};
	
};

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [250, 250, 0, false];
_trg setTriggerActivation ["EAST", "PRESENT", False];
_trg setTriggerStatements ["count thisList < 3","largeFOBMarker setMarkertype 'flag_USA';
largeFOBMarker setMarkerText 'Friendly Controlled FOB'; [(getpos thisTrigger)] call twc_deadCleanup",""];

