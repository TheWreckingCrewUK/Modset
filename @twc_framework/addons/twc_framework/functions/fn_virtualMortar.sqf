/*
/ Required parameters
/ 0 - Mortar Name
/ 1 - Marker name which the mortar fires on
/ 
/ Additional Parameters
/ 2 - Radius on which rounds will land around the marker, default: 200
/ 3 - How many Rounds, default: 5
/ 4 - What type of round you would like to use, Options: "HE", "SMOKE", "ILLUM"
*/


if (isServer) then {	
	Params ["_marker",["_radius",200],["_rounds",5],["_Roundselect",""],["_delay",10]];
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
		_Roundtype createVehicle _position;
		sleep _delay;
	};
};

