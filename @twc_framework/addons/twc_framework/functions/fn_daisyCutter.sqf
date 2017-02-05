/*
* Author: [TWC] jayman
*
* Takes a marker and deletes all of the trees in the area and spawns an expolsion to simulate the daisy cutter bomb
*
*/

params["_pos"];
//Jaymans debug hints for mission makers:
if(isNil "_pos")exitWith{hint "You failed with TWC_fnc_daisyCutter\n\n Check the Website for or Management for Help"};

//Tidy Call with exitWith; Looks very clean
call{
	if(typeName _pos == "STRING")exitWith{_pos = getMarkerPos _pos};
	if(typeName _pos == "ARRAY")exitWith{};
};

//Gets the nearby trees and bushes
_near = nearestTerrainObjects [_pos, ["Tree","Small Tree","Bush"], 31];

//hides them globally. Simulates their destruction:
{hideObjectGlobal _x}forEach _near;

//Creates a bomb to simulate the daisy cutter bomb.
"Bo_GBU12_LGB" createVehicle _pos;
