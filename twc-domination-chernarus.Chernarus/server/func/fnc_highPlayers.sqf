params["_pos","_name"];

parseText format["<t align='center'><t size='2' color='#ff0000'>AO created at </t><br/><t align='center'><t size='1.5' color='#ffffff'> %1</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#CC4D00'>Capture the bunkers and Destroy the radio tower quickly to stop enemy reinforcements. </t>", _name] remoteExec ["hint"];

[West,[_name],["To capture the AO you must capture the three bunkers, Destroy the Radio tower and then eliminate the remaining enemies from the area. While the radio tower is alive the enemy will be able to call for reinforcements.",format["%1 AO",_name],""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

	
for "_i" from 1 to 1 do {
	if isServer then {
		_spawnPos = [_pos,[100,300],random 360,0,[1,100]] call SHK_pos;
		_tower = radioTower createVehicle _spawnPos;
		_tower setDamage 0.99;
		_tower addEventHandler ["Killed",{"Radio Tower Destroyed. The enemies can no longer call in Reinforcements" remoteExec ["hint"]; "radioMarker" setMarkerColor "colorWEST"; towerCount = 1}];

		_spawnPos = [(_spawnPos select 0) + 5,(_spawnPos select 1), (_spawnPos select 2)];
		_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 50] call twc_fnc_patrol;
		
		_markerstr = createMarker ["radioMarker",_spawnPos];
		_markerstr setMarkerShape "ICON";
		_markerstr setMarkerType "loc_Transmitter";
		_markerstr setMarkerColor "colorEAST";
		_markerstr setMarkerSize [0.75,0.75];
		};
};

for "_i" from 1 to 3 do {
	if isServer then {
		_spawnPos = [_pos,[200,500],random 360,0] call SHK_pos;
		_unit = [_spawnPos, EAST, squadAA] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 200] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 6 do {
	if isServer then {
		_spawnPos = [_pos,[0,250],random 360,0] call SHK_pos;
		_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 150] call twc_fnc_defend;
	};
};
for "_i" from 1 to 5 do {
	if isServer then {
		_spawnPos = [_pos,[200,600],random 360,0] call SHK_pos;
		_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 200] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 1 do {
	if isServer then {
		_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
		_unit = [_spawnPos, EAST, tank] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 200] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 1 do {
	if isServer then {
		_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
		_unit = [_spawnPos, EAST, ifv] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 300] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 3 do {
	if isServer then {
		_spawnPos = [_pos,[400,700],random 360,0,[1,100]] call SHK_pos;
		_unit = [_spawnPos, EAST, apc] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 300] call twc_fnc_patrol;
	};
};
for "_i" from 1 to 2 do {
	if isServer then {
		_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
		_unit = [_spawnPos, EAST, aa] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 200] call twc_fnc_patrol;
	};
};