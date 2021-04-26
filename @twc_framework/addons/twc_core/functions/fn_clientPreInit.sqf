[
	"TWC_Core_BroadcastMode",
	"CHECKBOX",
	"Enable Streamer/Recording Mode",
	["TWC", "TWC Core"],
	false
] call CBA_fnc_addSetting;

/**
 * Used to have scripts/components that exclusively execute in a server environment.
 * For example, the intro script _will_ only play on a server (TODO).
**/
[
	"TWC_Core_isServer",
	"CHECKBOX",
	"Is this running on a server?",
	["TWC", "TWC Core"],
	false,
	true
] call CBA_fnc_addSetting;

/**
 * Move away from using 'CPR' chance as a public denominator
**/
[
	"TWC_Core_isPublic",
	"CHECKBOX",
	"Is this running on a public mission?",
	["TWC", "TWC Core"],
	false,
	true
] call CBA_fnc_addSetting;
