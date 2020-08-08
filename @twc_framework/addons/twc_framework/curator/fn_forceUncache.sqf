/*
* Author: [TWC] jayman
* Zeus Function for module to force a group to uncache
*
* Arguments:
* 0: LOGIC <OBJECT> 
* 1: Sync Units <ARRAY>
* 2: Activated <BOOL>
*
* Return Value:
* NONE
*
* Public: No
*/
params["_logic","_units","_activated"];

if !(_activated) exitWith {};

_mouseOver = missionnamespace getvariable ["bis_fnc_curatorObjectPlaced_mouseOver", [""]];

if((_mouseOver select 0) != "OBJECT") then{
	hint "Please click on a unit";
}else{
	[group (_mouseOver select 1)] remoteExec ["twc_fnc_uncacheGroup",2,false];
};

deleteVehicle _logic;