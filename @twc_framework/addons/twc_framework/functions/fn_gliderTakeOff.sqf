/*
* Author: Anschluss
* Adds interaction to platoon commander and sergeant to order take off in a glider.
*
* Arguments:
* 0: Towing Plane <OBJECT>
* 1: Glider <OBJECT>
* 2: Unit capture data <ARRAY>
*
* Return Value:
* NOTHING
*
* Example:
* [c47, glider, planeCaptureData] call twc_fnc_gliderTakeOff
*
* Public: no
*/
if (!isServer) exitwith {};

params ["_plane", "_glider", "_planeCaptureData"];

_action = ["glidertakeoff", "Tow Plane Take Off", "", {((_this select 2) select 0) setFuel 1; [(_this select 2) select 0, missionNamespace getVariable ((_this select 2) select 1), [(_this select 2) select 0, "CaptureFinished"]] spawn BIS_fnc_UnitPlay}, {(rank _player in ["COLONEL", "MAJOR", "CAPTAIN", "LIEUTENANT"]) && (_player in _target)}, {}, [_plane, _planeCaptureData]] call ace_interact_menu_fnc_createAction;
[_glider, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;