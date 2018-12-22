/*
 * _caller is who to remove from.
 * _baseItemClass is the name of the very last remaining item that we're removing. It must follow the underscore standard to work!
 * i.e. TWC_Item_Medical_SutureKit_1
 */
params ["_caller", "_baseItemClass"];

_itemClassArray = _baseItemClass splitString "_";
if (count _itemClassArray == 0) exitWith { systemChat "Error splitting item class string for removal."; };
_itemClassNumber = parseNumber (_itemClassArray select (count _itemClassArray - 1));
if (_itemClassNumber != 1) exitWith { systemChat "Error removing item. Provided class wasn't base string."; };

_itemClassArrayDuplicate = +_itemClassArray;
_itemClassArrayDuplicate deleteAt (count _itemClassArrayDuplicate - 1); // remove the number!
_baseItemClassWoNumber = (_itemClassArrayDuplicate joinString "_");

{
	// first one we come across, we'll remove
	if (_x isKindOf [_baseItemClass, configFile >> "CfgWeapons"]) exitWith {
		// decrease the count by one, this is why we have common classname structure!
		_itemNewCount = (_itemClassNumber - 1);

		// something went horribly wrong ?
		_caller removeItem _x;
		if (_itemNewCount < 1) exitWith {};

		_newItem = format ["%1_%2", _baseItemClassWoNumber, _itemNewCount];
		_caller addItem _newItem;
	};
} forEach (items _caller);
