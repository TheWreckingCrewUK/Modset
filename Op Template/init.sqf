/*/////////////////////////////////////////////////////////
/                       SETUP 	   						  /
///////////////////////////////////////////////////////////

/*/////////////////////////////////////////////////////////
//                         Tasks                          /
//                         Setup                          /
/////////////////////////////////////////////////////////*/

[] execVM "tasks.sqf";


/*/////////////////////////////////////////////////////////
//                         Debug                          /
//                         Setup                          /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\debug\init.sqf";

/*/////////////////////////////////////////////////////////
//                         Base                           /
//                         Setup                          /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\base\safezone.sqf";
//[] execVM "operation_framework\base\run.sqf";

/*/////////////////////////////////////////////////////////
/                           Zues                          /
/                           Setup                         /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\zeus\Zeus.sqf";

/*/////////////////////////////////////////////////////////
/                             AI                          /
/                           Setup                         /
/////////////////////////////////////////////////////////*/
If (isserver) then {
	[] execVM "operation_framework\AIFix\Coldwar.sqf";
};

/*//////////////////////////////////////////////////////////
/                         Headless                        /
                           Client                         /
/////////////////////////////////////////////////////////*/
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

//[true,30,false,true,30,5,true,[]] execVM "operation_framework\headlessClient\WerthlesHeadless.sqf";
/**********************************************************
*                          Advanced                       *
*                       Sling Loading                     *
**********************************************************/
[] execVM "operation_framework\slingLoading\sa_ropes.sqf";

/**********************************************************
*                           Misc                          *
**********************************************************/

_status = [True] call acre_api_fnc_setRevealToAI;
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

playMusic "Theme";
titleCut ["", "BLACK FADED", 999];
	[] Spawn {
	waitUntil{!(isNil "BIS_fnc_init")};

	titleText ["The Wrecking Crew","PLAIN DOWN"]; 
	titleFadeOut 7;
	sleep 5;

	titleText ["Operation TERKANDIN","PLAIN"];
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