/*
* Details:
* 
* Creates a CivillianS that will not move.
*
* ARGUMENTS
*
* 0: POS <ARRAY> -- [0,0,0]
* 1: CIViNFO <ARRAY> -- [CIVNUM,CIVRADIUS]
*
*/
params["_pos", "_civInfo"];

//Redefine variables for ease
_group = createGroup civilian;
_civnum = _civInfo select 0;
_civradius = _civInfo select 1;

//decide exactly how many civs to spawn
_civnum = floor(_civnum + InsP_enemyMorale);
_civnum = switch (_civnum) do {
	case (_civnum < 3) : {3};
	case (_civnum > 8) : {8};
	default {_civnum};
};

//spawn the civs
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