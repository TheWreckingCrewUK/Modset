_unitsArray = missionNameSpace getVariable "playerBase_UnitsArray";

_trg = createTrigger ["EmptyDetector", (getMarkerPos "playerBase")];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerTimeout [5,5,5,true];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["(player in thisList) || (vehicle player in thisList)", "[] spawn twc_fnc_playerBaseSetup", ""];

if(isNil "_unitsArray")exitWith{};

{
	if(typeOf _x == "Logic")then{
		deleteVehicle _x;
	};
}forEach (nearestObjects [(getMarkerPos "playerBase"),["logic"],200]);

{
	deleteVehicle _x;
	sleep 0.5;
}forEach _unitsArray;
{
	deleteGroup _x;
}forEach allGroups;