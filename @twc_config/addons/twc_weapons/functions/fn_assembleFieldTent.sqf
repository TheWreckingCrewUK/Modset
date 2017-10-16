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

params["_unit"];
_unit = player;

_pos = getPos _unit;	
ForwardBasePos = _pos;
publicVariable "ForwardBasePos";
ForwardBaseFlag = "Flag_UK_F" createVehicle _pos;	
ForwardBaseTent = "camp" createVehicle _pos;
ForwardBaseTent setvariable ["ace_medical_isMedicalFacility", true,true];

_unit removeWeapon "twc_fieldTent";



twc_dissassembleAction = ["LowerTent","Disassemble","",{[150, [], {
[player,'AinvPknlMstpSnonWnonDr_medicUp0S',0,false] call ace_common_fnc_doAnimation;[player] spawn twc_weapons_fnc_disassembleFieldTent;}, {}, 'Disassembling Forward Base...'] call ace_common_fnc_progressBar;},{true}] call ace_interact_menu_fnc_createAction;
publicVariable "twc_dissassembleAction";

[ForwardBaseTent,0,["ACE_MainActions"],twc_dissassembleAction] remoteExecCall ["ace_interact_menu_fnc_addActionToObject",[0,-2] select isDedicated,true];