/* 
 * If enabled, it adds temporary immunity when dismounting from a boat, to prevent death
 */
params ["_enabled"];

if !(hasInterface) exitWith {};
if !(_enabled) exitWith {};

// Should be done via a custom config entry in the future!
TWC_ProblemBoats = [
	"TWC_Vehicle_Generic_RHIB_Black",
	"TWC_Vehicle_Generic_RHIB_HMG_Black",
	"TWC_Vehicle_Generic_Zodiac_Black"
];

player addEventHandler ["GetOutMan",{
	params ["_unit", "_role", "_vehicle", "_turret"];
	
	if ((typeOf _vehicle) in TWC_ProblemBoats) then{
		player allowDamage false;
		
		[{ player allowDamage true; }, [], 3] call CBA_fnc_waitAndExecute;
	};
}];
