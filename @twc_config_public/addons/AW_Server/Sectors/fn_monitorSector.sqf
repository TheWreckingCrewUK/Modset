/*
	File: fn_monitorSector.sqf
	Author: Dom
	Description: Main sector monitor loop
*/
params ["_args","_handle"];
_args params ["_sectorCentre","_sector","_radius","_allSectorGroups","_timeoutCount","_crates"];

private _captureRatio = [_sectorCentre,_radius] call AW_fnc_getCaptureRatio;
private _requiredCaptureRatio = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorCaptureRatio");
if (_captureRatio > _requiredCaptureRatio) then {
	[_handle] call CBA_fnc_removePerFrameHandler;
	_sector setMarkerColor "colorBLUFOR";
	[format["%1 has been successfully captured.",markerText _sector],"successNotif","Sector Secured"] remoteExecCall ["AW_fnc_notify",-2];
	AW_bluforSectors pushBack _sector;
	publicVariable "AW_bluforSectors";

	private _surrenderChance = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorSurrenderChance");
	{
		{
			if (alive _x && {isNull objectParent _x && {_surrenderChance > (random 100) && {_x distance _sectorCentre < (_radius * 1.5)}}}) then {
				[_x,"radioProtocol"] remoteExecCall ["disableAI",_x];
				[_x,true] remoteExecCall ["ACE_captives_fnc_setSurrendered",_x];
				[_x] call AW_fnc_monitorSurrender;
			};
		} forEach units _x;
	} forEach _allSectorGroups;

	private _threatIncreaseArray = getArray(missionConfigFile >> "Core_Settings" >> "AW_opforThreatIncreaseRate");
	private _sectorIndex = [_sector] call AW_fnc_getSectorTypeIndex;
	private _increaseAmount = _threatIncreaseArray select _sectorIndex;
	[_increaseAmount] call AW_fnc_adjustThreat;

	private _woundedCivChance = getNumber(missionConfigFile >> "Core_Settings" >> "AW_woundedCivChance");
	if (_sectorIndex < 2 && {_woundedCivChance > (random 100)}) then {
		private _civilianTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianTypes");
		private _woundedCivMaxCount = getNumber(missionConfigFile >> "Core_Settings" >> "AW_woundedCivMaxCount");
		private _bodyParts = ["Head","Body","LeftArm","RightArm","LeftLeg","RightLeg"];
		private _damageTypes = ["grenade","explosive","ropeburn"];
		private _civCount = ceil (random _woundedCivMaxCount);

		for "_i" from 1 to _civCount do {
			private _group = createGroup [civilian,true];
			[_group] call CBA_fnc_clearWaypoints;
			private _civClass = selectRandom _civilianTypes;
			private _position = ["civilianSector",_sectorCentre,[_radius,_civClass]] call AW_fnc_findSafePosition;
			if (_position isEqualTo []) exitWith {[format["Civilian could not be spawned at %1",_sector]] call AW_fnc_logIt};

			private _civilian = _group createUnit [_civClass,_position,[],10,"NONE"];
			removeAllItems _civilian;

			private _woundCount = 2 + (round (random 1));
			for "_i" from 1 to _woundCount do {
				[_civilian,0.25,(selectRandom _bodyParts),(selectRandom _damageTypes)] call ace_medical_fnc_addDamageToUnit;
			};
			[_civilian,true,150,true] call ace_medical_fnc_setUnconscious;
			_civilian setVariable ["ace_medical_ai_lastFired",(CBA_missionTime + 300)];
			
			private _position = (getPosATL _civilian) getPos [random 25,random 360];
			private _marker = createMarker [format["downedCiv%1",_i],_position];
			_marker setMarkerShape "ELLIPSE";
			_marker setMarkerSize [25,25];
			_marker setMarkerColor "ColorRed";
			_marker setMarkerBrush "SolidFull";
			_marker setMarkerAlpha 0.5;

			[
				{
					params ["_civilian"];
					!alive _civilian ||
					{[_civilian] call ace_medical_status_fnc_isInStableCondition ||
					{(playableUnits findIf {_x distance _civilian < 500}) isEqualTo -1}}
				},
				{
					params ["_civilian","_marker"];
					deleteMarker _marker;
					if ([_civilian] call ace_medical_status_fnc_isInStableCondition) then {
						[format["A civilian named %1 is thankful for your help.",name _civilian]] remoteExecCall ["AW_fnc_notify",-2];
						private _civRepGain = getNumber(missionConfigFile >> "Core_Settings" >> "AW_woundedCivRepGain");
						[_civRepGain] call AW_fnc_adjustCivRep;
						[[group _civilian],getPosATL _civilian] call AW_fnc_initSectorPatrol; 

						[
							{
								params ["_civilian"];
								(playableUnits findIf {_x distance _civilian < 500}) isEqualTo -1
							},
							{
								params ["_civilian"];
								deleteVehicle _civilian;
							},
							[_civilian]
						] call CBA_fnc_waitUntilAndExecute;
					} else {
						if (alive _civilian) then {
							deleteVehicle _civilian;
						};
					};
				},
				[_civilian,_marker]
			] call CBA_fnc_waitUntilAndExecute;
		};
	};

	if (_sectorIndex isEqualTo 3) then {
		private _towerArray = nearestObjects [_sectorCentre,["Land_Communication_F","Land_TTowerSmall_2_F","Land_TTowerBig_1_F"],50,true] select {alive _x};
		if (_towerArray isEqualTo []) exitWith {}; //tower destroyed already
		missionNamespace setVariable [format["AW_%1CapTime",_sector],CBA_missionTime];
		[_sector,true] call AW_fnc_setTower;
	} else {
		if (_sectorIndex isEqualTo 4) then {
			AW_factorySetup pushBack [_sector,-1,[0,0,0]];
			publicVariable "AW_factorySetup";
		};
	};
	[_sector,0] call AW_fnc_setGarrisonStrength;

	AW_canGatherIntel = true;
	publicVariable "AW_canGatherIntel";

	AW_sectorsTaken = AW_sectorsTaken + 1;
	call AW_fnc_saveGame;
	if (count AW_bluforSectors isEqualTo count AW_allSectors) then {
		private _stats = [];
		_stats pushBack AW_totalPlaytime;
		_stats pushBack AW_sectorsTaken;
		_stats pushBack AW_sectorsLost;
		_stats pushBack AW_sideMissionsSpawned;
		_stats pushBack AW_secondaryMissionsCompleted;
		_stats pushBack AW_secondaryMissionsFailed;
		_stats pushBack AW_bluforDeaths;
		_stats pushBack AW_opforDeaths;
		_stats pushBack AW_guerillaDeaths;
		_stats pushBack AW_civilianDeaths;
		_stats pushBack AW_bluforVehiclesDestroyed;
		_stats pushBack AW_bluforArmourDestroyed;
		_stats pushBack AW_bluforNavalDestroyed;
		_stats pushBack AW_bluforAirDestroyed;
		_stats pushBack AW_opforVehiclesDestroyed;
		_stats pushBack AW_opforArmourDestroyed;
		_stats pushBack AW_opforNavalDestroyed;
		_stats pushBack AW_opforAirDestroyed;
		_stats pushBack AW_guerillaVehiclesDestroyed;
		_stats pushBack AW_civilianVehiclesDestroyed;

		_stats remoteExec ["AW_fnc_endGame",0];
		[] call AW_fnc_wipeServer;
	} else {
		[
			{
				params ["_sectorCentre"];
				(playableUnits findIf {_x distance _sectorCentre < 1000}) isEqualTo -1
			},
			{
				params ["_sectorCentre","_sector"];
				AW_activeSectors deleteAt (AW_activeSectors find _sector);
				publicVariable "AW_activeSectors";

				{
					if (alive _x && {!(_x getVariable ["AW_playerUsed",false])}) then {
						deleteVehicle _x;
					};
				} forEach (nearestObjects [_sectorCentre,["LandVehicle","GroundWeaponHolder","WeaponHolderSimulated"],750]);
			},
			[_sectorCentre,_sector]
		] call CBA_fnc_waitUntilAndExecute;
	};
} else {
	private _despawnRadius = (getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorActivationRange")) * 2;
	private _nearbyBlufor = playableUnits findIf {_x distance _sectorCentre < _despawnRadius};
	if (_nearbyBlufor isEqualTo -1) then {
		_timeoutCount = _timeoutCount + 1;
		if (_timeoutCount > 600) then {
			[_handle] call CBA_fnc_removePerFrameHandler;

			private _endUnitCount = 0;
			{
				_endUnitCount = _endUnitCount + (count units _x);
				[_x] call AW_fnc_deleteGroup;
			} forEach _allSectorGroups;
			[_sector,_endUnitCount] call AW_fnc_updateGarrisonStrength;

			{
				deleteVehicle _x;
			} forEach _crates;

			AW_activeSectors deleteAt (AW_activeSectors find _sector);
			publicVariable "AW_activeSectors";
		} else {
			_args set [4,_timeoutCount]; //update timer
		};
	} else {
		if (_timeoutCount isNotEqualTo 0) then {
			_args set [4,0]; //reset timer
		};
	};
};