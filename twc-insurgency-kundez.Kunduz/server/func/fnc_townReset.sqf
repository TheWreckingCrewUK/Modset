params["_pos","_thisList"];
{
	diag_log _x;
	diag_log (_x getVariable "unitsHome");
}forEach _thisList;
[_thisList,_pos]spawn{
	{
		if(str (_x getVariable "unitsHome") == str (_this select 1))then{
			deleteVehicle _x;
		};
	}forEach (_this select 0);
	
	sleep 1;
	
	_trg = createTrigger ["EmptyDetector", (_this select 1)];
	_trg setTriggerArea [500, 500, 0, false];
	_trg setTriggerActivation ["West", "PRESENT", False];
	_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),3,100,1,[400,500],thisList] call twc_townSetup",""];
};