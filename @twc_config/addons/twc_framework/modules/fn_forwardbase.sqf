params ["_enabled"];

if(!hasInterface)exitWith{};

if !(_enabled) exitWith {};

if(isNil "molar")exitWith {systemChat "Forward base is enabled, but no Molar isNil. Exiting disabling forward base"};

_baseMakers = ["Modern_British_Platoon_Commander","Modern_British_Platoon_Sergeant","Modern_British_Coin_Platoon_Commander","Modern_British_Coin_Platoon_Sergeant","ColdWar_sergeant","1990_British_Platoon_Commander","1990_British_Platoon_Sergeant","1990_British_Platoon_Commander_Desert","1990_British_Platoon_Sergeant_Desert"];

if(typeof player in _baseMakers)then{

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
	};
//ACE Action to create forward Base
	ForwardBaseAction = ["twcActions","Forward Base","", {},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], ForwardBaseAction] call ace_interact_menu_fnc_addActionToObject;

	CreateBaseAction = ["ForwardBaseAction","Create Forward Base","", {[10, [], {[] spawn twc_fnc_createForwardBase;}, {}, "Creating Forward Base..."] call ace_common_fnc_progressBar;},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions", "twcActions"], CreateBaseAction] call ace_interact_menu_fnc_addActionToObject;
};