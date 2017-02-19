/*
* Author: [TWC] jayman
* Moves player to Spectator Channel or Back
*
* Arguments:
* 0: UNIT <OBJECT> OR ProfieName <STRING>
* 1: True = Spectator channel, False = Normal channel <BOOL>
*
* Return Value:
* NOTHING
*
* Example:
* [player,true] call twc_fnc_setSpectator;
* OR
* ["jayman",false] call twc_fnc_setSpectator;
*
* Public: No
*/
params[["_unit",player],["_specator",true]];
_specator = if(_specator)then{"ON"}else{"OFF"};

if(typeName _unit isEqualTo "OBJECT")then{
	if(_unit == player)then{
		[] call format["acre_sys_core_fnc_spectator%1",_specator];
	}else{
		remoteExecCall [format["acre_sys_core_fnc_spectator%1",_specator],_unit];
	};
};

if(typeName _unit isEqualTo "STRING")then{
	{
		if(name _x == _unit)then{
			remoteExecCall [format["acre_sys_core_fnc_spectator%1",_specator],_x];
		};
	}forEach allPlayers;
};