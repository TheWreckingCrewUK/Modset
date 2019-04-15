params ["_side", "_markers"];

_sidePlayer = str (side player);
if (_side == _sidePlayer) then {
	{
		_x setMarkerAlphaLocal 0;
	} forEach _markers;
};