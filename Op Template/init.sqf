/*/////////////////////////////////////////////////////////
/                       SETUP 	   						  /
///////////////////////////////////////////////////////////
/                     Task Setup                          /
/////////////////////////////////////////////////////////*/

[] call compile preprocessfilelinenumbers "operation_framework\task\shk_taskmaster.sqf";

/*/////////////////////////////////////////////////////////
/                       Tasks go here                     /
/////////////////////////////////////////////////////////*/

["Task1","Capture the town of Balka","There is a large garrison of US personal in the town of Balka which controls one of the primary MSR's. Liberate it it from American control"] call TWC_fnc_CreateTask;
["Task2","Capture the airfield","After the destruction of NATO's priamry airfield by nuclear attack, all remaining land based airpower on the island is coming from a samll airstrip in the middle of sector 2. Taking this will be detrimental to NATO's grip on the region"] call TWC_fnc_CreateTask;
["Task3","Neutralize enemy artillery","Our forces have been under constant artillery fire from US positions, reconnaisance suggests these positions are currently deplensihed on ammo. You are to destroy them before they can be resupplied in the coming week"] call TWC_fnc_CreateTask;

/*/////////////////////////////////////////////////////////
/                            Base                         /
/                           Setup                         /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\base\safezone.sqf";
[] execVM "operation_framework\base\run.sqf";

/*/////////////////////////////////////////////////////////
/                           Zues                          /
/                           Setup                         /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\zues\Zues.sqf";
[] execVM "operation_framework\zues\Zues-Fakematty.sqf";
[] execVM "operation_framework\zues\Zues-jayman.sqf";

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
/* <--- Delete this once editing is finished.
playMusic "Theme";
titleCut ["", "BLACK FADED", 999];
	[] Spawn {
	waitUntil{!(isNil "BIS_fnc_init")};

	titleText ["The Wrecking Crew","PLAIN DOWN"]; 
	titleFadeOut 7;
	sleep 5;

	titleText ["Operation громовой","PLAIN"];
	titleFadeOut 15;
	sleep 30;



	sleep 3;
	"dynamicBlur" ppEffectEnable true;   
	"dynamicBlur" ppEffectAdjust [6];   
	"dynamicBlur" ppEffectCommit 0;     
	"dynamicBlur" ppEffectAdjust [0.0];  
	"dynamicBlur" ppEffectCommit 5;  

	titleCut ["", "BLACK IN", 5];
	};