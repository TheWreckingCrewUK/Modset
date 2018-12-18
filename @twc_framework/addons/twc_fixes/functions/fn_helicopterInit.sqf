params ["_helicopter"];

_helicopter addEventHandler ["RopeAttach", {
	params ["_helicopter", "", "_payload"];
	["twc_slingload_localityFix_eh", [_helicopter, _payload]] call CBA_fnc_serverEvent;
}];