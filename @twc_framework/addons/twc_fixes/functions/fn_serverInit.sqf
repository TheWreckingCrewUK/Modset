if !(isServer) exitWith {};

/*
 * Should fix the disappearing cargo crate (underground) issue that ACE3 is currently having.
 */

["ace_cargoUnloaded", {
	params ["_item", "_vehicle", ["_type", ""]];

	if (_type == "paradrop") then {
		[_item] spawn {
			params ["_crate"];

			if (isNull _crate) exitWith {};
			
			waitUntil {(getPosVisual _crate select 2) < 1};
			_groundPosition = getPos _crate;
			detach _crate;
			_crate setPos ([_groundPosition select 0, _groundPosition select 1, 0]);
		};
	};
}] call CBA_fnc_addEventHandler;


/*
 * Should fix BI locality issue in MP with the slingloading of objects.
 */

["twc_slingload_localityFix_eh", {
	params ["_helicopter", "_payload"];

	private _helicopterOwner = owner _helicopter;
	if (_helicopterOwner != owner _payload) then {
		_payload setOwner _helicopterOwner;
	};
}] call CBA_fnc_addEventHandler;

addMissionEventHandler ["EntityKilled", {
	params ["_unit"];
	
	if ((hmd _unit) isEqualTo "NVGoggles_AI") then {
		_unit unlinkItem (hmd _unit);
	};
}];