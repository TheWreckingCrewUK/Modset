/*
	File: fn_provideAid.sqf
	Author: Dom
	Description: Secondary objective to provide medical aid to a front line sector
*/
if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
private _targetSector = [AW_bluforSectors] call AW_fnc_findFrontlineSector;
private _sectorCentre = markerPos _targetSector;

AW_secondaryActive = "medicalAid";
publicVariable "AW_secondaryActive";

private _marker = createMarker ["medicalAid",_sectorCentre];
_marker setMarkerType "mil_objective";
_marker setMarkerColor "ColorRed";
_marker setMarkerText "Medical Aid Requested";
_marker setMarkerSize [1.5,1.5];
["The location that aid has been requested has been marked.","generalNotif","Medical Aid"] remoteExecCall ["AW_fnc_notify",-2];

[
	{
		params ["_sectorCentre","_marker"];
		(playableUnits findIf {_x distance _sectorCentre < 2000}) isNotEqualTo -1
	},
	{
		params ["_sectorCentre","_marker"];
		private _injuredCount = 2 + (ceil (count playableUnits / 4));
		private _civilianTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianTypes");
		private _bodyParts = ["Head","Body","LeftArm","RightArm","LeftLeg","RightLeg"];
		private _damageTypes = ["grenade","explosive","ropeburn"];

		private _group = createGroup [civilian,true];
		for "_i" from 1 to _injuredCount do {
			private _civClass = selectRandom _civilianTypes;
			private _position = ["civilianSector",_sectorCentre,[150,_civClass]] call AW_fnc_findSafePosition;
			if (_position isEqualTo []) exitWith {[format["Civilian could not be spawned at %1",_targetSector]] call AW_fnc_logIt};

			private _civilian = _group createUnit [_civClass,_position,[],10,"NONE"];
			removeAllItems _civilian;
			_civilian addEventHandler ["Killed",{[_this select 1] call AW_fnc_civilianKilled}];

			private _woundCount = 2 + (round (random 1));
			for "_i" from 1 to _woundCount do {
				[_civilian,0.25,(selectRandom _bodyParts),(selectRandom _damageTypes)] call ace_medical_fnc_addDamageToUnit;
			};
			[_civilian,true,150,true] call ace_medical_fnc_setUnconscious;
			_civilian setVariable ["ace_medical_ai_lastFired",(CBA_missionTime + 300)];
		};
		[[_group],_sectorCentre] call AW_fnc_initSectorPatrol;

		[
			{
				params ["_civilians"];
				private _civCount = count _civilians;
				({
					!alive _x || 
					{[_x] call ace_medical_status_fnc_isInStableCondition}
				} count _civilians) isEqualTo _civCount;
			},
			{
				params ["_civilians","_marker","_sectorCentre"];
				["The aid mission is over.","generalNotif","Medical Aid"] remoteExecCall ["AW_fnc_notify",-2];
				private _aliveCount = {alive _x} count _civilians;
				[format["You saved %1 civilians.",_aliveCount],"generalNotif","Medical Aid"] remoteExecCall ["AW_fnc_notify",-2];

				[(_aliveCount * 5)] call AW_fnc_adjustCivRep;
				deleteMarker _marker;
				AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
				AW_secondaryActive = "";
				publicVariable "AW_secondaryActive";
				call AW_fnc_saveGame;
				[
					{
						params ["","_sectorCentre"];
						(playableUnits findIf {_x distance _sectorCentre < 1000}) isEqualTo -1
					},
					{
						params ["_civilians"];
						{
							if (alive _x) then {
								deleteVehicle _x;
							};
						} forEach _civilians;
					},
					[_civilians,_sectorCentre]
				] call CBA_fnc_waitUntilAndExecute;
			},
			[units _group,_marker,_sectorCentre]
		] call CBA_fnc_waitUntilAndExecute;
	},
	[_sectorCentre,_marker]
] call CBA_fnc_waitUntilAndExecute;