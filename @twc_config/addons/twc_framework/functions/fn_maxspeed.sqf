// maxspeed.sqf 
// MARCH 2010 - norrin
Params ["_vcl","_ConvoyArray","_c"];

_count 			= count _convoyArray;
_vcl2 			= objNull;
_vcl3 			= objNull; 
if (_c < (_count -2)) then {_vcl2 = _convoyArray select (_c + 1)};
if (_c > 0) then {_vcl3 = _convoyArray select (_c - 1)};    		
//if (true)exitWith {};
while {alive _vcl} do
{ 	
	if (!isNull _vcl2) then
	{	
		if (speed _vcl > 40) then 
		{	
			_vcl setVelocity [(11 * (sin getDir _vcl)), (11 * (cos getDir _vcl)), velocity _vcl select 2];
		};
		while {_vcl distance _vcl2 > 60} do 
		{	
			_dir = getDir _vcl;
			if (_vcl distance _vcl2 <= 100) then 
			{
				if (((sin _dir) * (velocity _vcl select 0)) > 3) then {_vcl setVelocity [(velocity _vcl select 0) - (1 * (sin _dir)), (velocity _vcl select 1), velocity _vcl select 2]};
				if (((cos _dir) * (velocity _vcl select 1)) > 3) then {_vcl setVelocity [(velocity _vcl select 0), (velocity _vcl select 1) - (1 * (cos _dir)), velocity _vcl select 2]};
			} else {
				if (((sin _dir) * (velocity _vcl select 0)) > 1) then {_vcl setVelocity [(velocity _vcl select 0) - (2 * (sin _dir)), (velocity _vcl select 1), velocity _vcl select 2]};
				if (((cos _dir) * (velocity _vcl select 1)) > 1) then {_vcl setVelocity [(velocity _vcl select 0), (velocity _vcl select 1) - (2 * (cos _dir)), velocity _vcl select 2]};
			};
			sleep 0.1;
		};
	};
	if (!isNull _vcl3) then
	{
		while {_vcl distance _vcl3 < 40} do 
		{	
			_dir = getDir _vcl;
			if (((sin _dir) * (velocity _vcl select 0)) > 1) then {_vcl setVelocity [(velocity _vcl select 0) - (2 * (sin _dir)), (velocity _vcl select 1), velocity _vcl select 2]};
			if (((cos _dir) * (velocity _vcl select 1)) > 1) then {_vcl setVelocity [(velocity _vcl select 0), (velocity _vcl select 1) - (2 * (cos _dir)), velocity _vcl select 2]};
			sleep 0.1;
		};
	};
	sleep 0.1;
};