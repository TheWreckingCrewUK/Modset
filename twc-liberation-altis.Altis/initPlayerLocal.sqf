#include "client\init.sqf";

nearGarageTrigger = 0;
playerGarage = [];

player addAction ["<t color='#0000ff'>Store Vehicle in Garage</t>",{
	playerGarage pushback (typeOf (vehicle player));
	deleteVehicle (vehicle player);
},nil,1.5,true,true,"","nearGarageTrigger == 1",15,false];