/*
*
* Called after blufor capture
*
* calls counter attacks
*/

params["_marker", "_rand"];

[_marker] call twc_attackInf;
[_marker] call twc_siteContestedCounter;

if(_rand < 20)then{
	[_marker] call twc_attackHelo;
};