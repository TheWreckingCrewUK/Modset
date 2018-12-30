/*
* Author: [TWC] Rik
* Plays battlefield sounds from a trigger with customizable volume.
*
* Arguments:
* 0: Trigger <OBJECT>
* 1: Volume <NUMBER>
* 2: Sounds <ARRAY> (Optional)
* 3: Sound Lengths <Array> (Optional)
*
* Return Value:
* NOTHING
*
* Example:
* [thisTrigger, 10] call twc_fnc_BattlefieldSounds;
*
* Public: no
*/
params [
	"_object",
	"_volume",
	["_sounds", [
			"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight1.wss",
			"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight2.wss",
			"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight3.wss",
			"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight4.wss"
		]
	],
	["_soundLengths", [
			16,
			14,
			18,
			50
		]
	],
	["_range", 0]
];

if (!isServer) exitWith {};
if (!triggerActivated _object) exitWith {};

_soundBattlefield = selectRandom _sounds;
_soundIndex = _sounds find _soundBattlefield;
if (_soundIndex == -1) exitWith { systemChat "Error: encountered a sound in array with no corresponding length in 4th paramater"; };
playSound3D [_soundBattlefield, _object, false, (getPosASL _object), _volume, 1, _range];

[{ _this call twc_fnc_BattlefieldSounds; }, _this, (_soundLengths select _soundIndex)] call CBA_fnc_waitAndExecute;