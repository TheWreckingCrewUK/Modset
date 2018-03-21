/*
 * Should fix the disappearing cargo crate (underground) issue that ACE3 is currently having.
 */

if (isServer) then {
	["ace_cargoUnloaded", {
		params ["_item", "_vehicle", ["_type", ""]];

		if (_type == "paradrop") then {
			[_item] spawn {
				params ["_crate"];
				
				if (isNull _crate) exitWith {}; // obj doesn't exist
				
				waitUntil {(getPosVisual _crate select 2) < 1};
				_groundPosition = getPos _crate;
				detach _crate;
				_crate setPos ([_groundPosition select 0, _groundPosition select 1, 0]);
			};
		};
	}] call CBA_fnc_addEventHandler;
};