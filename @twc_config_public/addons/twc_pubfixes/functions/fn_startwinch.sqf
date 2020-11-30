
params ["_veh", "_caller"];
//make sure this is remoteexec'd to the vehicle
_target = _veh getvariable ["twc_winch_target", (_veh)];
("Winching . . .") remoteExec ["hint", _caller];
_maxdis = (sizeof (typeof _veh)) * 5;
_mindis = (sizeof (typeof _veh)) * 0.8;


 _startimer = time;
 _keepwinching1 = true;
 _keepwinching2 = true;
 _veh setvariable ["twc_iswinching", true, true];
 _target setvariable ["twc_iswinching", true, true];
while {((time < (_startimer + 60))) && (_keepwinching1) && (_keepwinching2) && (((_target)distance _veh) < _maxdis) && (((_target)distance _veh) > _mindis)} do { 
	_vel = velocity _veh;
	_dir = _veh getdir _target;
	
	_pitch = ((_veh call BIS_fnc_getPitchBank) select 0);
	//ups needs to be height difference vs distance2d to get an idea of the slope involved
	//_ups = (((_target distance2d _veh) * (((getposasl _veh) select 2) - ((getposasl _target) select 2))) * 0.1)*(((((((vectorUp _veh) vectorDistance (surfaceNormal getPosATL _veh)) - 1) * 2) min 1) max -1));
	
	_heightdiff = (((getposasl _veh) select 2) - ((getposasl _target) select 2));
	_2ddis = (_target distance2d _veh);
	_upangle = _heightdiff atan2 _2ddis;
	
	//no roll is 1. upside down is -1
	_roll = (((((((vectorUp _veh) vectorDistance (surfaceNormal getPosATL _veh)) - 1) * -2) min 1) max -1));
	
	_ups = ((_upangle / _2ddis) * _roll) * 10;
	
	_dirdiff = _veh getreldir _target;
	_torquenum = _dirdiff;
	if (_dirdiff > 180) then {
		_torquenum = ((_dirdiff * 1) -360);
		_dirdiff = ((_dirdiff * -1) + 360);
	};
	if (((getposatl _veh) select 2) > (0.5 + (_pitch * 0.05))) then {
		_dirdiff = 0; 
		_ups = ((((((vectorUp _veh) vectorDistance (surfaceNormal getPosATL _veh)) - 1) * 2) min 1) max -1); 
	 }; 

	//systemchat (str _ups);
	_torque = ((((_torquenum * 5) min 30) * ((getmass _veh) * 0.02))); 
	_veh addTorque (_veh vectorModelToWorld [0,((vectorUp _veh) vectorDistance (surfaceNormal getPosATL _veh)),_torque]);
	
	
	//_veh setVelocity[(((_vel select 0)+((sin _dir)*1.5) max -1) min 1),(((_vel select 1)+((cos _dir)*1.5) max -1) min 1),(((_vel select 2)+(_ups) max -25) min 25)];
	_veh setVelocityModelSpace [(0.01 * _dirdiff), ((1 - (_dirdiff * 0.005)) max 0), 0 + _ups];
	
	sleep 0.1;
	_keepwinching1 = _veh getvariable ["twc_iswinching", true];
	_keepwinching2 = _target getvariable ["twc_iswinching", true];
};
_veh setVelocity[0,0,0];

("Winch Complete") remoteExec ["hint", _caller];
 _veh setvariable ["twc_iswinching", false, true];
 _target setvariable ["twc_iswinching", false, true];
 _target setvariable ["twc_playerhaswinch", _target, true];
 _veh setvariable ["twc_playerhaswinch", _veh, true];
 _veh setvariable ["twc_winch_target", _veh, true];
