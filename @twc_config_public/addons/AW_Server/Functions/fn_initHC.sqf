/*
	File: fn_initHC.sqf
	Author: Dom
	Description: Sets up the automatic transfer of opfor units to the HC, called once HC connects
*/

AW_transferToHCHandle = addMissionEventHandler ["GroupCreated",{
	params ["_group"];
	if (isNull HC1) exitWith {removeMissionEventHandler ["GroupCreated",AW_transferToHCHandle]};

	if (side _group isEqualTo east) then {
		[
			{
				params ["_group"];
				_group setGroupOwner (owner HC1);
			},
			[_group],
			6
		] call CBA_fnc_waitAndExecute;
	};
}];