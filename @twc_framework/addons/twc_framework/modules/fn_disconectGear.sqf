/*
* Author: [TWC] jayman
* Sets rank insignias for friendly units. Changes default ACE pictures
*
* Arguments:
* 0: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [true] call disconectGear;
*
* Public: No
*/
params["_bool"];
if(!_bool)exitWith{};
addMissionEventHandler ["HandleDisconnect",{
	_unit = (_this select 0);
	_uid = (_this select 2);
}];

["deleteReconnected", "onPlayerConnected", {
	{
			deleteVehicle _x;
		};
	}forEach allDead;
}] call BIS_fnc_addStackedEventHandler;
