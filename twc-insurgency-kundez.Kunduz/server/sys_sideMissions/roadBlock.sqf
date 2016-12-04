_allRoads = [worldSize / 2, worldSize / 2] nearRoads (sqrt 2 *(worldSize / 2));
_vehicleList = ["CUP_C_Datsun_Plain", "CUP_C_Skoda_Blue_CIV", "CUP_C_UAZ_Open_TK_CIV"];
_amount = 0;
_amountToSpawn = 5;
while {_amount < _amountToSpawn} do {
 
	_road = _allRoads call BIS_fnc_selectRandom;
	if((getPos _road) distance2D (getMarkerPos "crate") > 200)then{
		_dir = getDir _road;
		_car = _vehicleList call BIS_fnc_selectRandom;
		_veh = _car createVehicle (getPos _road);
		_veh setPos (getPos _road);
		_veh setDir (_dir + 180);
	
		_trg = createTrigger ["EmptyDetector", getPos _road];
		_trg setTriggerArea [100, 100, 0, false];
		_trg setTriggerActivation ["WEST", "PRESENT", false];
		_trg setTriggerStatements ["this", "[thisList select 0] call twc_fnc_iedAttack", ""];
		_amount = _amount + 1;
	};
	
};