/*
* Author: [TWC] jayman
* Turns the TWC_fieldTent launcher backpack into the actual forward base
*
* Arguments:
* 0: Player <Unit>
*
* Return Value:
* NOTHING
*
* Example:
* [player] call twc_weapons_fnc_assembleFieldTent;
*
* Public: No
*/

params ["_unit"];

_pos = (_unit modelToWorld [0, 3, 0]);

ForwardBasePos = (getPos _unit);
publicVariable "ForwardBasePos";

_flagtype = "Flag_UK_F";
if (_unit isKindOf "TWC_WW2_USMC_Base") then {_flagtype = "LIB_FlagCarrier_USA"};

ForwardBaseTent = createVehicle ["camp", _pos, [], 0, "CAN_COLLIDE"];
ForwardBaseFlag = _flagtype createVehicle getPos _unit;
ForwardBaseTent setvariable ["ace_medical_isMedicalFacility", true, true];

_unit removeWeapon "twc_fieldTent";

twc_dissassembleAction = ["LowerTent", "Disassemble", "", { [150, [], {
		[
			player,
			'AinvPknlMstpSnonWnonDr_medicUp0S',
			0,
			false
		] call ace_common_fnc_doAnimation;

		[player] spawn twc_weapons_fnc_disassembleFieldTent;
	}, {}, 'Disassembling Forward Base...'] call ace_common_fnc_progressBar;
}, { true }] call ace_interact_menu_fnc_createAction;

publicVariable "twc_dissassembleAction";

[
	ForwardBaseTent,
	0,
	["ACE_MainActions"],
	twc_dissassembleAction
] remoteExecCall ["ace_interact_menu_fnc_addActionToObject", [0,-2] select isDedicated, true];