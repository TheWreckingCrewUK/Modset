/*
* Defend Function
*
* Currently just copies and calls the cba task defend eventually will be updated.
* Also starts with a sleep because of issues with headless clients so it must be spawned
* unlike the called cba function.
*/
params["_group",["_pos",isnil],["_radius",200],["_size",2],["_patrol",false]];

Waituntil {time >= 30};

[_group,_pos,,_radius,_size,_patrol] call CBA_fnc_taskDefend;