params ["_caller", "_target", "_selectionName"];

if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };

// have we got any sutures first
if (({_x isKindOf ["TWC_Item_Medical_SutureKit_1", configFile >> "CfgWeapons"]} count (items player)) < 1) exitWith { false };

// any suturable wounds on this selection?
private _returnData = [_target, _selectionName] call twc_medical_fnc_selectSutureWound;
if ((count _returnData[1]) < 1) exitWith { false };

true