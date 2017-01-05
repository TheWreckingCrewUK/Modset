/*
 * Author: MikeMatrix
 * Create an IED of given type at given position in specified spawn radius.
 *
 * Arguments:
 * 0: IED Type <STRING>
 * 1: Position <ARRAY>
 * 2: Spawn Radius <NUMBER>
 * 3: Trigger Radius <NUMBER>
 *
 * Return Value:
 * IED <OBJECT>
 *
 * Example:
 * ["IEDLandBig_F", getPos player, 3] call TWC_fnc_spawnIed
 */
params ["_iedType", "_road", "_position", ["_spawnRadius", 0], ["_triggerRadius", 12]];

// Create visible explosive object
_dir = getDir _road;
_angle = [90, 270] call BIS_fnc_selectRandom;
_dir = _dir + _angle;
_pos = _road getRelPos [_spawnRadius, _dir];
_ied = createVehicle [_iedType, _pos, [], 0, "NONE"];
_ied setPos (getPos _ied vectorAdd [0,0,0]);

// Handle creating explosion and cleaning up on object being destroyed
_ied addEventHandler ["Killed", {
    params ["_unit", "_killer"];
    _iedExplosive = createMine [typeOf _unit, getPos _unit, [], 0];
    _iedExplosive setDamage 1;
    deleteVehicle (_unit getVariable ["InsP_trigger", objNull]);
    deleteVehicle _unit;
}];

// Create trigger for setting off the explosive
_trigger = createTrigger ["EmptyDetector", _position, true];
_trigger setTriggerArea [_triggerRadius, _triggerRadius, 0, false];
_trigger setTriggerActivation ["WEST", "PRESENT", true];
_trigger setTriggerStatements [
    "{
        if (abs (speed _x) >= 10 && (getPosATL _x select 2) < 4) exitWith {true};
        false
    } forEach thisList;",
    "[thislist select 0] spawn TWC_fnc_iedAttack; (thisTrigger getVariable ['InsP_ied', objNull]) setDamage 1;",
    ""
];

// Make trigger and object known to each other
_trigger setVariable ["InsP_ied", _ied, true];
_ied setVariable ["InsP_trigger", _trigger, true];

InsP_iedGroup pushback _ied;
publicVariable "InsP_iedGroup";