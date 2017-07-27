private _cameraView = positionCameratoWorld [0,0,0] vectorFromTo (positionCameraToWorld [0,0,50]);  
private _bearing = round (((_cameraView select 0) atan2 (_cameraView select 1) + 360) % 360); 
if (_bearing == 360) then { _bearing = 0; }; // tidy up
_bearingString = str _bearing; 

// tidy up for single & double digits
switch (count _bearingString) do { 
	case 1: {_bearingString = "00" + str _bearing}; 
	case 2: {_bearingString = "0" + str _bearing}; 
}; 
 
_bearingString;