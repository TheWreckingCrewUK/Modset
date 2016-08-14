waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

MDET_var_active = false;

/// COMMON VARIABLES
if (isNil "MDET_var_radius") then { MDET_var_radius = 8.5 }; // Maximum distance from player to mine
if (isNil "MDET_var_angle") then { MDET_var_angle = 60 }; // Player to mine direction angle threshold

/// RANDOMIZE DISTANCE VALUE
if (isNil "MDET_var_rnd_radius") then { MDET_var_rnd_radius = true }; // Enable/Disable randomizer
if (isNil "MDET_var_rnd_radius_value") then { MDET_var_rnd_radius_value = 7 }; // +/- %

/// LOAD FUNCTIONS
call compile preprocessFileLineNumbers "Mine_detector\functions.sqf";



_MineList = ["thisStartsTheList","VMH3-Vallon","", {},{true}] call ace_interact_menu_fnc_createAction;
_createflag = ['Mineflag','Place Mine Marker','',{createVehicle ["FlagSmall_F", getpos ((call MDET_fnc_getNearestMine) select 0), [], 0];_veh = createVehicle ["FlagSmall_F", getpos ((call MDET_fnc_getNearestMine) select 0), [], 0, "NONE"];},{call MDET_fnc_canDetect}] call ace_interact_menu_fnc_createAction;
_on = ['ON/OFFs','On/Off','',{ call MDET_fnc_switchState },{call MDET_fnc_canDetect}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _MineList] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], _createflag] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], _on] call ace_interact_menu_fnc_addActionToObject;



while { alive player } do {
	if (call MDET_fnc_canDetect) then {
		if (MDET_var_active) then {
			_nearestMine = call MDET_fnc_getNearestMine;
			if (count _nearestMine > 0) then {
				_nearestMine call MDET_fnc_mineInRange;
				
			};
			player forceWalk true;	
		} else {
			player forceWalk false;
		};
	} else {
		if (MDET_var_active) then {
			[] call MDET_fnc_switchState
		};
	};
	sleep .503;
};
/*
player removeAction _mdet_action_1;
player removeAction _mdet_action_2;
/*
MineDetectorMakeSound = true;
MineDetector_fnc_init = 
{
	player addAction ["Switch MineDetector On/Off",
	"MineDetectorMakeSound=not MineDetectorMakeSound;hint ('Enable MineDetector Beep: '+str(MineDetectorMakeSound))",
	[],
	-100,
	false,
	true,
	"",
	"'MineDetector' in items player"];
};
player addEventHandler ["respawn","call MineDetector_fnc_init"];
call MineDetector_fnc_init;
while {true} do
{
	if(alive player && {"MineDetector" in items player} && {MineDetectorMakeSound}) then
	{
		[player] call Mine_detector_fnc_playSound;
	}
	else
	{
//		systemChat ("Has Mine Detector: "+str("MineDetector" in items player));
	};
	sleep .5;
};
*/