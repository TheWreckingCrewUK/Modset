if (floor InsP_enemyMorale > -2 && InsP_ammoCaches < 2) exitWith{
	[] spawn{hint "You are not permitted to be an Insurgent at this time. Morale must be Strong or 2 caches already destroyed."; sleep 8;player call InsP_fnc_spawnSelect; player removeAction carAction
	};
};
_beforePos = getPosATL player;
_beforeDir = getDir player;
_caller = player;
			if (!isNull (unitBackpack _caller)) then {
						private ["_pack","_class","_magazines","_weapons","_items"];
						_pack	   = unitBackpack _caller;
						_class	   = typeOf _pack;
						_magazines = getMagazineCargo _pack;
						_weapons   = getWeaponCargo _pack;
						_items	   = getItemCargo _pack;
						removeBackPack player;
						
								
						[_beforePos,_class,_magazines,_weapons,_items] spawn {sleep 6;
							private ["_caller","_class","_magazines","_weapons","_items"];
							_caller		= _this select 0;
							_class		= _this select 1;
							_magazines	= _this select 2;
							_weapons 	= _this select 3;
							_items 		= _this select 4;
							
							_caller = player;
							
							_caller addBackpack _class; 
							clearAllItemsFromBackpack _caller; 

							for "_i" from 0 to (count (_magazines select 0) - 1) do {
								(unitBackpack _caller) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; 
							};
							for "_i" from 0 to (count (_weapons select 0) - 1) do {
								(unitBackpack _caller) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; 
							};
							for "_i" from 0 to (count (_items select 0) - 1) do {
								(unitBackpack _caller) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i];
							};
						};
				};
				
				
				
				if (!isNull (vestContainer _caller)) then {
						private ["_pack","_class","_magazines","_weapons","_items"];
						_pack	   = vestContainer _caller;
						_class	   = typeOf _pack;
						_magazines = getMagazineCargo _pack;
						_weapons   = getWeaponCargo _pack;
						_items	   = getItemCargo _pack;
						removeVest player;
						
								
						[_beforePos,_class,_magazines,_weapons,_items] spawn {sleep 5;
							private ["_caller","_class","_magazines","_weapons","_items"];
							_caller		= _this select 0;
							_class		= _this select 1;
							_magazines	= _this select 2;
							_weapons 	= _this select 3;
							_items 		= _this select 4;
							
							_caller = player;
							
							_caller addVest _class; 

							for "_i" from 0 to (count (_magazines select 0) - 1) do {
								(vestContainer _caller) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; 
							};
							for "_i" from 0 to (count (_weapons select 0) - 1) do {
								(vestContainer _caller) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; 
							};
							for "_i" from 0 to (count (_items select 0) - 1) do {
								(vestContainer _caller) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i];
							};
						};
				};
				

cutText ["Receiving...", "BLACK", 0.001];

player setPosATL [((getMarkerPos "respawn_civilian" select 0) + (random 10)),((getMarkerPos "respawn_civilian" select 1) + (random 10)),0];

player removeMPEventHandler ["MPKilled", 0];
_switchScript = ["C_man_1", "LEAVEWEPS"] spawn CBA_fnc_switchPlayer;

waitUntil {scriptDone _switchScript};
_resGroup = createGroup opfor;
[player] joinSilent _resGroup;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;



player addItem "ACE_EarPlugs";
removeheadgear player;
player forceAddUniform "CUP_U_I_GUE_Flecktarn2";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};


hintSilent "You are now an insurgent. Your backpack and Vest Gear has been saved. If you don't have one check the nearest man. Sometimes they steal it.";

InsP_MissionStatus = ["MissionStatus","Mission Status","",{execVM "client\sys_intel\missionStatus.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;
numTimesInsurgent = 1;
	
player addEventHandler ["Killed", {
	InsP_playersKilledAsCivs = InsP_playersKilledAsCivs + [getPlayerUID Player];
	publicVariable "InsP_playersKilledAsCivs";
	["End3", false, 0] call BIS_fnc_endMission
}];

cutText ["","BLACK IN",0];

player setPosATL _beforePos;
player setDir _beforeDir;