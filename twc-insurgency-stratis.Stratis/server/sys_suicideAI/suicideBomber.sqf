_bomber = _this select 0;
_targetSide = _this select 1;
_runCode = 1;
_expl = "DemoCharge_Remote_Ammo" createVehicle position _bomber;
_expl attachTo [_bomber, [0, 0.15, 0.15], "Pelvis"];
_expl setVectorDirAndUp [ [1, 0, 0], [0, 1, 0] ];

_bombpos = getpos _bomber;
while {ALIVE _bomber} do
{
	_nearUnits = nearestObjects [_bomber,["CAManBase"],70];
	_nearUnits = _nearUnits - [_bomber];
	{
		if(!(side _x in _targetSide)) then {_nearUnits = _nearUnits - [_x];};
	} forEach _nearUnits;
	if(count _nearUnits != 0) then
	{
		_pos = position (_nearUnits select 0);
		_bomber doMove _pos;
		_bombpos = getpos _bomber;
		waitUntil {_bomber distance _pos < 20};
		if(_bomber distance (_nearUnits select 0) < 20)
		exitWith
		{
		hint "JIHAD";
		_bomber say3D "shout";
		sleep 2;
		"M_Mo_82mm_AT_LG" createVehicle getPos _bomber;
		};	
	};
	
	sleep .02;
};

deleteVehicle _expl;
"M_Mo_82mm_AT_LG" createVehicle _bombpos;

