/*/////////////////////////////////////////////////////////
/                       SETUP 	   						  /
///////////////////////////////////////////////////////////
/                     Task Setup                          /
/////////////////////////////////////////////////////////*/

[] call compile preprocessfilelinenumbers "operation_framework\task\shk_taskmaster.sqf";

/*/////////////////////////////////////////////////////////
/                       Tasks go here                     /
/////////////////////////////////////////////////////////*/

["TaskDef","Defend the airfield","The airfield is our last foothold on Stratis, it must be held at all costs"] call TWC_fnc_CreateTask;

["TaskOfc","Eliminate enemy high command","We have reports of an experienced and high ranking officer in command of the altian forces on Stratis. If his attack on the airfield fails it is likely that the enemy will be quick to extract him off the island."] call TWC_fnc_CreateTask;

["TaskAnt","Capture the long range communications antenna","The enemy is using this antennas to jam our communications around Stratis, we have to capture it to reestablish communications with high command."] call TWC_fnc_CreateTask;

["TaskRad","Capture the radar station","The enemy has captured our radar station, we have to gain it back."] call TWC_fnc_CreateTask;

["TaskPol","Eliminate an enemy party official","Loukas Ypsilantis, a high ranking member of the Kathestós tis défteris Ianouaríou, was supposed to report the victory over our forces. After we push back the enemies attack, he is likely to hide somewhere in the western part of this island and wait for extraction."] call TWC_fnc_CreateTask;


/*/////////////////////////////////////////////////////////
/                         Safe Zone                       /
/                           Setup                         /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\safezone\safezone.sqf";

/*/////////////////////////////////////////////////////////
/                           Zues                          /
/                           Setup                         /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\zues\Zues.sqf";

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

playMusic "Theme";
titleCut ["", "BLACK FADED", 999];
	[] Spawn {
	waitUntil{!(isNil "BIS_fnc_init")};

	titleText ["The Wrecking Crew","PLAIN DOWN"]; 
	titleFadeOut 7;
	sleep 5;

	titleText ["Operation Cliff","PLAIN"];
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
	
/*////////////////////////////////////////////////////////////
/                         ACE Spectator                      /
/                                                            /
////////////////////////////////////////////////////////////*/

respawnTemplates[] = {"ace_spectator"};