params ["_enabled"];

if(!hasInterface)exitWith{};

if !(_enabled) exitWith {};

player addEventHandler ["GetOutMan",{
	if(typeOf (_this select 2) == "B_G_Boat_Transport_01_F") then{
		player allowDamage false;
		_null = spawn{
			sleep 3;
			player allowDamage true;
		};
	};
}];