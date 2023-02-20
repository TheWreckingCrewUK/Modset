params ["_mapID"];

_mapOwner = _mapID getVariable "twc_mapMarkerOwner";
if(_mapOwner == objNull)exitWith{hint "The Map has no owner"};

//get copyer and copy'd markers
_markerArray = _mapOwner getVariable ["twc_localMarkers",[]];
_ownArray = player getVariable ["twc_localMarkers",[]];

//probably a better way, but this compares both arrays and removes duplicates.
{
	_delete = 0;
	_test = _x select 1;
	{
		if( str _test == str (_x select 1))then{
			_delete = 1;
		};
	}forEach _ownArray;
	if(_delete == 1)then{
		_markerArray = _markerArray - _x;
	};
}forEach _markerArray;

//Add other markers to your map
{
	_x params ["_name","_pos", "_dir", "_type", "_shape", "_size", "_text", "_alpha", "_color"];
	
	_marker = createMarkerLocal [str _pos, _pos];
	_marker setMarkerDirLocal _dir;
	_marker setMarkerTypeLocal _type;
	_marker setMarkerShapeLocal _shape;
	_marker setMarkerSizeLocal _size;
	_marker setMarkerTextLocal _text;
	_marker setMarkerAlphaLocal _alpha;
	_marker setMarkerColorLocal _color;
	
	//Add them to your own player variable;
	_ownArray pushback _x;
	
}forEach _markerArray;

player setVariable ["twc_localMarkers", _ownArray, true];