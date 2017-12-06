//BRIDGE Tank Knocking Script

	systemchat ("initmortar");
TWC_fnc_idfsiren = {

	systemchat ("firedmortar");
	_tank = _this select 0;
	
	[[_tank],"TWC_fnc_knockedOn"] call BIS_fnc_MP;
	
	[_tank, "TWC_sound_idfsiren"] call CBA_fnc_globalSay3d;
	
};

TWC_fnc_knockedOn = {

	_tank = _this select 0;

	if (vehicle player == _tank) then {
		
		playSound "TWC_sound_knockMetalInside";
		
	};

};
