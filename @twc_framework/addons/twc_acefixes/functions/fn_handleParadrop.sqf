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

				if ((getPosATL _item select 2) < 1) then {
					if (!isNull attachedTo _item) then {
						_groundPosition = getPos _item;
						detach _item;
						_item setPos ([_groundPosition select 0, _groundPosition select 1, 0]);
					};

					[_this select 1] call CBA_fnc_removePerFrameHandler;
				};
			}, 1, [_item]] call CBA_fnc_addPerFrameHandler;
		};
	}] call CBA_fnc_addEventHandler;
};