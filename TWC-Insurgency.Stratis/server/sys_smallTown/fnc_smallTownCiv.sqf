/*
* Details
*
* Spawns a minimal amount of civs in the small town areas
*
* example ["Gospandi",3,50] call twc_smallTown;
*/


_group = createGroup civilian;
_civilianType = "C_man_1";
params["_marker", "_civnum", "_civradius"];

for "_i" from 1 to _civnum do {
		_individualCiv = _group createUnit [_civilianType, (getMarkerPos _marker), [], _civradius, "NONE"];
		_civHeading = (random 360);
		_individualCiv setFormDir _civHeading;
		_individualCiv setDir _civHeading;
		_westKilled = _individualCiv addMPEventHandler ["MPKilled", {[_this select 0, _this 	 select 1, _intelCache] call InsP_fnc_civKill;}];
		_individualCiv disableAI "MOVE";
};