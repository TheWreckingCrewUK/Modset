/*
params ["_target", "_caller"];

	_mass = getmass _target;

	("Recovery initiated. Stand back.") remoteExec ["hint", _caller];
	//just sticking with the non-physx method for now, because it looks bad on non-local clients
	if ((_mass > 7500) || true) exitwith {

		_helpers = {isplayer _x} count (_target nearEntities ["Man", 50]);
		
		_nearplayers = {isplayer _x} count (_target nearEntities ["Man", 500]);
		_neededhelpers = (round ((_mass / 1200) min ((_nearplayers) * 0.6)));
		
		if (_helpers >= _neededhelpers) then {
			_target allowdamage false;
			sleep 10;
			_target setpos ((getpos _target) vectoradd [0,0,4]);
			_target setvectordirandup [vectordir _target, [0,0,1]];
			
			_target setpos [((getpos _target) select 0), ((getpos _target) select 1), 0];
			sleep 5;
			("Recovery complete.") remoteExec ["hint", _caller];
			_target allowdamage true;
		} else {
			(format ["You need %1 players nearby to recover this vehicle", _neededhelpers]) remoteExec ["hint", _caller];
		};
	};
*/

//future plan to do this properly: _veh addTorque (_veh vectorModelToWorld [0,_torque,0]) with a check for left/right rolling. Don't do COG changing for this because the netcode physics doesn't sync very photogenically

//-20000 will do a landy

params ["_target", "_caller"];
//_vectorup = (((vectorUp _target) vectorDiff (surfaceNormal getPosATL _target)) select 1);
_vectorup = ((_target call BIS_fnc_getPitchBank) select 1);
_target setvariable ["twc_isbeingrecovered", true,true];

_pushers = _target getvariable ["twc_targetpushers", []];
_teampower = 0;

_torque = 0;
_maxtorque = 0;
_maxangle = 0;

//when adding teamwork, check locally that each player is still close enough

//pass the player through to the casualty client, then have a central handler that checks the distance of each one
_lastcheck = 0;

_done = false;

_tolerance = 0.5;

_playerhappy = (_target getvariable ['twc_isbeingrecovered', true]);

while {(!_done) && _playerhappy} do {

	_isflipped = (vectorUp _target) vectorDistance (surfaceNormal getPosATL _target);
	while {(_isflipped > _tolerance) && _playerhappy} do {
		_vectorup = ((_target call BIS_fnc_getPitchBank) select 1);
		_pushers = _target getvariable ["twc_targetpushers", []];
		_teampower = (_teampower + ((count _pushers) * 1));
		_torque = (((_vectorup * (_teampower)) * 1));
		hint ("Recovery in Progress. Torque: " + (str ((round (_torque * 0.1)) * 10)));
		
		if (_maxangle < _vectorup) then {
			_maxangle = (_vectorup max _maxangle);
			_maxtorque = _torque;
		};
		
		_target addTorque (_target vectorModelToWorld [0,_torque,0]);
		sleep 0.2;
		if (_lastcheck < (time - 3)) then {
			//check for invalid pushers
			{
				if ((_target distance _x ) > 20) then {
					_pushers deleteat (_pushers find _x);
					[_x] spawn {
						params ["_unit"];
						sleep 2;
						("You've stopped pushing because you're too far from the vehicle") remoteExec ["hint", _x];
					};
					[_x] remoteexec ['twc_winch_fnc_recovervehicle_removepusher', _x];
				};
			} foreach _pushers;
			_lastcheck = time;
		};
		_isflipped = (vectorUp _target) vectorDistance (surfaceNormal getPosATL _target);
		_playerhappy = (_target getvariable ['twc_isbeingrecovered', true]);
	};
	hint ("Recovery in Progress. Torque: 0");
	_time = time;
	waituntil {(((vectorUp _target) vectorDistance (surfaceNormal getPosATL _target) < 0.2) || (time > (_time + 5)) || (!(_target getvariable ['twc_isbeingrecovered', true])))};
	_playerhappy = (_target getvariable ['twc_isbeingrecovered', true]);
	if ((time < (_time + 5)) && _playerhappy) then {
		
		_target addTorque (_target vectorModelToWorld [0,(_torque * -1.5),0]);
		sleep 3;
		if ((vectorUp _target) vectorDistance (surfaceNormal getPosATL _target) < 0.2) then {
			_done = true;
		};
		//systemchat "success";
	} else {
		//systemchat "fail";
	};
	_torque = _torque * 0.25;
	_playerhappy = (_target getvariable ['twc_isbeingrecovered', true]);
};
_target setvariable ['twc_isbeingrecovered', false,true];

_target setvariable ["twc_targetpushers", []];
{
	("Recovery Complete") remoteExec ["hint", _x];
	[_x] remoteexec ['twc_winch_fnc_recovervehicle_removepusher', _x];
} foreach _pushers;


//systemchat "done?";