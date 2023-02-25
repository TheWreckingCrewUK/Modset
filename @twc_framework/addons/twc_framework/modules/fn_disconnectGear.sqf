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
if (!hasInterface) exitWith {};

//No need in the editor
if(!isMultiplayer)exitWith{};

//As is tradion we do an ugly sleep
[] spawn {
	waitUntil {sleep 1; time > 0 && name player != "No Vehicle" };
	//BEST
	//Find previous body. Steal gear then delete it.
	//This allows you to manage players stealing your stuff and completly stops duplicating gear

	//step 1 get the old body and its equipment
	_loadout = false;
	_body = false;
	{
		_body = _x getVariable ["twc_framework_previousBody",false];
		if(str _body == str player)exitWith{
			_loadout = getUnitLoadout _body;
			
		};
	}forEach allDeadMen;

	//If old body is found we search for nearby dropped weapons
	if(str _loadout != "false")then{

		//step 2 search for nearby groundweaponholdersimulated
		_nearHolders =  (nearestObjects [_body, ["WeaponHolderSimulated"], 2]);
		//we reverse the array because your weapon is most likely to be closest to you
		//We want to add it last so it overwrites if you disconnect near an enemy
		reverse _nearHolders;
		_weaponList = [];
		{
			_weaponList = _weaponList + (weaponsItems _x);
		}forEach _nearHolders;
		//finally set the loadout
		player setUnitLoadout _loadout;

		{
			if(str _x != "[]")then{
				_weapon = (_x select 0);
				player addWeapon _weapon;
				{
					player addWeaponItem [_weapon,_x];
				}forEach [(_x select 1),(_x select 2),(_x select 3),(_x select 6)];
				{
					if(str _x != "[]")then{
						player addWeaponItem [_weapon, [(_x select 0),(_x select 1)]];
					};
				}forEach [(_x select 4),(_x select 5)];
			};
		}forEach _weaponList;
		//Delete previous body
		deleteVehicle _body;
	}else{
		//Plan B Use missionProfileNamespace on no body found
		_loadout = missionProfileNamespace getVariable ["twc_framework_disconnectGear",false];
		if(str _loadout != "false")then{
			player setUnitLoadout _loadout;
			missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
			saveMissionProfileNamespace;
		}else{
			//Finally if all that fails spawn in normally Basically on operation start
			//Also lets set the loadout
			_loadout = getUnitLoadout player;
			missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
			saveMissionProfileNamespace;
		};
	};
	//Adding in a safety Check we don't want to spawn players in without a gun. (at least not yet :) )
	if(primaryWeapon player == "")then{
		player setUnitLoadout (configFile >> "CFGVehicles" >> (typeOf player));
		format["%1 almost spawned in without a gun",name player] remoteExecCall ["diag_log",2];
	};

	//variable to track previous body
	player setVariable ["twc_framework_previousBody",player,true];
	//Setup missionpriflenamespace
	_loadout = getUnitLoadout player;
	missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
	saveMissionProfileNamespace;


	//Part of plan be we want to add multiple event handlers to keep saving your loadout to missionNamespace
	//This way you are less likely to duplicate ammo
	//can't use fired because that actually might cause lag if a MG has a HDD
	player addEventHandler ["InventoryClosed", {
		params ["_unit", "_container"];
		
		_loadout = getUnitLoadout _unit;
		missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		saveMissionProfileNamespace;
	}];

	player addEventHandler ["Reloaded", {
		params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
		
		_loadout = getUnitLoadout _unit;
		missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		saveMissionProfileNamespace;
	}];

	player addEventHandler ["OpticsSwitch", {
		params ["_unit", "_isADS"];
		
		_loadout = getUnitLoadout _unit;
		missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		saveMissionProfileNamespace;
	}];
};