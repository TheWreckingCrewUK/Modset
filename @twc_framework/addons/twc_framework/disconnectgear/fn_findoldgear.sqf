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
_unit = false;
{
	_body = _x getVariable ["twc_framework_previousBody","false"];
	if(_body == str player)exitWith{
		_loadout = getUnitLoadout _x;
		_unit = _x;
	};
}forEach allDeadMen;

//If old body is found we search for nearby dropped weapons
if(str _loadout != "false")then{

	//step 2 search for nearby groundweaponholdersimulated
	_nearHolders =  (nearestObjects [_unit, ["WeaponHolderSimulated"], 5]);
	//we reverse the array because your weapon is most likely to be closest to you
	//We want to add it last so it overwrites if you disconnect near an enemy
	reverse _nearHolders;
	_weaponList = [];
	_magazineList = [];
	_itemList = [];
	{
		_weaponList = _weaponList + (weaponsItems _x);
		_magazineList = _magazineList + (magazinesAmmoCargo _x);
		_itemList = _itemList + (itemCargo _x);
		deleteVehicle _x;
	}forEach _nearHolders;
	
	// apply acre fix to ID generated radios
	_loadout = [_loadout] call acre_api_fnc_filterUnitLoadout;
	
	//finally set the loadout
	player setUnitLoadout _loadout;

	//When you die you drop your weapons so this finds and grabs them
	//Also as long as you pick them up in the same place it transfers 
	//to you
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
	{
		player addMagazine [_x select 0,_x select 1];
	}forEach _magazineList;
	{
		player addItem _x;
	}forEach _itemList;
	//delete Body
	deleteVehicle _unit;
	//Earplug check
	if([player, "ace_earplugs",false] call BIS_fnc_hasItem)then{
	
	}else{
		player addItem "ace_earplugs";
	};
}else{
	//Plan B Use ProfileNamespace on no body found
	_loadout = ProfileNamespace getVariable ["twc_framework_disconnectGear",false];
	if(str _loadout != "false")then{
		// apply acre fix to ID generated radios
		_loadout = [_loadout] call acre_api_fnc_filterUnitLoadout;
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