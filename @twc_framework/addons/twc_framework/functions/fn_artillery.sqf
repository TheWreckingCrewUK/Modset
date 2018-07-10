/*
* Author: [TWC] jayman
* Creates an artillery barrage at the selected location
*
* Arguments:
* 0: Artillery Name <OBJECT>
* 1: Target Marker <STRING>
*
* Additional Parameters:
* 2: Dispersion Radius <NUMBER>
* 3: Amount of Rounds <NUMBER>
* 4: Type of Rounds <STRING>
* 5: Delay <Number>
*
* Return Value:
* NOTHING
*
* Example:
* [mortar1,"mortarTargetMarker",150,5,"HE",15] call twc_fnc_artillery;
*
* Public: No
*/


if (isServer || !hasInterface) then {
	Params ["_mortar","_marker",["_radius",200],["_rounds",5],["_Roundselect",""],["_delay",10]];
	_Roundtype = 0;
	switch (_Roundselect) do {
		case "HE": {_Roundtype = 0;};
		case "SMOKE": {_Roundtype = 2;};
		case "ILLUM": {_Roundtype = 1;};
		default { _Roundtype =  0;};
	};
	_center = _marker;
	if (typeName _marker == "OBJECT") then {
		_center = markerPos _marker;
	};
	if (typeName _mortar == "ARRAY") then {
		_mortar = _mortar select 0;
	};
	_mortar dowatch _center;
	
	for "_i" from 0 to _rounds do {

	_pos = [
		(_center select 0) - _radius + (2 * random _radius),
		(_center select 1) - _radius + (2 * random _radius),
		0
	];

	if (typeOf _mortar == "LIB_GrWr34_ACE") then {
		_magazine = "";
		switch (_Roundtype) do {
			case 0: {_magazine = "LIB_1Rnd_81mm_Mo_HE"};
			case 1: {_magazine = "LIB_1Rnd_81mm_Mo_Illum"};
			case 2: {_magazine = "LIB_1Rnd_81mm_Mo_Smoke"};
		};
		_mortar addMagazineTurret [_magazine, [0]];
	};

	_mortar commandArtilleryFire [
		_pos,
		getArtilleryAmmo [_mortar] select _Roundtype,
		1
	];

	sleep _delay;
	};	 
};
