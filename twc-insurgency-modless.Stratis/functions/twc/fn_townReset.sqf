params["_pos","_thisList","_marker"];

[_thisList,_pos,_marker]spawn{
	{
		if(str (_x getVariable "unitsHome") == str (_this select 1))then{
			deleteVehicle _x;
		};
	}forEach (_this select 0);
	{deleteGroup _x}forEach allGroups;
	
	(_this select 2) setMarkerColor "colorEAST";
};
[_pos,_marker] call twc_fnc_spawnTownTrigger;