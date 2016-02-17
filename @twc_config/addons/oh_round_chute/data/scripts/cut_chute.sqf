	_chute = _this select 0;
	_caller = _this select 1;
	_id = _this select 2;
	
	_caller removeAction _id;
	
	moveOut _caller;
	deleteVehicle _chute;
	_caller allowDamage true;
	