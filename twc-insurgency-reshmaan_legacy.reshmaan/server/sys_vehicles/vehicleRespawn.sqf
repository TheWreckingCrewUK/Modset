/* 

*Edited by Jayman. 0 Respawns gives no Respawn. Infinite must be a negative Number!*
 
=========================================================
  Simple Vehicle Respawn Script v1.7
  by Tophe of Östgöta Ops [OOPS]
  
  Put this in the vehicles init line:
  veh = [this] execVM "veh_respawn.sqf"


  Options:
  There are some optional settings. The format for these are:
  veh = [this, Delay, Deserted timer, Respawns, Effect, Static] execVM "veh_respawn.sqf"

  
  Default respawn delay is 30 seconds, to set a custom
  respawn delay time, put that in the init as well. 
  Like this:
  veh = [this, 15] execVM "veh_respawn.sqf"

  Default respawn time when vehicle is deserted, but not
  destroyed is 120 seconds. To set a custom timer for this 
  first put the respawn delay, then the deserted vehicle timer. (0 = disabled)
  Like this:  
  veh = [this, 15, 10] execVM "veh_respawn.sqf"

  By default the number of respawns is infinite. To set a limit
  First set the other values then the number of respawns you want (0 = infinite).
  Like this:
  veh = [this, 15, 10, 5] execVM "veh_respawn.sqf"

  By default the vehicle will respawn to the point where it first
  was when the mission started (static). This can be changed to 
  dynamic. Then the vehicle will respawn to the position where it was destroyed. 
  First set all the other values then set TRUE for dynamic or FALSE for static.
  Like this:
  veh = [this, 15, 10, 5, TRUE] execVM "veh_respawn.sqf"
  
  If you you want to set the INIT field of the respawned vehicle, first set all other 
  values, then set init commands. Those must be inside quotations.
  Like this:
  veh = [this, 15, 10, 5, TRUE, "_this setDammage 0.5"] execVM "veh_respawn.sqf"
  
  Default values of all settings are:
  veh = [this, 30, 120, 0, FALSE] execVM "veh_respawn.sqf"
  
Contact & Bugreport: harlechin@hotmail.com
=========================================================
Updated for arma 3   -   replaces (setvehicleinit)

NOTES:
(init) and (name)  will only work correctly in MP / these do not work as expected in single player.

when using custom (init) for vehicle to respawn with, note the example above - (this) should now be (_this) otherwise it will error in MP.

explosion effect removed: because in arma 3 it created a missle that flew across map that impacts vehicle to cause exploision.
=========================================================
*/
  
if (!isServer) exitWith {};

// Define variables
_unit = _this select 0;
_delay = if (count _this > 1) then {_this select 1} else {30};
_deserted = if (count _this > 2) then {_this select 2} else {120};
_respawns = if (count _this > 3) then {_this select 3} else {-1};
_dynamic = if (count _this > 4) then {_this select 4} else {false};
_unitinit = if (count _this > 5) then {_this select 5} else {};
_haveinit = if (count _this > 5) then {true} else {false};

_hasname = false;
_unitname = vehicleVarName _unit;
if (isNil _unitname) then {_hasname = false;} else {_hasname = true;};
_noend = true;
_run = true;
_rounds = 0;

if (_delay < 0) then {_delay = 0};
if (_deserted < 0) then {_deserted = 0};
if (_respawns < 0) then {_noend = true;};
if (_respawns >= 0) then {_noend = false};

_dir = getDir _unit;
_position = getPosASL _unit;
_type = typeOf _unit;
_dead = false;
_nodelay = false;


fnc_setVehicleInit = {
        private ["_netID","_unit","_unitinit"];
        
        _netID = _this select 0;
        _unit = objectFromNetID _netID;
        _unitinit = _this select 1;
        
        _unit call compile format ["%1",_unitinit];
};


fnc_setVehicleVarName = {
        private ["_netID","_unit","_unitname"];
        
        _netID = _this select 0;
        _unit = objectFromNetID _netID;
        _unitname = _this select 1;
        
        _unit setVehicleVarName _unitname;
        _unit call compile format ["%1=_This; PublicVariable ""%1""",_unitname];
};

clearWeaponCargoGlobal _unit;
clearMagazineCargoGlobal _unit;
clearItemCargoGlobal _unit;
clearBackpackCargoGlobal _unit;

// Start monitoring the vehicle   
while {_run} do 
{	
	sleep (2 + random 10);
     	if ((getDammage _unit > 0.8) and ({alive _x} count crew _unit == 0)) then {_dead = true};

	// Check if the vehicle is deserted.
	if (_deserted > 0) then
	{
		if ((getPosASL _unit distance _position > 10) and ({alive _x} count crew _unit == 0) and (getDammage _unit < 0.8)) then 
		{
			_timeout = time + _deserted;
			sleep 0.1;
		 	waitUntil {_timeout < time or !alive _unit or {alive _x} count crew _unit > 0};
			if ({alive _x} count crew _unit > 0) then {_dead = false}; 
			if ({alive _x} count crew _unit == 0) then {_dead = true; _nodelay =true}; 
			if !(alive _unit) then {_dead = true; _nodelay = false}; 
		};
	};

	// Respawn vehicle
      if (_dead) then 
	{	
		if (_nodelay) then {sleep 0.1; _nodelay = false;} else {sleep _delay;};
		if (_dynamic) then {_position = getPosASL _unit; _dir = getDir _unit;};
		sleep 0.1;

		deleteVehicle _unit;
		sleep 2;
		_unit = _type createVehicle _position;
		_unit setPosASL _position;
		_unit setDir _dir;

		clearWeaponCargoGlobal _unit;
		clearMagazineCargoGlobal _unit;
		clearItemCargoGlobal _unit;
		clearBackpackCargoGlobal _unit;
		
		if (_haveinit) then {[[netID _unit, _unitinit], "fnc_setVehicleInit", true, true] spawn BIS_fnc_MP;};

		if (_hasname) then {[[netID _unit, _unitname], "fnc_setVehicleVarName", true, true] spawn BIS_fnc_MP;};

		_dead = false;

		// Check respawn amount
		if !(_noend) then {_rounds = _rounds + 1};
		if ((_rounds >= _respawns) and !(_noend)) then {_run = false; deleteVehicle _unit;};
	};
};