/*
	File: fn_adjustCivRep.sqf
	Author: Dom
	Description: Adjusts the value of AW_civRep
*/
params [
	["_value",0,[0]]
];
if (_value isEqualTo 0) exitWith {};

AW_civRep = AW_civRep + _value;
AW_civRep = -100 max (AW_civRep min 100);
publicVariable "AW_civRep";

private _resistanceEnemy = [0,1] select (AW_civRep < 0);
private _resistanceFriendly = [0,1] select (AW_civRep > -1);
resistance setFriend [east,_resistanceEnemy];
east setFriend [resistance,_resistanceEnemy];
resistance setFriend [west,_resistanceFriendly];
west setFriend [resistance,_resistanceFriendly];