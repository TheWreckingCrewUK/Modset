params["_pos","_name"];

parseText format["<t align='center'><t size='2' color='#ff0000'>AO created at </t><br/><t align='center'><t size='1.5' color='#ffffff'> %1</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#CC4D00'>Capture the bunkers To complete the AO </t>", _name] remoteExec ["hint"];

[West,[_name],["To capture the AO you must capture the two bunkers, and eliminate the remaining enemies from the area.",format["%1 AO",_name],""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

towerCount = 1;
bunkerCount = bunkerCount + 1;
lowPlayerCount  = 1;

for "_i" from 1 to 3 do {
	if isServer then {
		_spawnPos = [_pos,[100,200],random 360,0] call SHK_pos;
		_unit = [_spawnPos, EAST, squadAA] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 200] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 3 do {
	if isServer then {
		_spawnPos = [_pos,[0,150],random 360,0] call SHK_pos;
		_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 150] call twc_fnc_defend;
	};
};
for "_i" from 1 to 1 do {
	if isServer then {
		_spawnPos = [_pos,[100,300],random 360,0] call SHK_pos;
		_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 200] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 1 do {
	if isServer then {
		_spawnPos = [_pos,[100,300],random 360,0,[1,100]] call SHK_pos;
		_unit = [_spawnPos, EAST, apc] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 300] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 1 do {
	if isServer then {
		_spawnPos = [_pos,[100,300],random 360,0,[1,100]] call SHK_pos;
		_unit = [_spawnPos, EAST, aa] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 200] call twc_fnc_patrol;
	};
};