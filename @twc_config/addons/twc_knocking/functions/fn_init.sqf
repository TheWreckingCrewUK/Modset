//BRIDGE Tank Knocking Script

TWC_fnc_knockOnTank = {

	_tank = _this select 0;
	
	[[_tank],"fn_bridge_knockedOn"] call BIS_fnc_MP;
	
	[_tank, "TWC_sound_knockMetal"] call CBA_fnc_globalSay3d;
	
};

TWC_fnc_knockedOn = {

	_tank = _this select 0;

	if (vehicle player == _tank) then {
		
		playSound "TWC_sound_knockMetalInside";
		
	};

};