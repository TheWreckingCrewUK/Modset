/*
 * Author: Bosenator
 * ACE Interaction Add Module
 *
 * Arguments:
 * 0: The Module Logic <OBJECT>
 * 1: Synced Objects <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params ["_logic", "_units", "_activated"];

if (!_activated) exitWith {};

_displayName = _logic getVariable "interactName";
_interactCondition = _logic getVariable "interactCondition";
_interactExecute = _logic getVariable "interactExecute";

{
	[_x, _displayName, _condition, _execute] call TWC_fnc_addACEInteraction;
} forEach _units;