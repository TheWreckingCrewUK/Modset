/*
* Finds the admin object currently logged in.
* Returns the player in singleplayer.
*/

if (!isMultiplayer) exitwith {player};

_admin = {
	_ID = owner _x;
	_isAdmin = admin _ID;
	if (_isAdmin != 0) exitwith {
		_x;
	};
} forEach allPlayers;

_admin