/*
* Author: [TWC] Bosenator
* Activates all addons, stores in global variable for server, adds curators at start & JIP
*
* Arguments:
* <NONE>
*
* Return Value:
* <NONE>
*
* Public: No
*/
if (!isServer) exitWith {};

// mgmt array
_allowedCurators = [
	"76561198070630639", // jayman
	"76561198050180681", // Saxon
	"76561198030665694", // Hobbs
	"76561198005456546" // Bosenator
];

TWC_Addons_List = []; // global for server

_cfgPatches = configFile >> "cfgpatches";
for "_i" from 0 to (count _cfgPatches - 1) do {
	_class = _cfgPatches select _i;
	
	if (isClass _class) then {
		TWC_Addons_List pushBack (configName _class);
	};
};

TWC_Addons_List call BIS_fnc_activateAddons;

_justPlayers = allPlayers - entities "HeadlessClient_F";

{
	if ((getPlayerUID _x) in _allowedCurators) then {
		[_x] call TWC_fnc_addCurator;
	};
} forEach _justPlayers;

["playerConnectedCuratorEH", "PlayerConnected", {
	params ["_id", "_uid", "_name", "_jip", "_owner"];
	
	if (_jip) then {
		// only do checks on array if it's a jip (less intensive on mission start)
		if (_uid in _allowedCurators) then {
			_justPlayersAgain = allPlayers - entities "HeadlessClient_F";

			{
				if (_uid == (getPlayerUID _x)) then {
					[_x] call TWC_fnc_addCurator;
				};
			} forEach _justPlayersAgain;
		};
	};
}] call BIS_fnc_addStackedEventHandler;