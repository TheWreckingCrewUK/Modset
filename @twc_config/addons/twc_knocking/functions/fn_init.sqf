//BRIDGE Tank Knocking Script

TWC_fnc_knockOnTank = {

	_tank = _this select 0;
	
	[[_tank],"fn_bridge_knockedOn"] call BIS_fnc_MP;
	
	_tank say3d "TWC_sound_knockMetal";
	
};

TWC_fnc_knockedOn = {

	_tank = _this select 0;

	if (vehicle player == _tank) then {
		
		playSound "TWC_sound_knockMetalInside";
		
	};

};