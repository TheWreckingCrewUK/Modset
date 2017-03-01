params["_force"];

_hc = {typeOf _x == "headlessClient_F"} count (switchableUnits + playableUnits);
if(_hc isEqualTo 0)exitWith{hint "NO HC"};

[_force,_hc] call twc_fnc_transferGroups;