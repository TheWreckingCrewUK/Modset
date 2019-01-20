params ["_helicopter"];

_helicopter addEventHandler ["RopeAttach", {
	params ["_helicopter", "", "_payload"];
	["twc_slingload_localityFix_eh", [_helicopter, _payload]] call CBA_fnc_serverEvent;
}];

_helicopter addEventHandler ["RopeDetach", {
	params ["_helicopter", "", "_payload"];

	["TWC_Item_Delivered", 
		[(getPos _payload), _payload, _helicopter, "slingload"]
	] call CBA_fnc_globalEvent;
}];