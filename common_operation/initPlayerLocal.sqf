[] execVM "tasks.sqf";

if(!isNil "completedTasks")then{
	{
		[_x select 0, _x select 1, false] call BIS_fnc_taskSetState;
	}forEach completedTasks;
};

if(era=="modern")then{
	["TWC_Modern", [
	"\twc_faction\ranks\private.paa",
	"\twc_faction\ranks\lance_corporal.paa",
	"\twc_faction\ranks\corporal.paa",
	"\twc_faction\ranks\sergeant.paa",
	"\twc_faction\ranks\staff_sergeant.paa",
	"\twc_faction\ranks\second_lieutenant.paa",
	"\twc_faction\ranks\major.paa"
	]] call ace_nametags_fnc_setFactionRankIcons;
};
if(era=="coldwar")then{
	["TWC_ColdWar", [
	"\twc_faction\ranks\private.paa",
	"\twc_faction\ranks\lance_corporal.paa",
	"\twc_faction\ranks\corporal.paa",
	"\twc_faction\ranks\sergeant.paa",
	"\twc_faction\ranks\staff_sergeant.paa",
	"\twc_faction\ranks\second_lieutenant.paa",
	"\twc_faction\ranks\major.paa"
	]] call ace_nametags_fnc_setFactionRankIcons;
};
if(era=="1990")then{
	["TWC_Millenial", [
	"\twc_faction\ranks\private.paa",
	"\twc_faction\ranks\lance_corporal.paa",
	"\twc_faction\ranks\corporal.paa",
	"\twc_faction\ranks\sergeant.paa",
	"\twc_faction\ranks\staff_sergeant.paa",
	"\twc_faction\ranks\second_lieutenant.paa",
	"\twc_faction\ranks\major.paa"
	]] call ace_nametags_fnc_setFactionRankIcons;
};
if(era=="ww2")then{
	["twc_faction_independent", [
	"\twc_faction\ranks\private.paa",
	"\twc_faction\ranks\lance_corporal.paa",
	"\twc_faction\ranks\corporal.paa",
	"\twc_faction\ranks\sergeant.paa",
	"\twc_faction\ranks\staff_sergeant.paa",
	"\twc_faction\ranks\second_lieutenant.paa",
	"\twc_faction\ranks\major.paa"
	]] call ace_nametags_fnc_setFactionRankIcons;
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
		

		if(player getVariable ["twc_deleteMap",false])then{ 
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