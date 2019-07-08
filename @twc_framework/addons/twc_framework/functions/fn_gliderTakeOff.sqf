/*
* Author: TWC
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
params ["_plane", "_glider", "_planeCaptureData"];

_action = ["glidertakeoff", "Tow Plane Take Off", "",
{
	_plane = (_this select 2) select 0;
	_capturedata = (_this select 2) select 1;
	[_plane, 1] remoteExecCall ["setFuel", _plane];
	[_plane, missionNamespace getVariable _capturedata, [_plane, "CaptureFinished"]] remoteExec ["BIS_fnc_UnitPlay", 2];
}, {(rank _player in ["COLONEL", "MAJOR", "CAPTAIN", "LIEUTENANT"]) && (_player in _target)}, {}, [_plane, _planeCaptureData]] call ace_interact_menu_fnc_createAction;
[_glider, 1, ["ACE_SelfActions"], _action] remoteExec ["ace_interact_menu_fnc_addActionToObject"];