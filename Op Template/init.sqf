/* /////////////////////////////////////////////////////////
/                       SETUP 	   						  /
///////////////////////////////////////////////////////////

/* /////////////////////////////////////////////////////////
/                           Zues                          /
/                           Setup                         /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\zeus\Zeus.sqf";
[] execVM "operation_framework\zeus\Zeus-jayman.sqf";
[] execVM "operation_framework\zeus\Zeus-Mallas.sqf";
[] execVM "operation_framework\zeus\Zeus-Bosenator.sqf";

/**********************************************************
*                          Advanced                       *
*                       Sling Loading                     *
**********************************************************/
[] execVM "operation_framework\slingLoading\sa_ropes.sqf";

/**********************************************************
*                           Misc                          *
**********************************************************/
[] execVM "operation_framework\MiscErrorFixes\init.sqf";
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
if(isMultiplayer)then{
	playMusic "Theme";
	titleCut ["", "BLACK FADED", 999];
		[] Spawn {
		waitUntil{!(isNil "BIS_fnc_init")};
		
		titleText ["The Wrecking Crew","PLAIN DOWN"]; 
		titleFadeOut 7;
		sleep 5;

		titleText ["Operation WICKED","PLAIN"];
		titleFadeOut 15;
		sleep 45;

		if(!isNil "ForwardBase")then{
			player setPos ForwardBase;
			["ForwardBase"] spawn {twc_fnc_reconnected};
		}else{
			["NormalBase"] spawn {twc_fnc_reconnected};
		};


		sleep 3;
		"dynamicBlur" ppEffectEnable true;   
		"dynamicBlur" ppEffectAdjust [6];   
		"dynamicBlur" ppEffectCommit 0;     
		"dynamicBlur" ppEffectAdjust [0.0];  
		"dynamicBlur" ppEffectCommit 5;  

		titleCut ["", "BLACK IN", 5];
	};
};
