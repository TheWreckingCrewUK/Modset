/* Defines for ammo cache variables
*/

if (isNil "InsP_ammoCaches") then {
	InsP_ammoCaches = 0;
	publicVariable "InsP_ammoCaches";
};

if (isNil "cacheAMarkers") then {
	cacheAMarkers = [];
	publicVariable "cacheAMarkers";
	cacheBMarkers = [];
	publicVariable "cacheBMarkers";
	cacheCMarkers = [];
	publicVariable "cacheCMarkers";
};

#include "cacheSetup.sqf";