params ["_unit", ["_lastPlayed", ""]];

_unCon = (_unit getVariable ["ACE_isUnconscious", false]);
if (!_unCon) exitWith {};

_sounds = [
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_01.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_02.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_03.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_04.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_05.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_06.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_07.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_08.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_09.wss",
	"A3\Sounds_F\characters\human-sfx\person0\p0_breath_damage_low_10.wss",
	"A3\Sounds_F\characters\human-sfx\person1\p1_breath_damage_low_01.wss",
	"A3\Sounds_F\characters\human-sfx\person1\p1_breath_damage_low_02.wss",
	"A3\Sounds_F\characters\human-sfx\person1\p1_breath_damage_low_03.wss",
	"A3\Sounds_F\characters\human-sfx\person1\p1_breath_damage_low_04.wss",
	"A3\Sounds_F\characters\human-sfx\person1\p1_breath_damage_low_05.wss",
	"A3\Sounds_F\characters\human-sfx\person1\p1_breath_damage_low_06.wss",
	"A3\Sounds_F\characters\human-sfx\person1\p1_breath_damage_low_07.wss",
	"A3\Sounds_F\characters\human-sfx\person2\p2_breath_damage_low_01.wss",
	"A3\Sounds_F\characters\human-sfx\person2\p2_breath_damage_low_02.wss",
	"A3\Sounds_F\characters\human-sfx\person2\p2_breath_damage_low_03.wss",
	"A3\Sounds_F\characters\human-sfx\person2\p2_breath_damage_low_04.wss",
	"A3\Sounds_F\characters\human-sfx\person2\p2_breath_damage_low_05.wss",
	"A3\Sounds_F\characters\human-sfx\person2\p2_breath_damage_low_06.wss",
	"A3\Sounds_F\characters\human-sfx\person2\p2_breath_damage_low_07.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_01.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_02.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_03.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_04.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_05.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_06.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_07.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_08.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_09.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_10.wss",
	"A3\Sounds_F\characters\human-sfx\person3\p3_breath_damage_low_11.wss"
];

_sound = selectRandom _sounds;

if (_lastPlayed == _sound) then { _sound = selectRandom _sounds; };

playSound3D [_sound, _unit, false, getPosASL _unit, 1.15, (random [0.9, 1, 1.1]), 20];

_time = 2 + (random 3);
[twc_medical_fnc_unconSoundLoop, [_unit, _sound], _time] call CBA_fnc_waitAndExecute;