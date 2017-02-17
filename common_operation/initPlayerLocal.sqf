[] execVM "tasks.sqf";

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

		titleText ["Operation #Name#","PLAIN"];
		titleFadeOut 15;
		sleep 45;

		if(!isNil "ForwardBasePos")then{
			player setPos ForwardBasePos;
			["ForwardBasePos"] spawn {twc_fnc_reconnected};
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
		
		_gear = (missionNamespace getVariable "twc_disconnectGear");
		if(!isNil "_gear")then{
			_place = 0;
			{
				if((getPlayerUID player) == ((_gear select _place) select 10))then{
					_loadout = (_gear select _place) - [((_gear select _place) select 10)];
					player setUnitLoadout [_loadout,false];
					_gear = _gear - [(_gear select _place)];
				};
				_place = _place + 1;
			}forEach (missionNamespace getVariable "twc_disconnectGear");
			missionNameSpace setVariable ["twc_disconnectGear",_gear,true];
		};
	};
};