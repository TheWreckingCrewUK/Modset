/*
 * This is a recursive function, that will play a sound every X provided seconds (can also have a random element).
 * Handled only by the server, with the provided sound being played in the 3d space.
 * At the moment, this is a real rough hardcoded function to work for a single usecase, to be expanded upon in the future.
 */
params [
	"_fileFullPath",
	"_object",
	["_isInside", false],
	["_soundArgs", [4, 1, 1000]],
	["_randomPauseRange", [30, 45, 60]],
	["_continueCondition", true]
];

if (!isServer) exitWith {};

_continue = true;
_continue = call compile _continueCondition;
if !(_continue) exitWith {}; // loop has finished.

//playSound3D ["CSA38II_sounds\a_battle\csa38_battle1.ogg", thisTrigger, false, getPosATL thisTrigger, 4, 1, 1000];

playSound3D [
	_fileFullPath,
	_object,
	_isInside,
	getPosATL _object,
	(_soundArgs select 0),
	(_soundArgs select 1),
	(_soundArgs select 2)
];

_waitFor = random _randomPauseRange;

[{ _this call TWC_Core_fnc_soundLoop; }, _this, _waitFor] call CBA_fnc_waitAndExecute;