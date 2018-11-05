if (inputAction "nextWeapon" > 0) exitWith {};

params ["_unit", "_weapon", "_muzzle"];

private _safedWeapons = _unit getVariable ["ace_safemode_safedWeapons", []];

if (_weapon in _safedWeapons) exitWith {}; // already on safe

_safedWeapons pushBack _weapon;

_unit setVariable ["ace_safemode_safedWeapons", _safedWeapons];

if (_unit getVariable ["ace_safemode_actionID", -1] == -1) then {
    _unit setVariable ["ace_safemode_actionID", [
        _unit, "DefaultAction", {
            if (
                [_this select 1] call CBA_fnc_canUseWeapon
                && {
                    if (currentMuzzle (_this select 1) in ((_this select 1) getVariable ["ace_safemode_safedWeapons", []])) then {
                        if (inputAction "nextWeapon" > 0) exitWith {
                            [_this select 1, currentWeapon (_this select 1), currentMuzzle (_this select 1)] call ace_safemode_fnc_unlockSafety;
                            false
                        };
                        true
                    } else {false}
                }
            ) then {
                // player hud
                [false] call ace_safemode_fnc_setSafeModeVisual;
                true
            } else {
                // player hud
                [true] call ace_safemode_fnc_setSafeModeVisual;
                false
            };
        }, {}
    ] call ace_common_fnc_addActionEventHandler];
};

if (_muzzle isEqualType "") then {
	_unit selectWeapon _muzzle;
};