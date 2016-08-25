if(useArsenal == 1)then{
	if(isModded == 0)then{
		execVM "client\arsenal\init.sqf";
		execVM "client\restrict\init.sqf";
	};
	if(isModded == 1)then{
		execVM "client\arsenalModded\init.sqf";
		execVM "client\restrictModded\init.sqf";
	};
};
if(useArsenal == 0)then{
	if(isModded == 0)then{
		hint "Mission is not set up for modded without the arsenal";
	};
	if(isModded == 1)then{
		execVM "client\boxesModded\init.sqf";
		execVM "client\restrictModded\init.sqf";
	};
	if(isModded == 2)then{
		execVM "client\boxesModdedWW2\init.sqf";
		execVM "client\restrictModdedWW2\init.sqf";
	};
};

execVM "client\cleanup\gear.sqf";
execVM "client\constantHints\init.sqf";

if(isModded == 0 || isModded == 1)then{
	TWC_fnc_getAlphaList = {
		execVM "client\playerlist\alpha.sqf";
	};
	TWC_fnc_getBravoList = {
		execVM "client\playerlist\bravo.sqf";
	};
	TWC_fnc_getCharlieList = {
		execVM "client\playerlist\charlie.sqf";
	};
	TWC_fnc_getAirList = {
	execVM "client\playerlist\air.sqf";
	};
	TWC_fnc_getArmourList = {
	execVM "client\playerlist\armourcrew.sqf";
	};
};

if(isModded == 2)then{
	TWC_fnc_getAlphaList = {
		execVM "client\playerlistWW2\alpha.sqf";
	};
	TWC_fnc_getBravoList = {
		execVM "client\playerlistWW2\bravo.sqf";
	};
	TWC_fnc_getCharlieList = {
		execVM "client\playerlistWW2\charlie.sqf";
	};
	TWC_fnc_getAirList = {
	execVM "client\playerlistWW2\air.sqf";
	};
	TWC_fnc_getArmourList = {
	execVM "client\playerlistWW2\armourcrew.sqf";
	};
};

playerListAction = ["thisStartsTheList","Player List","", {},{true}] call ace_interact_menu_fnc_createAction;
alphaAction = ["AlphaList","Alpha List","", {call TWC_fnc_getAlphaList;},{true}] call ace_interact_menu_fnc_createAction;
bravoAction = ["BravoList","Bravo List","", {call TWC_fnc_getBravoList;},{true}] call ace_interact_menu_fnc_createAction;
charlieAction = ["CharlieList","Charlie List","", {call TWC_fnc_getCharlieList;},{true}] call ace_interact_menu_fnc_createAction;
airAction = ["AirList","Air List","", {call TWC_fnc_getAirList;},{true}] call ace_interact_menu_fnc_createAction;
armourAction = ["ArmourList","Armour List","", {call TWC_fnc_getArmourList;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], playerListAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], alphaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], bravoAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], charlieAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], airAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], armourAction] call ace_interact_menu_fnc_addActionToObject;

while {true}do{
	if(player distance2D (getMarkerPos "Arsenal") < 10)then{
		if((primaryWeapon player) in hostilesWeapons)then{player removeWeapon (primaryWeapon player)};
		if((SecondaryWeapon player) in hostilesWeapons)then{player removeWeapon (secondaryWeapon player)};
		if((handgunWeapon player) in hostilesWeapons)then{player removeWeapon (handgunWeapon player)};
	};
	sleep 5;
};