[] execVM "tasks.sqf";

{
 if(!isNil "completedTasks")then{
{
[_x select 0, _x select 1, false] call BIS_fnc_taskSetState;
}forEach completedTasks;
};

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
		
		_remove =
		[
			"ColdWar_Rifleman","ColdWar_Rifleman_SUIT","ColdWar_AT","ColdWar_AT_ASS","ColdWar_MG","ColdWar_MG_AS", 

			"WW2_British_Medic","WW2_British_Section_Commander","WW2_British_Rifleman","WW2_British_2IC","WW2_British_MG","WW2_British_MGASS"
		];

		if((typeOf player) in _remove)then{ 
			player unassignItem "itemMap"; 
			player removeItem "itemMap"; 
		};
	};
};