params ["_vehicle"];

private _time = 0;

// items take half a second
// magazines take 1
// weapons & containers (backpacks) take 1.5

// [time, classname, itemtype]
private _events = [];

private _currentCargoItemIndex = 0;

private _assets = [_vehicle] call TWC_Core_fnc_getCargo;

{
	_x params ["_type", "_classname", "_count"];
	
	for ({private _i = 0}, {_i < _count}, {_i = _i + 1}) do {
		_timeMod = 1;
		switch (_type) do {
			case "backpack";
			case "weapon": { _timeMod = 1.5; };
			case "item": { _timeMod = 0.5; };
			default { _timeMod = 1; };
		};
		
		_time = _time + _timeMod;
		
		_events pushBack [_time, _classname, _type];
	};
} forEach _assets;

_events