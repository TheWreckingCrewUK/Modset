/* 
 * If enabled, cleans up civilian equipment - removing things they shouldn't have!
 */

params [["_enabled", false, [false]], ["_ignoreGoggles", false, [false]], ["_ignoreBackpacks", false, [false]]];

if !(_enabled) exitWith {};
if !(isServer) exitWith {};

{
	if (side _x isEqualTo civilian) then {
		if !(_ignoreGoggles) then { removeGoggles _x; };
		if !(_ignoreBackpacks) then { removeBackpackGlobal _x; };
	};
} forEach allUnits;
