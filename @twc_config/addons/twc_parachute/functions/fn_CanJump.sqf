/*
 *
 * Condition check for the ACE interact that the player is able to jump.
 * We can expand this in the future to having a programmed solution for red/green light.
 * But as it currently stands, I don't think that's necessary.
 *
 */
params ["_vehicle", "_caller"];
_result = false;
_isPrepped = _vehicle getVariable ["TWC_JumpPrepped", false];

if (((getPosATL _caller select 2) > 50) && _isPrepped) then {
	_result = true;
};

// return true for testing
_result