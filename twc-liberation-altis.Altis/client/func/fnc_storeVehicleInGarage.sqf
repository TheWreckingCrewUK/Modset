if((getPos player) distance2D (getMarkerPos "playerBase_Garage") > 20)exitWith{hint "You are too far away to access your Garage"};
if((vehicle player) isKindOf "Man")exitWith{hint "You need to be in a Vehicle to store one in the Garage"};
_var = missionNameSpace getVariable "playerBase_Garage";
if!(_var)exitWith{hint "You have not unlocked the Garage yet"};

playerGarage pushback (typeOf (vehicle player));
publicVariable "playerGarage";
deleteVehicle (vehicle player);