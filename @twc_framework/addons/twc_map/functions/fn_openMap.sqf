params ["_mapID"];

_mapOwner = _mapID getVariable "twc_mapMarkerOwner";

//if noone owns it then we can just exit as their are no markers
if(_mapOwner == objNull)exitWith{["twc_map_opened", [_mapID]] call CBA_fnc_localEvent};

//Exits if it is your own map
if(_mapOwner == player)exitWith{["twc_map_opened", [_mapID]] call CBA_fnc_localEvent};

//Goal here is to only show their map markers and not your own. Even if you copied them. Since its not your map
//Step 1 hide your own
_ownArray = player getVariable ["twc_localMarkers",[]];
//Future proofing if someone adjusts marker alpha
_newArray = [];
{
	_marker = (_x select 0);
	_alpha = markerAlpha _marker;
	_marker setMarkerAlphaLocal 0;
	_newArray pushback [_marker,_alpha];
}forEach _ownArray;

//step2 Add the map owners mapmarkers
_mapOwnerMarkers = _mapOwner getVariable ["twc_localMarkers",[]];
_mapArrayToDelete = [];
{
	_x params ["_name","_pos", "_dir", "_type", "_shape", "_size", "_text", "_alpha"];
	
	_marker = createMarkerLocal [str _pos, _pos];
	_marker setMarkerDirLocal _dir;
	_marker setMarkerTypeLocal _type;
	_marker setMarkerShapeLocal _shape;
	_marker setMarkerSizeLocal _size;
	_marker setMarkerTextLocal _text;
	_marker setMarkerAlphaLocal _alpha;
	
	_mapArrayToDelete pushback _marker;
	
}forEach _mapOwnerMarkers;

player setVariable ["twc_map_borrowedMarkers",_mapArrayToDelete];
player setVariable ["twc_map_hiddenMarkers",_newArray];

["twc_map_opened", [_mapID]] call CBA_fnc_localEvent;