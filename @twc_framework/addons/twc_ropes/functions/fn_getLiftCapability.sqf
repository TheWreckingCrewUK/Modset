params ["_heli"];

_heliType = toLower(typeOf _heli);
_returnVal = [500, 0];

switch (_heliType) do {
	case (toLower("I_Heli_Transport_02_F")): { _returnVal = [4000, 100000]; };
	case (toLower("B_Heli_Transport_03_F"));
	case (toLower("B_Heli_Transport_03_unarmed_F")): { _returnVal = [10000, 100000]; };
	case (toLower("O_Heli_Transport_04_F"));
	case (toLower("O_Heli_Transport_04_ammo_F")): { _returnVal = [12000, 100000]; };
	default { _returnVal = [500, 0]; }; // fail safe
};

_returnVal