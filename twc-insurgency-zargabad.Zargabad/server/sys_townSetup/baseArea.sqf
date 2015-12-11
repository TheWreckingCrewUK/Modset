/* more special civs
_a7Center = createMarkerLocal ["a7Center", [2563.65, 5500.04, 81.8816]];

_a7PrespawnAI = ["a7Center", 30] call InsP_fnc_prespawnAI;
_a7PrespawnCiv = ["a7Center", 30] call InsP_fnc_prespawnCivs;

//gas station

fixTruck = "C_Van_01_transport_F" createVehicle [2737, 5791, 3];
fixTruck setDir -155.662;
fixTruck setHit ["engine", 1];
fixTruck setHit ["palivo", .8];
fixTruck setFuel 0;
publicVariable "fixTruck";

fixCar = "C_Hatchback_01_F" createVehicle [2690, 5792, 3];
fixCar setDir -313.329;
fixCar setHit ["wheel_1_2_steering", 1];
publicVariable "fixCar";

_chair = "Land_ChairPlastic_F" createVehicle [2733.32, 5795.21, 1];
_chair setDir 117.708;

fixTank setPosATL [2735.8, 5792.13, 0];

fixTire setPosATL [2687.6, 5792.31, 0];

cashierCiv setPosATL [2732.16, 5800.81, 1];

sittinMan setPosATL [2733.32, 5795.21, 0];