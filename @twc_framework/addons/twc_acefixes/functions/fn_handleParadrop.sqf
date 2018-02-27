/*
 * Should fix the disappearing cargo crate (underground) issue that ACE3 is currently having.
 */

if (isServer) then {
	["ace_cargoUnloaded", {
		params ["_item", "_vehicle", ["_type", ""]];

		if (_type == "paradrop") then {
			[{
				params ["_item"];

				if (isNull _item) exitWith {
					[_this select 1] call CBA_fnc_removePerFrameHandler;
				};

				if (getPos _item select 2 < 2) then {
					if (!isNull attachedTo _item) then {
						detach _item;
					};

					[_this select 1] call CBA_fnc_removePerFrameHandler;
				};
			}, 1, [_item]] call CBA_fnc_addPerFrameHandler;
		};
	}] call CBA_fnc_addEventHandler;
};