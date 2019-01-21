if (!isServer) exitWith {};

addMissionEventHandler ["BuildingChanged", {
	_this call twc_cleanup_fnc_cleanBuildingUp;
}];