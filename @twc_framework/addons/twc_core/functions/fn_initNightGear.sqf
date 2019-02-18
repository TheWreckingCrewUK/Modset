/*
 * Scans the players object when initialised for custom config entries, and gives them the appropriate gear.
 * This will only occur if the mission has been set as "night gear" mode.
 *
 * The config entries mimic the vanilla Transport[...] ones. The follow entries are:
 *
 * class TransportNightItems {};
 * class TransportNightLinkedItems {};
 *
 */

params ["_unit"];

if !(local _unit) exitWith {};
if !(isPlayer _unit) exitWith {};

_nightMode = missionNamespace getVariable ["TWC_NightGear", false];
if (!_nightMode) exitWith {};

_transportNightItems = (configFile >> "CfgVehicles" >> (typeOf _unit) >> "TransportNightItems") call BIS_fnc_getCfgDataArray;

if !(isNil _transportNightItems) then {
	{ _unit addItem _x; } forEach _transportNightItems;
};

_transportNightLinkedItems = (configFile >> "CfgVehicles" >> (typeOf _unit) >> "TransportNightLinkedItems") call BIS_fnc_getCfgDataArray;

if !(isNil _transportNightLinkedItems) then {
	{ _unit linkItem _x; } forEach _transportNightLinkedItems;
};