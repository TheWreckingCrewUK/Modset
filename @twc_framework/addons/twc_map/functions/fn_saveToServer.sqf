//Only run on dedicated server host and dedicated server
if (!isServer) exitWith {};

params["_name","_array"];

_delete = false;
_deleteAt = false;
_newArray = [];
{
	if(_name == (_x select 0))exitWith{
		_delete = true;
		_deleteAt = _forEachIndex;
	};
}forEach twc_disconnectMarkers;

if(_delete)then{
	twc_disconnectMarkers deleteAt _deleteAt;
};

twc_disconnectMarkers pushback [_name, _array];
publicVariable "twc_disconnectMarkers";