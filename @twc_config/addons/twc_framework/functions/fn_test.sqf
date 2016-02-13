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

#include "script_component.hpp"

params ["_hintmessage"];

hint _hintmessage;
