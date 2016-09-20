/*
* Author: [TWC] jayman
*
* Takes a marker and deletes all of the trees in the area and spawns an expolsion to simulate the daisy cutter bomb
*
*/

params["_marker"];
//Jaymans debug hints for mission makers:
if(isNil "_marker" || typeName _marker != "STRING")exitWith{hint "You failed with TWC_fnc_daisyCutter\n\n Check the Website for or Management for Help"};

//Gets the nearby trees and bushes
_near = nearestTerrainObjects [(getMarkerPos _marker), ["Tree","Small Tree","Bush"], 30];

//hides them globally. Simulates their destruction:
{hideObjectGlobal _x}forEach _near;

//Creates a bomb to simulate the daisy cutter bomb.
"Bo_GBU12_LGB" createVehicle getMarkerPos _marker;
