//Uniform Switch Check
twc_fnc_HasUniformModern={
	uniform player == "UK3CB_BAF_U_CombatUniform_MTP" || uniform player == "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"
};

//Create Forward Base
twc_fnc_createForwardBase={

	if(!isNil "ForwardBase")then{
		deleteVehicle forwardBaseFlag;
		deleteVehicle forwardBaseTent;
		ForwardBase = nil;
	};
	_pos = getPos player;	
	ForwardBase = _pos;
	publicVariable "ForwardBase";
	forwardBaseFlag = "Flag_UK_F" createVehicle _pos;	
	forwardBaseTent = "Camp" createVehicle _pos;
};

//Reconnecting players
twc_fnc_reconnected = {
	params["_base"];
	
	//Check for Molar. Without molar function ends
	if(!isNil "molar")exitWith{hint "Molar is Missing in Action. Poke management"};
	
	_name = name player;
	sleep 3;
	if(serverTime > 300)then{
		if(_base = "ForwardBase")then{
			while {player distance2D ForwardBase < 200 || player distance2D molar < 50}do{
				format["%1 has Reconnected and is at the Forward Base", _name] remoteExecCall ["hint", molar];
				sleep 30;
				
			};		
		}else{
			while{player distance2D (getMarkerPos "base") < 200 || player distance2D molar < 50}do{
				format["%1 has Reconnected and is at the Base", _name] remoteExecCall ["hint", molar];
				sleep 30;				
			};
			
		};
	};
};