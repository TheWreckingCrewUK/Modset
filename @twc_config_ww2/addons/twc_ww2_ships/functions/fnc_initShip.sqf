//SCRIPT(initShip);

/* ----------------------------------------------------------------------------
Function: CUP_fnc_initShip
Description:
Initializes a large CUP ship by building the component parts and loading any cargo

Parameters:
_this select 0: OBJECT - Reference to ship
_this select 1: BOOLEAN - Select whether or not to spawn ship with typical cargo

Returns:
Nil

Examples:
(begin example)
	[_this select 0, true] call CUP_fnc_initShip;
(end)

See Also:

Author:
Tupolov

Peer Reviewed:
nil
---------------------------------------------------------------------------- */

if (isServer) then {
	params [["_ship",objNull]];
	
	private ["_shipParts","_dir","_shipPos","_objects","_parts","_heliPads","_cargoPos"];
	
	// diag_log str(_this);
	
	// Build Ship Parts
	_shipParts = getArray (configFile >> "CfgVehicles" >> typeOf _ship >> "shipParts");
	if (count _shipParts > 0) then {
		_ship setVariable ["CUP_WaterVehicles_BuildFinished",false];
		
		_ship setDir ((getDir _ship) - 180);
		
		_dir = getDir _ship;
		_shipPos = getPosASL _ship;
		
		_ship setVariable ["CUP_WaterVehicles_Dir",_dir];
		
		// diag_log str(_dir);
		
		//freeze all objects that arent the ship to prevent them from falling to the ground
		if (!is3DEN) then {
			_objects = nearestObjects [_ship,[],(sizeOf (typeOf _ship))];
			{_x enableSimulationGlobal false;} forEach _objects;
		};
		
		//spawn the ship
		_parts = [];
		{
			private ["_section"];
			_section = _x createVehicle _shipPos;
			_section setDir _dir;
			_section setPos _shipPos;
			
			_parts pushBack _section;
		} forEach _shipParts;
		
		//Store parts
		_ship setVariable ["CUP_WaterVehicles_shipParts",_parts];
		
		//hide but dont delete the helper so it can be accessed later if needed
		_ship hideObjectGlobal true;

		//give the surrounding objects their simulation back
		if (!is3DEN) then {{_x enableSimulationGlobal true;} forEach _objects;};

		_ship setVariable ["CUP_WaterVehicles_BuildFinished",true];
	};

	if (is3DEN) then {
		_ship addEventHandler ["AttributesChanged3DEN",{_this call twc_ww2_ships_fnc_updateShip;}];
		_ship addEventHandler ["UnregisteredFromWorld3DEN",{_this call twc_ww2_ships_fnc_removeShip;}];
	} else {
		// Create heli pads
		_heliPads = [];
		{
			private ["_pad"];
			_pad = "HeliH" createVehicle [0,0,0];
			_pad attachTo [_ship,[0,0,0],_x];
			
			_heliPads pushBack _pad;
		} forEach (getArray (configFile >> "CfgVehicles" >> typeOf _ship >> "heliPads"));
		_ship setVariable ["CUP_WaterVehicles_heliPads",_heliPads];
		
		// Move in cargo position
		_cargoPos = AGLToASL (_ship modelToWorld (_ship selectionPosition "player_cargo_pos"));
		_ship setVariable ["CUP_WaterVehicles_cargoPos",_cargoPos,true];
	};
};