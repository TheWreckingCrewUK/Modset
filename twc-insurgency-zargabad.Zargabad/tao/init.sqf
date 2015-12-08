//Initializes TAO scripts.
//Credit: Strider

[] spawn compile preprocessFileLineNumbers "tao\restrict\base.sqf";
#include "restrict\pilot.sqf";
[] spawn compile preprocessFileLineNumbers "tao\loadout\mainCrate.sqf";
//call compile preprocessFileLineNumbers "tao\repair\x_reload.sqf";
titleText ["Task Force Radio is required. Guide: www.thewreckingcrew.co.uk", "PLAIN", 1];


