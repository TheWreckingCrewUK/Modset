/*
* Details:
* 
* Creates a Civillian that will tak position in a house and will not move.
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
params["_pos", "_civnum", "_civradius"];

_group = createGroup civilian;

_civnum = floor(_civnum + InsP_enemyMorale);
_civnum = switch (_civnum) do {
	case (_civnum < 3) : {3};
	case (_civnum > 8) : {8};
	default {_civnum};
};

for "_i" from 1 to _civnum do {

	_individualCiv = _group createUnit [civilianType, _pos, [], _civradius, "NONE"];
	_civHeading = (random 360);
	_individualCiv setFormDir _civHeading;
	_individualCiv setDir _civHeading;
	_westKilled = _individualCiv addEventHandler ["Killed", {
		[(_this select 0)] call twc_fnc_deleteDead;
		[_this select 0, _this select 1, _intelCache] call InsP_fnc_civKill;
	}];
	_individualCiv disableAI "path";
	_individualCiv setVariable ["unitsHome",_pos,false];
};