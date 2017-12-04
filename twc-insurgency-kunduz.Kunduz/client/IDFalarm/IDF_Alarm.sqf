//Systemchat "Alarm Fired";



	



sleep 1;

//systemchat "Alarm On";

	

	
_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString;
_soundToPlay = _soundPath + "server\sys_idf\idfalarm.wav";

playSound3D ["a3\data_f_curator\sound\cfgsounds\air_raid.wss", idfalarm, false, getposasl idfalarm,5];
idfon = 1;
publicvariable "idfon";
	idfsafe = 0;
	publicvariable "idfsafe";
sleep 8;
	idfsafe = 0;
	publicvariable "idfsafe";
playSound3D ["a3\data_f_curator\sound\cfgsounds\air_raid.wss", idfalarm, false, getposasl idfalarm,5];
//	systemchat "loop";
sleep 6;
alarm = 0;
	publicvariable "alarm";

		idfsafe = 0;
	publicvariable "idfsafe";
	sleep 30;
	idfsafe = 1;
	publicvariable "idfsafe";
	sleep 300;
	
	if (alarm == 0) then {
	if (idfon == 1) then {
	if (idfsafe == 1) then {
	idfon = 0;
publicvariable "idfon";
	_soundPath = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString;
_soundToPlay = _soundPath + "server\sys_idf\idfclear.wav";
playSound3D ["A3\Sounds_F\sfx\alarmCar.wss", idfalarm, false, getposasl idfalarm,5,0.5];
};
};
};




