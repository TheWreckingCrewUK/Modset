/*
	File: fn_ropeAttach.sqf
	Author: Dom
	Description: EVH called on a rope attach 
*/
params ["_object1", "_rope", "_object2"];

private _heliOwner = owner _object1;
if (_heliOwner isNotEqualTo (owner _object2)) then {
	_object2 setOwner _heliOwner;
};