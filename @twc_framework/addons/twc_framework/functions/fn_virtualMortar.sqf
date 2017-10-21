/*
* Author: [TWC] jayman
* Creates an zeus artillery barrage at the selected location
*
* Arguments:
* 0: Target Marker <STRING>
*
* Additional Parameters:
* 1: Dispersion Radius <NUMBER>
* 2: Amount of Rounds <NUMBER>
* 3: Type of Rounds <STRING>
* 4: Delay <Number>
*
* Return Value:
* NOTHING
*
* Example:
* [mortar1,"mortarTargetMarker",150,5,"HE",15] call twc_fnc_artillery;
*
* Public: No
*/


if (isServer) then {	
	Params ["_marker",["_radius",200],["_rounds",5],["_Roundselect",""],["_delay",10],["_safeArea","nil"]];
	_Roundtype = 0;
	switch (_Roundselect) do {
		case "HE": {_Roundtype = "ModuleOrdnanceMortar_F";};
		case "SMOKE": {_Roundtype = "Smokeshell";};
		case "ILLUM": {_Roundtype = "ACE_HandFlare_White";};
		default { _Roundtype =  "ModuleOrdnanceMortar_F";};
	};
	
	_pos = getMarkerPos _marker;

	for "_i" from 0 to _rounds do{
		_position =  [_pos, _radius] call CBA_fnc_randPos;
		if(_position inArea _safeArea)exitWith{};
		_Roundtype createVehicle _position;
		sleep _delay;
	};
};

