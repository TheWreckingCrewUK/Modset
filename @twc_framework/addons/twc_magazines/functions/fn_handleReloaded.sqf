if !(isPlayer _unit) exitWith {};
if !(local _unit) exitWith {};

params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];

if ((_oldMagazine select 1) == 0) then {
	_addEmptyMag = [(_oldMagazine select 0)] call TWC_Magazines_fnc_doesMagazineSupportEmpty;
	
	if (_addEmptyMag) then {
		ACE_player addMagazine [(_oldMagazine select 0), 0];
	};
};