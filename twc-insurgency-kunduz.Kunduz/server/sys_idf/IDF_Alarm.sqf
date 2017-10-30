//Systemchat "Script Fired";

_Rand = Random 20;


if (_rand > 3) then {

sleep _rand;

//systemchat format ["%1", getpos _this select 6];
if (alarm == 0) then {
//systemchat "Alarm On";
alarm = 1;
	publicvariable "alarm";
	
	idfsafe = 0;
	publicvariable "idfsafe";
	
_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString;
_soundToPlay = _soundPath + "server\sys_idf\idfalarm.wav";
playSound3D [_soundtoplay, idfalarm, false, getposasl idfalarm,4];
sleep 26;
alarm = 0;
	publicvariable "alarm";
	
	sleep 120;
	if (alarm == 0) then {
	if (idfsafe == 0) then {
	idfsafe = 1;
	publicvariable "idfsafe";
	
	_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString;
_soundToPlay = _soundPath + "server\sys_idf\idfclear.wav";
playSound3D [_soundtoplay, idfalarm, false, getposasl idfalarm,5];
};
};

};
};