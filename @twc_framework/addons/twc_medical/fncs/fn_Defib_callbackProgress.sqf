/*
 * callbackProgress is executed at the same time the player starts the animation
 * this function is only called on succesful start of the treatment
 * should be safe to play sound clip here
 */
params ["_caller"];

// playSound3D ["A3\Sounds_F\sfx\blip1.wav", _caller, true, getPosASL _caller, 1, 1, 5];