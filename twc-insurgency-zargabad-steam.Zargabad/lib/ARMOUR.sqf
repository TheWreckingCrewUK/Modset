if (local player) then {

params ["", "_unit"];

if (_unit == p34 || _unit == p35 || _unit == p36) {
    if (alive p34 && alive p35 && alive p36) {
        _unit setPost getMarkerPos "armourspawn";
        _unit allowDamage true;
    } else {
        systemChat "You need a full armour crew to go to the armour crew spawn.";
    };
};
