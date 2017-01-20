/*
* Details:
* 
* Creates a enemy squad to defend around a given marker
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

_num = 0;
_total = (6 + -InsP_enemyMorale);
_total = if(_total > 10)then{10}else{_total};
_group = createGroup East;

for "_i" from 1 to _total do{
	_unit = _group createUnit [(townSpawn select _num), _pos,[], 5,"NONE"];
	_unit addEventHandler ["Killed",{
		[(_this select 0)] call twc_fnc_deleteDead;
		if (side (_this select 1) == WEST) then{
			InsP_enemyMorale = InsP_enemyMorale + 0.06; publicVariable "InsP_enemyMorale";
		};
	}];
	_unit addMagazines ["handGrenade",2];
	_unit setVariable ["unitsHome",_pos,false];
	_num = _num + 1;
	sleep 0.2;
};
[_group, (getPos ((units _group) select 0)), 150, 3, false] call CBA_fnc_TaskDefend;

