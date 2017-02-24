/*
* Author: [TWC] jayman
* Adds create base ACE Interaction
*
* Arguments:
* 0: Enabled <BOOL>
* 1: UNIT to attach to <OBJECT>
*
* Return Value:
* NOTHING
*
* Example:
* [true,bob] call twc_fnc_respawns;
*
* Public: No
*/
params ["_type",["_unit",objNull]];

if(!hasInterface)exitWith{};

if (_type == "none")exitWith{};
if(_type == "csm") exitWith{systemChat "CSM Respawn not implemented yet"};

_var = player getVariable "twc_isMolar";
_var = if(_unit == player)then{true};

if(isNil "_var")exitWith {};

if(_var)then{

//Function to create Forward Base
	twc_fnc_createForwardBasePos={

		if(!isNil "ForwardBasePos")then{
			deleteVehicle ForwardBasePosFlag;
			deleteVehicle ForwardBasePosTent;
			ForwardBasePos = nil;
		};
		_pos = getPos player;	
		ForwardBasePos = _pos;
		publicVariable "ForwardBasePos";
		ForwardBasePosFlag = "Flag_UK_F" createVehicle _pos;	
		ForwardBasePosTent = "Camp" createVehicle _pos;
		//Sets it a medical facility. I assume the player can do this. Needs testing
		ForwardBasePosTent setvariable ["ace_medical_isMedicalFacility", true,true];
	};
//ACE Action to create forward Base
	ForwardBasePosAction = ["twcActions","Forward Base","", {},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], ForwardBasePosAction] call ace_interact_menu_fnc_addActionToObject;

	CreateBaseAction = ["ForwardBasePosAction","Create Forward Base","", {[10, [], {[] spawn twc_fnc_createForwardBasePos;}, {}, "Creating Forward Base..."] call ace_common_fnc_progressBar;},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions", "twcActions"], CreateBaseAction] call ace_interact_menu_fnc_addActionToObject;
}else{
	systemChat "somehow molar is defined for you, yet you are not molar. This is a bug, but it won't affect anything";
};