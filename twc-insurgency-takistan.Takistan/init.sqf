execVM "Zues.sqf";
execVM "SHK_pos\shk_pos_init.sqf";

waitUntil {!isNull player};
waitUntil {player == player};

if (isNil "nonQuestionableList") then {
	nonQuestionableList = [];
	publicVariable "nonQuestionableList";
};


QuestionPersonAction = ["QuestionPerson","Question Person","",{call InsP_fnc_questionDisplay},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["LOP_TAK_CIV_Man_01", 0, ["ACE_MainActions"], QuestionPersonAction] call ace_interact_menu_fnc_addActionToClass;

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