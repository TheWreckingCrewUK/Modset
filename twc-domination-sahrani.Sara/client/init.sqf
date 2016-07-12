if(isModded == 0)then{
	execVM "client\arsenal\init.sqf";
	execVM "client\restrict\init.sqf";
};
if(isModded == 1)then{
	execVM "client\arsenalModded\init.sqf";
	execVM "client\restrictModded\init.sqf";
};
execVM "client\cleanup\gear.sqf";
execVM "client\constantHints\init.sqf";

while {true}do{
	if(player distance2D (getMarkerPos "Arsenal") < 10)then{
		if((primaryWeapon player) in hostilesWeapons)then{player removeWeapon (primaryWeapon player)};
		if((SecondaryWeapon player) in hostilesWeapons)then{player removeWeapon (secondaryWeapon player)};
		if((handgunWeapon player) in hostilesWeapons)then{player removeWeapon (handgunWeapon player)};
	};
	sleep 5;
};