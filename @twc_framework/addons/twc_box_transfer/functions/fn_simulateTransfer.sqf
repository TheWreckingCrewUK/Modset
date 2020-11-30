params ["_vehicle"];

private _time = 0;
private _totaltime = 0;

// items take quarter a second
// magazines take 1
// weapons & containers (backpacks) take 1.5

// [time, count, classname, itemtype]
private _events = [];
private _assets = [_vehicle] call TWC_Core_fnc_getCargo;

{
	_x params ["_type", "_classname", "_count"];
	
	_timeMod = 1;
	switch (_type) do {
		case "backpack";
		case "weapon": { _timeMod = 1.5; };
		case "item": { _timeMod = 0.25; };
		default { _timeMod = 1; };
	};
	
	_time = (_timeMod);
	_totaltime = _totaltime + (_count * _timeMod);
	_time = (_totaltime);
	_events pushBack [_time, _count, _count, _classname, _type];
} forEach _assets;
//systemchat ("total " + (str _totaltime));
[_events, _totaltime]