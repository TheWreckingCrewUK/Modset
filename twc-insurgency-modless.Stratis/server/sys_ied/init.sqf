/*
* Defines IED Specific Variables
*
* Then Calls the Populate IED Functions
*
 * ARGUMENTS
 * 0: AMOUNT <NUMBER>
 * 1: RESTRICTIONS_ZONES <ARRAY OF STRINGS> <MARKERNAMES>
*/
if (isNil "InsP_iedGroup") then {
	InsP_iedGroup = [];
	publicVariable "InsP_iedGroup";
};

if (isNil "InsP_iedMarkerGroup") then {
	InsP_iedMarkerGroup = [];
	publicVariable "InsP_iedMarkerGroup";
};

if (isNil "InsP_iedDestroyed") then {
	InsP_iedDestroyed = 0;
	publicVariable "InsP_iedDestroyed";
};

[100, ["iedRestrictionZone"]] call TWC_fnc_populateIeds;
