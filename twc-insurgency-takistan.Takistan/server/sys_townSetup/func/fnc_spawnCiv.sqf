/*
* Details:
* 
* Creates a Civillian that will tak position in a house and will not flee.
*
* Required parameters:
*
* 0 - String     Marker name
*
* Addtional parameters:
*
* 1 - Interger   Amount of civillians   Default: 7
* 
*
* Example:
*
*["bastam",7] spawn twc_fnc_SpawnCiv
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/
_group = createGroup civilian;
_civilianType = "LOP_Tak_Civ_Man_01";
_marker = _this select 0;
_civnum = _this select 1;
_placementRadius = 50;
/*
Private ["_marker","_civnum"];
params ["_marker",["_civnum",7]];
*/
for "_i" from 1 to _civnum do {
		_individualCiv = _group createUnit [_civilianType, (getMarkerPos _marker), [], _placementRadius, "NONE"];
		_civHeading = (random 360);
		_individualCiv setFormDir _civHeading;
		_individualCiv setDir _civHeading;
		_westKilled = _individualCiv addMPEventHandler ["MPKilled", {[_this select 0, _this 	 select 1, _intelCache] call InsP_fnc_civKill;}];
		_individualCiv disableAI "MOVE";
};
