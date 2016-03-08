/*
 * Author: FakeMatty
 * Creates Marker
 *
 * Arguments:
 * 0:  Marker name
 *     0: Marker name <String>
 *     1: If it is randomly generated
 * 1: 
 *
 *
 *
 * Return Value:
 * None <NIL>
 *
 * Example:
 * [getpos player,true,"icon","HD_Dot",["",true],"Enemy pos",[1,1],"colorBlack",0] call twc_fnc_CreateMarker
 *
 * Public: No
 */

params ["_MarkerLocation",["_isMarkerLocal",False],["_MarkerShape","icon"],["_MarkerType","HD_dot"],["_MarkerNameArray",["",true]],["_MarkerDir",0],["_MarkerText","Marker"],["_MarkerSize",[1,1]],["_MarkerColour","colorBlack"],["_MarkerAlpha",0]];
_MarkerNameArray params ["_MarkerName","_isRandom"];

if (_isRandom) then{
	_MarkerName = str random 100000;
};

if (_isMarkerLocal) then {
	_AOAreaMarker = createMarker [ _MarkerName , position player ];
	_AOAreaMarker setmarkerpos _MarkerLocation;
	_AOAreaMarker setmarkershape _MarkerShape; 
	_AOAreaMarker setmarkertype _MarkerType;
	//_AOAreaMarker setmarkerDir _MarkerDir;
	_AOAreaMarker setmarkertext _MarkerText;
	_AOAreaMarker setmarkersize _MarkerSize;
	_AOAreaMarker setmarkercolor _MarkerColour;
	_AoAreaMarker setmarkeralpha _MarkerAlpha;
}else{
	_AOAreaMarker = createMarkerlocal [ _MarkerName , position player ];
	_AOAreaMarker setmarkerposlocal _MarkerLocation;
	_AOAreaMarker setmarkershapelocal _MarkerShape;
	_AOAreaMarker setmarkertypelocal _MarkerType;
	//_AOAreaMarker setmarkerDirlocal _MarkerDir;	
	_AOAreaMarker setmarkertextlocal _MarkerText;
	_AOAreaMarker setmarkersizelocal _MarkerSize;
	_AOAreaMarker setmarkercolorlocal _MarkerColour;
	_AoAreaMarker setmarkeralphalocal _MarkerAlpha;
}
