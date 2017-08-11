/*
* Author: [TWC] Rik
* Plays battlefield sounds from a trigger with customizable volume.
*
* Arguments:
* 0: Trigger <OBJECT>
* 1: Volume <NUMBER>
*
* Return Value:
* NOTHING
*
* Example:
* [thisTrigger, 10] spawn twc_fnc_BattlefieldSounds;
*
* Public: no
*/
params["_object","_volume"];

while {triggerActivated _object} do
{
	_sounds = ["A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight1.wss","A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight2.wss","A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight3.wss","A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight4.wss"];
	_soundLengths = [16, 14, 18, 50];
	_soundBattlefield = selectRandom _sounds;
	_soundIndex = _sounds find _soundBattlefield;
	playSound3D [_soundBattlefield, _object, false, (getPosASL _object), _volume, 1, 0];
	sleep (_soundLengths select _soundIndex);
};