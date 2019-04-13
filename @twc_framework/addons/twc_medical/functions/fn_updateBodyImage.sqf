params ["_selectionBloodLoss", "_damaged", "_selectionTourniquet", "_display"];

// Handle the body image coloring
private _availableSelections = [54, 55, 56, 57, 58, 59];

{
	// Show/hide the tourniquet icon overlay
	private _tourniquet = _selectionTourniquet select _forEachIndex;
	if (_tourniquet > 0) then {
		(_display displayCtrl (_x) ctrlSetTextColor [0, 0, 0.8, 1];
	} else {
		(_display displayCtrl (_x) ctrlSetTextColor [0, 0, 0.8, 0];
	};
} forEach _availableSelections;

{
	private _red = 1;
	private _green = 1;
	private _blue = 1;

	if (_x > 0) then {
		if (_damaged select _forEachIndex) then {
			_green = (0.9 - _x) max 0;
			_blue = _green;
		} else {
			_green = (0.9 - _x) max 0;
			_red = _green;
		};
	};

	(_display displayCtrl (_availableSelections select _forEachIndex)) ctrlSetTextColor [_red, _green, _blue, 1.0];
} forEach _selectionBloodLoss;
