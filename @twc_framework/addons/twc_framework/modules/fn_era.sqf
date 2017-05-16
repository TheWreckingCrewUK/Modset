/*
* Author: [TWC] jayman
* Sets rank insignias for friendly units. Changes default ACE pictures
*
* Arguments:
* 0: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [modern] call twc_fnc_era;
*
* Public: No
*/
params["_era"];

switch (_era) do {
	case "1990" {
		["TWC_Millenial", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;	
	};
	case "coldwar" {
		["TWC_ColdWar", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;	
	};
	case "ww2" {
		["twc_faction_independent", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;	
	};
	default {
		["TWC_Modern", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;		
	};
};