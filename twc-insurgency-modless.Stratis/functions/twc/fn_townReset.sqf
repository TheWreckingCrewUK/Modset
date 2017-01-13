params["_pos","_thisList","_marker"];

[_thisList,_pos,_marker]spawn{
	{
		if(str (_x getVariable "unitsHome") == str (_this select 1))then{
			deleteVehicle _x;
		};
	}forEach (_this select 0);
	{deleteGroup _x}forEach allGroups;
	
	_trg = createTrigger ["EmptyDetector", (_this select 1)];
	_trg setTriggerArea [500, 500, 0, false];
	_trg setTriggerActivation ["West", "PRESENT", False];
	_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)",format["['%1',(getPos thisTrigger),3,100,1,[100,200],thisList] spawn twc_townSetup",(_this select 2)],""];
};