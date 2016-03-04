if (isServer) then {execVM "server\init.sqf";};
"iedRestrictionZone" setMarkerAlpha 0;

execVM "client\zeus\zeus.sqf";
execVM "client\zeus\zeus-Fakematty.sqf";
execVM "client\zeus\zeus-jayman.sqf";

waitUntil {!isNull player};
waitUntil {player == player};

execVM "SHK_pos\shk_pos_init.sqf";

russiancheck = 0;

// Werthles Headless Script Parameters v2.3
// 1. Repeating - true/Once - false,
// 2. Time between repeats (seconds),
// 3. Debug available for all - true/Just available for admin/host - false,
// 4. Advanced balancing - true/Simple balancing - false,
// 5. Delay before executing (seconds),
// 6. Additional syncing time between groups transferred to try to reduce bad unit transfer caused by desyncs (seconds)
// 7. Display an initial setup report after the first cycle, showing the number of units moved to HCs,
// 8. Addition phrases to look for when checking whether to ignore.
// Unit names, group names, unit's current transport vehicle, modules synced to units and unit class names will all be checked for these phrases
// Format:
// ["UnitName","GroupCallsignName","SupportProviderModule1","TypeOfUnit"]
// E.g. ["BLUE1","AlphaSquad","B_Heli_Transport_01_camo_F"] (including ""s)
// Specifying "B_Heli" would stop all units with that class type from transferring to HCs
// However, if you specify "BLUE1", "NAVYBLUE10" will also be ignored

[true,30,false,true,30,5,true,[]] execVM "server\headlessClient\WerthlesHeadless.sqf";

waitUntil {!isNull player};
waitUntil {player == player};

InsP_playerCiv = str(side player) == 'CIV';

if (isNil "nonQuestionableList") then {
	nonQuestionableList = [];
	publicVariable "nonQuestionableList";
};

QuestionPersonAction = ["QuestionPerson","Question Person","",{call InsP_fnc_questionDisplay},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["C_man_1", 0, ["ACE_MainActions"], QuestionPersonAction] call ace_interact_menu_fnc_addActionToClass;

// IED defuse action
_ied = "";
_defuseAction = [
    "InsP_defuse_ied",
    "Disarm",
    "",
    {
        params ["_args"];
        _args params ["_ied"];
        [
            5,
            [_ied],
            {
                params ["_args"];
                _args params ["_ied"];
                _trigger = _ied getVariable ["InsP_trigger", objNull];
                deleteVehicle _trigger;
                deleteVehicle _ied;
                InsP_iedDestroyed = InsP_iedDestroyed + 1;
                InsP_enemyMorale = InsP_enemyMorale + 0.1;
                publicVariable "InsP_iedDestroyed";
                publicVariable "InsP_enemyMorale";
				_markerstr = createMarker [str random 10000, player];
				_markerstr setMarkerShape "ICON";
				_markerstr setMarkerType "mil_triangle";
				_markerstr setMarkerColor "ColorYellow";
				_markerstr setMarkerText "IED Diffused";
				[_markerstr, true] call CBA_fnc_setMarkerPersistent;
				[]
				
            },
            {},
            "Disarming..."
        ] call ACE_common_fnc_progressBar;
    },
    {true},
    nil,
    [_ied]
] call ACE_interact_menu_fnc_createAction;

["IEDLandBig_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;
["IEDLandSmall_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;

["IEDLandBig_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;
["IEDLandSmall_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;

cutText ["Receiving...", "BLACK", .001];

titleText ["The Wrecking Crew","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;

titleText ["Insurgency Plus","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;

memberIDArray = ["_SP_PLAYER_"];
InsP_playersKilledAsCivs = [""];

_pilots = ["p21", "p22"];
_humancivs = ["humanCiv1", "humanCiv2", "humanCiv3"];

if ((str player) in _pilots && (count playableUnits) < 5) then {
    ["end4", false, 0] call BIS_fnc_endMission;
};
if ((str player) in _humancivs && (count playableUnits) < 10 && !((name player) in InsP_playersKilledAsCivs) && player in memberIDArray) then {
	["end6", false, 0] call BIS_fnc_endMission;
};
cutText ["", "BLACK IN", 2];

titleText ["Enjoy your stay", "PLAIN"];
titleFadeOut 4;
