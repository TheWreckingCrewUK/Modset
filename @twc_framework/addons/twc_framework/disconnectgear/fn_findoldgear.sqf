/*
* Author: [TWC] jayman
* Finds all Gear and applies it on reconects
*
* Arguments:
* NONE
*
* Return Value:
* NOTHING
*
* Example:
* [] call twc_fnc_findoldgear;
*
* Public: No
*/

params[];
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
	//Earplug check
	if([player, "ace_earplugs",false] call BIS_fnc_hasItem)then{
	
	}else{
		player addItem "ace_earplugs";
	};
}else{
	//Plan B Use ProfileNamespace on no body found
	_loadout = ProfileNamespace getVariable ["twc_framework_disconnectGear",false];
	if(str _loadout != "false")then{
		player setUnitLoadout _loadout;
		ProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		saveProfileNamespace;
		//Earplug check
		if([player, "ace_earplugs",false] call BIS_fnc_hasItem)then{
		
		}else{
			player addItem "ace_earplugs";
		};
	}else{
		//Finally if all that fails spawn in normally Basically on operation start
		//Also lets set the loadout
		_loadout = getUnitLoadout player;
		ProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
		saveProfileNamespace;
	};
};