/*
* Finds the admin object currently logged in.
* Returns the player in singleplayer.
*/
params["_sender","_message"];

_admin = false;
_ID = false;

{
	_ID = owner _x;
	_isAdmin = admin _ID;
	if (_isAdmin != 0) exitwith {
		_admin = _x;
		
	};
} forEach allPlayers;

if(!isMultiplayer)then{
	_admin = player;
	_ID = 0;
};

//exit on no admin. Maybe change to twc_fnc_commanders?
if(str _admin == "false")exitWith{diag_log format["At %1 Find Admin Failed. Here is message %2 %3",_time,name _sender,_message]};

if(isNil _message)then{
	_name = name _sender;
	_message = format ["%1: %2", _name, _message];
	
	_message remoteExecCall ["hint", _admin];
	[_admin, ["Diary", ["Help Message", _message]]] remoteExecCall ["createDiaryRecord", _ID];
};

//For backwards compatability
_admin