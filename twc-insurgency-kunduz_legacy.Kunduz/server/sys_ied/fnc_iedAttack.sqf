params["_unit"];

if((getPos _unit) distance2D (getMarkerPos "crate") < 500)exitWith{};
_num = 0;
_total = 5;
_pos = getPos _unit;
_group = createGroup East;
_spawnPos = [_pos,150,[0,360]] call SHK_pos;
for "_i" from 1 to _total do{
	_unit = _group createUnit [(townSpawn select _num), _spawnPos,[], 5,"NONE"];
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
[_group, (_pos), 0] call CBA_fnc_taskAttack;