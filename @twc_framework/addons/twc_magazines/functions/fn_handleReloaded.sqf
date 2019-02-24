if !(isPlayer _unit) exitWith {};
if !(local _unit) exitWith {};

params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];

if ((_oldMagazine select 1) == 0) then {
	private _addEmptyMag = [_magazineClassname] call TWC_Magazines_fnc_doesMagazineSupportEmpty;
	
	if (_addEmptyMag == 0) then {
		ACE_player addMagazine [(_oldMagazine select 0), 0];
	};
};