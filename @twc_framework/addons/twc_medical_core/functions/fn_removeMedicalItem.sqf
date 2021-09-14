/*
 * _caller is who to remove from.
 * _baseItemClass is the name of the very last remaining item that we're removing. It must follow the underscore standard to work!
 * i.e. TWC_Item_Medical_SutureKit_1
 */
params ["_caller", "_baseItemClass"];

_baseClassArray = _baseItemClass splitString "_";
if (count _baseClassArray == 0) exitWith { systemChat "Error splitting item class string for removal."; };
_baseClassNumber = parseNumber (_baseClassArray select ((count _baseClassArray) - 1));
if (_baseClassNumber != 1) exitWith { systemChat "Error removing item. Provided class wasn't base string."; };

_itemClassArrayDuplicate = +_baseClassArray;
_itemClassArrayDuplicate deleteAt ((count _itemClassArrayDuplicate) - 1);
_baseItemClassWoNumber = (_itemClassArrayDuplicate joinString "_");

{
	if (_x isKindOf [_baseItemClass, configFile >> "CfgWeapons"]) exitWith {
		_itemClassArray = _x splitString "_";
		_itemClassNumber = parseNumber (_itemClassArray select ((count _itemClassArray) - 1));
		_itemNewCount = (_itemClassNumber - 1);

		_caller removeItem _x;
		if (_itemNewCount < 1) exitWith {};

		_newItem = format ["%1_%2", _baseItemClassWoNumber, _itemNewCount];
		_succeeded = [_caller, _newItem] call TWC_Core_fnc_addItem;
		if (!_succeeded) then { systemChat format ["Failed to add new item: %1", _newItem]; };
		
		//_caller addItem _newItem;
	};
} forEach (items _caller);
