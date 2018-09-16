params ["_vehicle", "_caller"];

_hadBackpack = false;
_class = "";
_magazines = [];
_weapons = [];
_items = [];
_isEven = false;

if (!isNull (unitBackpack _caller)) then {
	_pack = unitBackpack _caller;
	_class = typeOf _pack;
	_magazines = getMagazineCargo _pack;
	_weapons = getWeaponCargo _pack;
	_items = getItemCargo _pack;
	_hadBackpack = true; 
	removeBackPack _caller;
};

_caller addBackPack "TWC_T10_Parachute_backpack";
_caller allowDamage false;

moveOut _caller;

// get the increment from the vehicle, add one, and flip basing on if it's odd or even
_jumpIncrement = _vehicle getVariable ["TWC_JumpIncrement", 0];
if ((_jumpIncrement % 2) == 0) then { _isEven = true; } else { _isEven = false; };
_vehicle setVariable ["TWC_JumpIncrement", (_jumpIncrement + 1), true];

_newDir = _dir -120;

_jumpOutPosition = [
	(getpos _caller select 0) - (-5 + random (10)),
	(getpos _caller select 1) - (5 + random (10)),
	(getpos _caller select 2)
];

_callerMoveaway = _caller setPos _jumpOutPosition;
_caller setDir _newDir;

if (_isEven) then {
	_caller attachTo [_vehicle, [0, -20, -2], "door_2_1"];
} else {
	_caller attachTo [_vehicle, [0, -20, -2], "door_2_2"];
};

// wrapped in a sleep for waits, needed to check for ground collision
[_caller,_hadBackpack,_class,_magazines,_weapons,_items] spawn {
	params ["_caller", "_hadBackpack", "_class", "_magazines", "_weapons", "_items"];
	
	// actual jump
	detach _caller;
	_caller allowDamage false;
	sleep 1; // a second of freefall for the chute
	
	_pos2 = getPosASL _caller;
	_vUp = vectorUp _caller;
	_vDir = vectorDir _caller;
	_vel = velocity _caller;
	
	if (typeOf vehicle _caller != "TWC_T10_Parachute") then { moveOut _caller; };
	_caller action ["OpenParachute", _caller];
	
	_chute = vehicle _caller;

	if (typeOf _chute != "TWC_T10_Parachute") then {
		systemChat "error:fn_JumpOut.sqf:65 class mismatch, expected parachute got unknown";
	};

	_chute allowDamage false;
	_chute setVectorDirAndUp [_vDir, _vUp];
	_chute setVelocity _vel;
	_caller setVelocity _vel;
	
	// wait until parachute is open, not necessary atm
	/* waitUntil {animationState _caller == "chute_pos"};
	_caller allowDamage true; */

	// touch down!
	waitUntil {(getPosVisual _caller select 2) < 0.3};
	/* _chute allowDamage false; */
	_caller allowDamage true;

	if (_hadBackpack) then {
		/* re-add equipment */
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
	
	moveOut _caller;
	_groundPos = getpos _caller;
	_caller setpos _groundPos;
	
	waitUntil {isTouchingGround _caller};

	if (typeOf _chute == "TWC_T10_Parachute") then {
		deleteVehicle _chute;
	};

	[_caller] call ace_common_fnc_goKneeling;
	[] call twc_parachute_fnc_LandingSound;

	_ParachutePos = (_caller modelToWorld [0, -7, 0]); 
	_isEmpty = !(_ParachutePos isFlatEmpty  [1, -1, -1, 1, 0, false, _caller] isEqualTo []); 

	if (_isEmpty) then { 
		_ParachuteLanded = createVehicle ["T10_Landed", [0, 0, -100], [], 0, "CAN_COLLIDE"]; 
		_ParachuteLanded setDir (getDir _caller); 
		_ParachuteLanded setPos _ParachutePos; 
	};
};