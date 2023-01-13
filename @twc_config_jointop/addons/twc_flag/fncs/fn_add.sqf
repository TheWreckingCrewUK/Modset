params [["_vehicle", ""], ["_texture", ""], ["_positionOverride", nil]];

if (isDedicated) exitWith {}; // server doesn't need to run it

if (isNil "_vehicle" || isNil "_texture") then {
	throw "object (this) and texture are required for twc_flag_add";
	false;
};

_flag = "TWC_Vehicle_Accessory_Flag_British" createVehicleLocal position _vehicle;
_flag setFlagTexture _texture;

_attachLocation = [0, 0, 0];

if (isNil "_positionOverride") then {
	// hard-coded most common vehicles, for user ease
	switch (typeOf _vehicle) do {
		case "TWC_Vehicle_Modern_Challenger2_Desert": { _attachLocation = [-1, -4, 0.5]; };
		case "TWC_Vehicle_Modern_Challenger2_Woodland": { _attachLocation = [-1, -4, 0.5]; };
		default { throw "vehicle type not supported, either add it or provide positionOverride"; };
	};
} else {
	if !(_positionOverride isEqualTo []) then {
		throw "positionOverride needs to be an array";
	} else {
		if (count _positionOverride > 3 || count _positionOverride < 3) then {
			throw "positionOverride needs [x, y, z]";
		} else {
			_attachLocation = _positionOverride;
		};
	};
};

_flag attachTo [_vehicle, _attachLocation];