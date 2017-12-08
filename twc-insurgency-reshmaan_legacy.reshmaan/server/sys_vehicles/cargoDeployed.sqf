/* 

 This is a simple script that listens for when cargo is deployed.
 That can either be from advanced sling load, or cargo unloaded.
 
 As of the moment, this is for random chance of counter attack.
 If it's deployed outside of the base.  
 
 White listed crates (so body-bags, or wheels don't trigger).
 White listed vehicles (so humvees, or jeeps don't trigger).
 
*/
cargoAreaExclusionTriggers = ["respawn_west"];
cargoCrateDeployedWhitelist = ["Box_NATO_AmmoVeh_F", "UK3CB_BAF_Static_Weapons_Box", "Box_UK3CB_BAF_Static_Weapons_Box"];
vehicleCargoDeployedWhitelist = ["UK3CB_BAF_Wildcat_AH1_CAS_8A", "CUP_B_CH47F_GB", "UK3CB_BAF_Merlin_HC3_CSAR"];

// This is where the magic happens - i.e. common interface
TWC_Cargo_Deployed = {
	params ["_cargo"];
	_isAllowed = true;
	
	{
		if ((getPos _cargo) distance2D _x < 500) exitWith {
			_isAllowed = false;
		};
	} forEach cargoAreaExclusionTriggers;
	
	if (_isAllowed) then {
		_roll = random [0, 50, 100];
		_check = ((InsP_enemyMorale * 25) * -1) + 35;
		// 75, 50, 25, 0, -25, -50, -75
		//  -3,  -2,  -1, 0,  1,  2,  3
		//   (inverted for percentage)

		if (_roll >= _check) then { 
			_pos = [(getPos _cargo), [200,300]] call SHK_pos;
			_groupSpawned = [_pos, East, townSquadWave] call BIS_fnc_spawnGroup;
			[_groupSpawned, (getPos _cargo), 0] call CBA_fnc_taskAttack;
			{
				_x addMPEventHandler ["MPKilled",{
					if (side (_this select 1) == WEST) then{
						InsP_enemyMorale = InsP_enemyMorale + 0.1; publicVariable "InsP_enemyMorale";
					};
				}];
			} forEach units _groupSpawn;
		};
	};
};

// ["twc_cargoDeployed", [_existingCargo, _forEachIndex]] call CBA_fnc_globalEvent;
["twc_cargoDeployed", {
	params ["_cargo", "_loopIndex"];
	// cargo check isn't required on advanced sling load items
	if (_loopIndex == 0) then {
		[_cargo] call TWC_Cargo_Deployed;
	};
}] call CBA_fnc_addEventHandler;

// ACE3 Cargo - [_item, _vehicle]
["ace_cargoUnloaded", {
	params ["_item", "_vehicle"];
	_correctItem = false;
	_correctVehicle = false;
	
	{ if (_item isKindOf _x) then { _correctItem = true; }; } forEach cargoCrateDeployedWhitelist;
	{ if (_vehicle isKindOf _x) then { _correctVehicle = true; }; } forEach vehicleCargoDeployedWhitelist;
	
	if ((_correctItem) && (_correctVehicle)) then {
		[_item] call TWC_Cargo_Deployed;
	};
}] call CBA_fnc_addEventHandler;