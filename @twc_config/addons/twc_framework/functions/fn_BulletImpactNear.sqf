/*
 * Author: SilentSpike
 * Caches the units information for quick retrevial in spectator interface PFHs
 *
 * Arguments:
 * 0: Unit to have info cached for <OBJECT>
 *
 * Return Value:
 * None <NIL>
 *
 * Example:
 * [vehicle player] call ace_spectator_fnc_cacheUnitInfo
 *
 * Public: No
 */



_bullet = _this select 6;

waituntil {!alive _bullet};

_lastPos = getposATL _bullet;
_lastPos;
