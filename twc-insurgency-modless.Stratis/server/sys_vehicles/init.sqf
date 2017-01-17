/*
* Executes the Vehicle setup.
 * Arguments:
 * 0: Range <NUMBER>
 * 1: AMOUNT <NUMBER>
* It is set to the whole map. Most likely only the number will change.
*/
[(sqrt 2 *(worldSize / 2)), 40] execVM "server\sys_vehicles\vehicleSetupRoads.sqf";