while {(side player) == civilian} do {

	civKill = player addMPEventHandler ["MPKilled", {[_this select 0, _this select 1] spawn InsP_fnc_civKill;}];

	waitUntil {!((primaryweapon player == "") || !(secondaryweapon player == "")  || (primaryweapon player == "ACE_FakePrimaryWeapon") || "APERSTripMin_Wire_Mag" in (magazines player) || "IEDLandSmall_Remote_Mag" in (magazines player) || "IEDLandBig_Remote_Mag" in (magazines player) || "IEDUrbanSmall_Remote_Mag" in (magazines player) || "IEDUrbanBig_Remote_Mag" in (magazines player))};
	_name = primaryweapon player; hint str _name;

	cutText ["Receiving...", "BLACK", 0.001];

	_beforePos = getPosATL player;
	_beforeDir = getDir player;
	player setPosATL [((getMarkerPos "respawn_civilian" select 0) + (random 10)),((getMarkerPos "respawn_civilian" select 1) + (random 10)),0];

	player removeMPEventHandler ["MPKilled", 0];
	_switchScript = ["C_man_1", "LEAVEWEPS"] spawn CBA_fnc_switchPlayer;
	waitUntil {scriptDone _switchScript};
	_resGroup = createGroup opfor;
	[player] joinSilent _resGroup;
	 [player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;
	player addItem "ACE_EarPlugs";
	removeheadgear player;
	player forceAddUniform "CUP_U_I_GUE_Flecktarn3";
	for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
	for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
	hintSilent "You are now an insurgent.";

	cutText ["","BLACK IN",0];

    player setPosATL _beforePos;
    player setDir _beforeDir;

	waitUntil {!alive player};

	DeadInsurgents pushBack (getPlayerUID player);
	_updateList = publicVariable "DeadInsurgents";

	_endMission = ["end1", false, 0] call BIS_fnc_endMission;

	sleep 10;
};
