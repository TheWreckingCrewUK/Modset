// _verify: 
params [["_container", objNull, [objNull]], ["_item", "", [""]], ["_count", 1, [0]], ["_verify", false, [false]], ["_dump", false, [false]]];

private _return = [false, 0];

if (isNull _container) exitWith { _return };
if (_item isEqualTo "") exitWith { _return };

private _config = configFile >> "CfgWeapons" >> _item;
if (isNull _config || {getNumber (_config >> "scope") < 1}) exitWith { _return };

if (_verify) then {
	if (_container canAdd [_item, _count]) then {
		_container addWeaponCargoGlobal [_item, _count];
		_return = [true];
	} else {
		while {_container canAdd _item && {_count > 0}} do {
			_container addWeaponCargoGlobal [_item, 1];
			_count = _count - 1;
		};
		
		_return = [false, _count];

		if (_dump) then {
			private _weaponHolder = nearestObject [_container, "WeaponHolder"];

			if (isNull _weaponHolder || {_container distance _weaponHolder > 2}) then {
				_weaponHolder = createVehicle ["GroundWeaponHolder", [0,0,0], [], 0, "NONE"];
				_weaponHolder setPosATL (getPosATL _container vectorAdd [random 2 - 1, random 2 - 1, 0]);
			};

			_weaponHolder addWeaponCargoGlobal [_item, _count];
		};
	};
} else {
	_container addWeaponCargoGlobal [_item, _count];
	_return = [true];
};

_return