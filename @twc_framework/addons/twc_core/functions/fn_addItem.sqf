/*
 * Adds item to player, where it fits. U -> V -> B
 * Returns false if it's not able to fit at all.
 */
params ["_unit", "_itemClassName"];

if (_unit canAddItemToUniform _itemClassName) exitWith {
	_unit addItemToUniform _itemClassName;
	true;
};

if (_unit canAddItemToVest _itemClassName) exitWith {
	_unit addItemToVest _itemClassName;
	true;
};

if (_unit canAddItemToBackpack _itemClassName) exitWith {
	_unit addItemToBackpack _itemClassName;
	true;
};

false