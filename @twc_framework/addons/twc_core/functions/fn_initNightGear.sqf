/*
 * Scans the players object when initialised for custom config entries, and gives them the appropriate gear.
 * This will only occur if the mission has been set as "night gear" mode.
 *
 * The config entries mimic the vanilla ones. The follow entries are:
 *
 * class nightItems {};
 * class nightLinkedItems {};
 *
 */

params ["_unit"];

if !(local _unit) exitWith {};
if !(isPlayer _unit) exitWith {};

_nightMode = missionNamespace getVariable ["TWC_NightGear", false];
if (!_nightMode) exitWith {};

/* **NOTE**
TWC_disconnect gear always runs after this takes affect.
It is ugly, but not worth doing another way
*/


_nightItems = (configFile >> "CfgVehicles" >> (typeOf _unit) >> "nightItems") call BIS_fnc_getCfgDataArray;

if !(isNil "_nightItems") then {
	{ _unit addItem _x; } forEach _nightItems;
};

//Code that attempts to put nightweapons in weapon slot before reverting to backpack
_nightWeapons = (configFile >> "CfgVehicles" >> (typeOf _unit) >> "nightWeapons") call BIS_fnc_getCfgDataArray;
if !(isNil "_nightWeapons") then {
	{
		_unit addWeapon _x;
		if(_unit hasWeapon _x)then{
		
		}else{
			_unit addItem _x
		};
	} forEach _nightWeapons;
};

_nightLinkedItems = (configFile >> "CfgVehicles" >> (typeOf _unit) >> "nightLinkedItems") call BIS_fnc_getCfgDataArray;

if !(isNil "_nightLinkedItems") then {
	{ _unit linkItem _x; } forEach _nightLinkedItems;
};