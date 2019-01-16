if (!isServer) exitWith {};

addMissionEventHandler ["BuildingChanged", {
	this call twc_cleanup_fnc_cleanBuildingUp;
}];