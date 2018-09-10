if (!(hasInterface) || isDedicated) exitWith {};

_mainHandlerID = [[] call twc_fnc_suppress_mainHandler] call CBA_fnc_addPerFrameHandler;
_thresholdHandlerID = [[] call twc_fnc_suppress_thresholdHandler] call CBA_fnc_addPerFrameHandler;
_pinnedHandlerID = [[] call twc_fnc_suppress_pinnedHandler] call CBA_fnc_addPerFrameHandler;

player addEventHandler ["Killed", {
	//params ["_unit", "_killer", "_instigator", "_useEffects"];

	[_mainHandlerID] call CBA_fnc_removePerFrameHandler;
	[_thresholdHandlerID] call CBA_fnc_removePerFrameHandler;
	[_pinnedHandlerID] call CBA_fnc_removePerFrameHandler;
}];