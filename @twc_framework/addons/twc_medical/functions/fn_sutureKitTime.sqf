params ["_caller", "_target", "_selectionName", "_className", "_items", "", ["_specificSpot", -1]];

// select biggest wound (open or bandaged on selection) to get time required
private _returnData = [_target, _selectionName] call twc_medical_fnc_selectSutureWound;

// if it's a bandaged wound, it's slightly quicker to suture (clean wound)
if (_returnData select 0) exitWith { 16; };
22;