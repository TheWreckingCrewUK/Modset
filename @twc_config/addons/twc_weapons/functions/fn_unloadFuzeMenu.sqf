params ["_displayOrControl", ["_config", configNull]];

private _picPath = ctrlText 421;
private _pathSplit = _picPath splitString "\.";
private _sizePath = count _pathSplit;
private _range = _pathSplit select (_sizePath - 2);

private _oldMag = _displayOrControl getVariable ["TWC_L14A1_Magazine", "TWC_Magazine_L14A1_HE"];
private _magSplit = _oldMag splitString "_";
private _sizeMag = count _magSplit;

private _magType = "";
if (_sizeMag == 4) then {
	_magType = _magSplit select (_sizeMag - 1);
} else {
	_magType = _magSplit select (_sizeMag - 2);
};

private _mag = format ["TWC_Magazine_L14A1_%1_%2", _magType, _range];

private _slot = _displayOrControl getVariable ["TWC_L14A1_Slot", "BACKPACK_CONTAINER"];
private _container = "";
switch _slot do {
	case "UNIFORM_CONTAINER": {
		_container = "uniform";
	};
	case "VEST_CONTAINER": {
		_container = "vest";
	};
	case "BACKPACK_CONTAINER": {
		_container = "backpack";
	};
};

if (_container != "") then {
	[ace_player, _mag, _container] call ace_common_fnc_addToInventory;
};