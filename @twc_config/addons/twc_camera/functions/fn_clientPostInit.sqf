if !(hasInterface) exitWith {};

// Don't run on public
if (TWC_Core_isPublic) exitWith {};

// Don't run on locally hosted/SP
if !(TWC_Core_isServer) exitWith { systemChat "Skipping intro, due to being hosted locally (or server incorrectly configured)..."; };

// Global
TWC_Operation_Name = getMissionConfigValue ["onLoadName", getMissionConfigValue ["briefingName", "Untitled"]];

// Failsafe check. There seems to be occasions where this isn't being set? 
if (isNil "TWC_Core_BroadcastMode") then { TWC_Core_BroadcastMode = false; };

private _isDisabled = missionNameSpace getVariable ["TWC_Intro_isDisabled", false];
private _missionStarted = missionNameSpace getVariable ["TWC_Intro_Started", false];

["CBA_loadingScreenDone", {
	_thisArgs params ["_isDisabled", "_missionStarted"];
	
	private _operationAuthor = getMissionConfigValue ["author", "The Wrecking Crew"];
	
	// Block the screen at the start.
	"TWCIntroText" cutText ["", "BLACK FADED", 90, false];
	
	// If we've got some completed tasks, mark them as so. This isn't really utilised, but maintained regardless.
	if (!isNil "completedTasks") then {
		{
			[_x select 0, _x select 1, false] call BIS_fnc_taskSetState;
		} forEach completedTasks;
	};
	
	// If we're a JIP, make sure we collect the old 'radio' messages, and reinsert them back into the diary entries.
	if (_missionStarted) then {
		if !(isNil "twc_JIP_CommandMessage") then {
			{
				player createDiaryRecord ["Diary", ["Radio Message", _x]];
			} forEach twc_JIP_CommandMessage;
		};
	};
	
	if (_isDisabled || _missionStarted) exitWith {
		[TWC_Operation_Name, _operationAuthor, _missionStarted] call TWC_Camera_fnc_startStaticIntro;
	};
	
	[TWC_Operation_Name, _operationAuthor] spawn TWC_Camera_fnc_startCamIntro;
}, [_isDisabled, _missionStarted]] call CBA_fnc_addEventHandlerArgs;