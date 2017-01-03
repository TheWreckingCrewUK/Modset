 
 
 Params ["_player"];
 
 _HasBeenKilled = _player getvariable ["HandleDisconnect",False];
 
 if !(_HasBeenKilled) then {
	removeAllItems _player;
	removeAllWeapons _player;
	if (rank player == "CORPORAL" || rank player == "CORPORAL" || rank player == "LIEUTENANT") then{
		_player additem "ACRE_PRC117F";
	};
 };
 
 
 
 

