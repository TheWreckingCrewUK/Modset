_variable = missionNameSpace getVariable "playerBase_Garage";
if(_variable)exitWith{hint "Player Base already has a Garage."};


missionNameSpace setVariable ["playerBase_Garage", true,true];


