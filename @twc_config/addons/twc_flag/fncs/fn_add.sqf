params [["_vehicle", ""], ["_texture", ""], "_positionOverride"];

if (isServer) exitWith {}; // server doesn't need to run it

if (_vehicle == "" || _texture == "") then {
	throw "object (this) and texture are required for twc_flag_add";
	false;
};

_flag = "TWC_Vehicle_Accessory_Flag_British" createVehicleLocal position _vehicle;
_flag setFlagTexture _texture;

_attachLocation = [0, 0, 0];

if (isNil "_positionOveride") then {
	// hard-coded most common vehicles, for user ease
	switch (typeOf _vehicle) do {
		case "ukcw_chieftainMK10": { _attachLocation = [-1, -3, 0.5]; };
		case "ukcw_ChieftainARRV": { _attachLocation = [-1, -2.8, 0.5]; };
		default { throw "vehicle type not supported, either add it or provide positionOverride"; };
	};
} else {
	if !(_positionOverride isEqualTo []) then {
		throw "positionOverride needs to be an array";
	} else {
		if (count _positionOveride > 3 || count _positionOveride < 3) then {
			throw "positionOverride needs [x, y, z]";
		} else {
			_attachLocation = _positionOveride;
		};
	};
};

_flag attachTo [_vehicle, _attachLocation];