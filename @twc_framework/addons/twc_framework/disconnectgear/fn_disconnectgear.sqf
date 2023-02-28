/*
* Author: [TWC] jayman
* Deletes bodies of re-connects and handles gear
*
* Arguments:
* 0: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [true] call disconnectGear;
*
* Public: No
*/
params["_bool"];
if (!_bool) exitWith {};
//Have the server set it with time so it resets on restart
if(isServer)then{
	TWC_MissionStart = systemTimeUTC;
	publicVariable "TWC_MissionStart";
};
if (!hasInterface) exitWith {};
if(!isMultiplayer)exitWith {};



//As is tradion we do an ugly sleep
[] spawn {
	waitUntil {sleep 1; time > 0 && name player != "No Vehicle" && !(isnil "TWC_MissionStart") };
	twc_op_newStart = false;
	
	_missionStart = ProfileNamespace getVariable ["TWC_Framework_missionStart",true];

	if(str _missionStart == "true" || str _missionStart != str TWC_MissionStart)then{
		//Happens if you don't have a missionstartVariable or the wrong one
		//IE First Time you Join ever or deleted .vars file
		ProfileNamespace setVariable ["TWC_Framework_missionStart",TWC_MissionStart];
		ProfileNamespace setVariable ["TWC_Framework_TypeOf",typeOf player];
		twc_op_newStart = true;
		saveProfileNamespace;
		
	}else{
		//Checks If you are the same role as before
		if(typeOf player == ProfileNamespace getVariable ["TWC_Framework_TypeOf",""])then{
			//Joined Same Slot and Played Before
			[] call twc_fnc_findOldGear;
			//applies wounds
			_json = profileNamespace getVariable "twc_framework_medicalInfo";
			[_json]spawn {
				params["_json"];
				//Waits 60 seconds so they "start bleeding or being injured" when music ends. Music is 75 seconds long
				uisleep 60;
				if(_json != ([player] call ace_medical_fnc_serializeState))then{
					hint "Applied Previous Medical";
					[player, _json] call ace_medical_fnc_deserializeState;
				};
			};
		}else{
			//Played before, but Changed Slot
			//Sends a warning to the admins: Unlikely, but a way to cheat gear
			[player, "Has changed roles in the op."] remoteExecCall ["TWC_core_fnc_findAdmin",2];
			//Sets up for new role
			ProfileNamespace setVariable ["TWC_Framework_TypeOf",typeOf player];
			saveProfileNamespace;
		};
	};

	//Part of plan be we want to add multiple event handlers to keep saving your loadout to missionNamespace
	//This way you are less likely to duplicate ammo
	//can't use fired because that actually might cause lag if a MG has a HDD
	player addEventHandler ["InventoryClosed", {
		params ["_unit", "_container"];
		_loadout = getUnitLoadout _unit;
		ProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		ProfileNamespace setVariable ["twc_framework_medicalInfo", ([_unit] call ace_medical_fnc_serializeState)];
		saveProfileNamespace;
	}];

	player addEventHandler ["Reloaded", {
		params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
		_loadout = getUnitLoadout _unit;
		ProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		ProfileNamespace setVariable ["twc_framework_medicalInfo", ([_unit] call ace_medical_fnc_serializeState)];
		saveProfileNamespace;
	}];
	
	player addEventHandler ["Dammaged", {
		params ["_unit", "_selection", "_damage", "_hitIndex", "_hitPoint", "_shooter", "_projectile"];
		_loadout = getUnitLoadout _unit;
		ProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		ProfileNamespace setVariable ["twc_framework_medicalInfo", ([_unit] call ace_medical_fnc_serializeState)];
		saveProfileNamespace;
	}];

	player addEventHandler ["OpticsSwitch", {
		params ["_unit", "_isADS"];
		_loadout = getUnitLoadout _unit;
		ProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		ProfileNamespace setVariable ["twc_framework_medicalInfo", ([_unit] call ace_medical_fnc_serializeState)];
		saveProfileNamespace;
	}];
	
	//Safety Check
	//Adding in a safety Check we don't want to spawn players in without a gun or uniform. (at least not yet :) )
	//Everything, but gun can get lost if the unit deletes before respawn
	if(primaryWeapon player == "")then{
		player setUnitLoadout (configFile >> "CFGVehicles" >> (typeOf player));
		[player, "Was almost spawned in Without a Gun. Check disconnect Gear"] remoteExecCall ["TWC_core_fnc_findAdmin",2];
	};
	if(uniform player == "")then{
		player setUnitLoadout (configFile >> "CFGVehicles" >> (typeOf player));
		[player, "Was almost spawned in Without a uniform. Check disconnect Gear"] remoteExecCall ["TWC_core_fnc_findAdmin",2];
	};
	
	//variable to track previous body
	player setVariable ["twc_framework_previousBody",str player,true];
	//Setup missionpriflenamespace
	_loadout = getUnitLoadout player;
	ProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
	ProfileNamespace setVariable ["twc_framework_medicalInfo", ([player] call ace_medical_fnc_serializeState)];
	saveProfileNamespace;
};