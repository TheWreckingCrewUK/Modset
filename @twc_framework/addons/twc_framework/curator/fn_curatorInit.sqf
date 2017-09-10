/*
* Author: [TWC] Bosenator
* Activates all addons, stores in global variable for server
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

_cfgPatches = configFile >> "cfgpatches";
for "_i" from 0 to (count _cfgPatches - 1) do {
	_class = _cfgPatches select _i;
	
	if (isClass _class) then {
		TWC_Addons_List pushBack (configName _class);
	};
};

TWC_Addons_List call BIS_fnc_activateAddons;