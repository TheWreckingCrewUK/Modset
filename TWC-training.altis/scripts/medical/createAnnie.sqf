private["_unit","_position"];

_unit = "Modern_British_Rifleman";
_position = getMarkerPos "medical";

cprAnnie = (createGroup west) createUnit [_unit, _position,[],0,"NONE"];
cprAnnie disableAI "MOVE";
cprAnnie setUnitPos "DOWN";
cprAnnie addEventHandler ["KILLED", {
	cprAnnie removeAllEventHandlers "KILLED";
	deleteVehicle "cprAnnie";
	execVM "scripts\medical\createAnnie.sqf";
}];