params ["_enabled",["_unit",objNull]];

if(!hasInterface)exitWith{};

if !(_enabled) exitWith {};

if(isNil "molar" && _unit != molar)exitWith {systemChat "Forward base is enabled, but no Molar isNil. Exiting disabling forward base"};

if(player == molar || _unit == player)then{

//Function to create Forward Base
	twc_fnc_createForwardBase={

		if(!isNil "ForwardBase")then{
			deleteVehicle forwardBaseFlag;
			deleteVehicle forwardBaseTent;
			ForwardBase = nil;
		};
		_pos = getPos player;	
		ForwardBase = _pos;
		publicVariable "ForwardBase";
		forwardBaseFlag = "Flag_UK_F" createVehicle _pos;	
		forwardBaseTent = "Camp" createVehicle _pos;
		//Sets it a medical facility. I assume the player can do this. Needs testing
		forwardBaseTent setvariable ["ace_medical_isMedicalFacility", true,true];
	};
//ACE Action to create forward Base
	ForwardBaseAction = ["twcActions","Forward Base","", {},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], ForwardBaseAction] call ace_interact_menu_fnc_addActionToObject;

	CreateBaseAction = ["ForwardBaseAction","Create Forward Base","", {[10, [], {[] spawn twc_fnc_createForwardBase;}, {}, "Creating Forward Base..."] call ace_common_fnc_progressBar;},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions", "twcActions"], CreateBaseAction] call ace_interact_menu_fnc_addActionToObject;
};