/*
*
* Called after blufor capture
*
* calls counter attacks
*/

params["_marker"];
_rand = random 100;
[_marker] call twc_attackInf;
[_marker] call twc_siteContestedCounter;
if(_rand < 33)exitWith {};
[_marker] call twc_attackHelo;
hint str _rand;