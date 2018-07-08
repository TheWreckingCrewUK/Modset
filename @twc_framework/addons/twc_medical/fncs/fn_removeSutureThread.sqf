params ["_caller"];

{
	// first one we come across, we'll remove
	if (_x isKindOf "TWC_Item_Medical_SutureKit_1") exitWith {
		// no threads left, good bye kit!
		if (_x == "TWC_Item_Medical_SutureKit_1") exitWith {
			_caller removeItem _x;
		};

		// decrease the count by one, this is why we have common classname structure!
		_sutureArray = _x splitString "_";
		_suturePriorCount = parseNumber (_sutureArray select 4);
		_sutureNewCount = (_suturePriorCount - 1);

		_caller removeItem _x;
		// something went horribly wrong ?
		if (_sutureNewCount < 1) exitWith { };

		_newSutureItem = format ["TWC_Item_Medical_SutureKit_%1", _sutureNewCount];
		_caller addItem _newSutureItem;

		// horrific hard code way
		/* switch (_x) do {
			case "TWC_Item_Medical_SutureKit_2": {
				_caller removeItem _x;
				_caller addItem "TWC_Item_Medical_SutureKit_1";
			};
			default { _caller removeItem _x; };
		}; */ 
	};
} forEach (items _caller);