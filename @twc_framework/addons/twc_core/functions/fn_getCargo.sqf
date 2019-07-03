params ["_vehicle"];

private _weapons = getWeaponCargo _vehicle;
private _items = getItemCargo _vehicle;
private _backpacks = getBackpackCargo _vehicle;
private _magazines = getMagazineCargo _vehicle;

private _return = [];

{
	_return pushBack ["weapon", _x, ((_weapons select 1) select _forEachIndex)];
} forEach (_weapons select 0);

{
	_return pushBack ["item", _x, ((_items select 1) select _forEachIndex)];
} forEach (_items select 0);

{
	_return pushBack ["backpack", _x, ((_backpacks select 1) select _forEachIndex)];
} forEach (_backpacks select 0);

{
	_return pushBack ["magazine", _x, ((_magazines select 1) select _forEachIndex)];
} forEach (_magazines select 0);

_return sort true;

_return