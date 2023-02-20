params["_name"];
_return = [];
{
	if(_name == (_x select 0))exitWith{
		_return = (_x select 1);
	};
}forEach twc_disconnectMarkers;
_return