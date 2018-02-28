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
	(getpos _caller select 0),
	(getpos _caller select 1) - (10 + random (10)),
	(getpos _caller select 2)
];

_callerMoveaway = _caller setpos _jumpOutPosition;
_caller setdir _newDir;

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
	sleep 1; // a second of freefall for the chute
	
	_pos2 = getPosASL _caller;
	_vUp = vectorUp _caller;
	_vDir = vectorDir _caller;
	_vel = velocity _caller;
	_caller action ["OpenParachute", _caller];
	
	_chute = vehicle _caller;
	_chute allowDamage false;
	_chute setVectorDirAndUp [_vDir, _vUp];
	_chute setVelocity _vel;
	
	_caller setVelocity _vel;
	_caller allowDamage true;
	_chute allowDamage true;
	
	// wait until parachute is open, not necessary atm
	//waitUntil {animationState _caller == "chute_pos"};

	// touch down!
	waitUntil {(getPosATL _caller select 2) < 1.5};
	_chute allowDamage false;
	_caller allowDamage false;

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
	deletevehicle _chute;
	_caller allowDamage true;
	_caller switchMove "AmovPercMevaSrasWrflDf_AmovPknlMstpSrasWrflDnon";
	_ParachuteLanded = "T10_Landed" createVehicle (getpos _caller);
};

/* 
_pos = visiblePosition _vehicle;

if ((_pos select 2) < 50) then {
	_dir = getDir _vehicle;
	_newDir = _dir + 90;
	
	//Get Jumper out of aircraft
	moveOut _caller;
	unassignVehicle _caller;
	_caller attachTo [_vehicle, [0,-20,-4], "jump_outL"];
	_caller setdir _newDir;
	//Move Jumper to safe location
	detach _caller;
} else {
	_caller allowDamage false;

	if (!isNull (unitBackpack _caller)) then {
		private ["_pack","_class","_magazines","_weapons","_items"];
		_pack	   = unitBackpack _caller;
		_class	   = typeOf _pack;
		_magazines = getMagazineCargo _pack;
		_weapons   = getWeaponCargo _pack;
		_items	   = getItemCargo _pack;
		removeBackPack _caller;
		
		
		[_caller,_class,_magazines,_weapons,_items] spawn {
			private ["_caller","_class","_magazines","_weapons","_items"];
			_caller		= _this select 0;
			_class		= _this select 1;
			_magazines	= _this select 2;
			_weapons 	= _this select 3;
			_items 		= _this select 4;
				
			private "_packHolder";
			_packHolder = createVehicle ["groundWeaponHolder", [0,0,0], [], 0, "can_collide"];
			_packHolder addBackpackCargoGlobal [_class, 1];
			
			waitUntil {animationState _caller == "oh_para_pilot"};
			_lower_line = "lowering_line" createVehicle (getpos _caller);
			_lower_line attachTo [vehicle _caller,[-0.5,0,-2.5],"zamerny"];
			_packHolder attachTo [vehicle _caller,[-0.2,0.625,-3.25]]; 
			_packHolder setVectorDirAndUp [[0,0,-1],[0,1,0]];
					
			waitUntil {isTouchingGround _caller || (getPos _caller select 2) < 4};
			deleteVehicle _lower_line;
			deleteVehicle _packHolder; 
			_caller addBackpack _class; 
			clearAllItemsFromBackpack _caller; 

			for "_i" from 0 to (count (_magazines select 0) - 1) do {
				(unitBackpack _caller) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; //return the magazines
			};
			for "_i" from 0 to (count (_weapons select 0) - 1) do {
				(unitBackpack _caller) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; //return the weapons
			};
			for "_i" from 0 to (count (_items select 0) - 1) do {
				(unitBackpack _caller) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i]; //return the items
			};
		};
	};

	_caller addBackPack "B_OH_T10_Parachute";

	_dir = getDir _vehicle;
	_newDir = _dir -120;

	moveOut _caller;
	
	_paddingRandomness = random (10);
	_callerMoveaway = _caller setpos [(getpos _caller select 0), (getpos _caller select 1) - (10 + _paddingRandomness), (getpos _caller select 2)];
	_caller setdir _newDir;
	_caller attachTo [_vehicle,[0,-20,-4], "jump_outL"];
	detach _caller;
	
	[_caller] spawn {
		params ["_caller"];

		_vUp = vectorUp _caller;
		_vDir = vectorDir _caller;
		_vel = velocity _caller;

		sleep 1;

		_caller action ["OpenParachute", _caller];
		_caller say3D "ChuteOpen";
		
		_chute = vehicle _caller;
		
		_chute allowDamage false;
		_chute setVectorDirAndUp [_vDir, _vUp];
		_chute setVelocity _vel;
		_caller setVelocity _vel;
		
		waitUntil {((visiblePosition _caller) select 2) < 1};
		moveOut _caller;
		_pos_ground = getpos _caller;
		_caller setpos _pos_ground;
		waitUntil {isTouchingGround _caller};
		deletevehicle _chute;

		_caller allowDamage true;
	};
}; */


