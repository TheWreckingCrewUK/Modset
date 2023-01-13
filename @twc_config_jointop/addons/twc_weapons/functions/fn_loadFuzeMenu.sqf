params ["_displayOrControl", ["_config", configNull]];

private _mag = _displayOrControl getVariable ["TWC_L14A1_Magazine", "TWC_Magazine_L14A1_HE"];
private _fuzePic = "\TWC_Weapons\data\l14a1_fuzes\200.paa";

if (_mag isNotEqualTo "TWC_Magazine_L14A1_HE" && _mag isNotEqualTo "TWC_Magazine_L14A1_Illum") then {
	private _classSplit = _mag splitString "_";
	private _size = count _classSplit;
	private _range = _classSplit select (_size - 1);
	private _fuzePic = format ["\TWC_Weapons\data\l14a1_fuzes\%1.paa", _range];
};

ctrlSetText [421, _fuzePic];