/*
 * Toggles the option to 'roll shirt sleeves' on appropriate uniform.
 * Author: Jayman
 */
params [["_enabled", false, [false]]];

if !(hasInterface)exitWith{};
if !(_enabled) exitWith {};

//Checks if you even have a possible uniform
_allowedUniforms = ["UK3CB_BAF_U_CombatUniform_MTP","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve","UK3CB_BAF_U_CombatUniform_DPMT","UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve","UK3CB_BAF_U_CombatUniform_DDPM_RM","UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve"];
if !(uniform player in _allowedUniforms)exitWith{};

//ACE Action
rollShirtAction = ["RollSleeves","Equipment","", {},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], rollShirtAction] call ace_interact_menu_fnc_addActionToObject;

rollShirtActionAction = ["rollShirtAction","Roll Sleeves","", {[] call twc_fnc_rollSleeves},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], rollShirtActionAction] call ace_interact_menu_fnc_addActionToObject;

//Actual Sleeve Rolling Function
twc_fnc_rollSleeves = {
	_uniform = uniform player;
	_newUniform = switch (_uniform)do{
	//Modern
		case "UK3CB_BAF_U_CombatUniform_MTP": {"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
		case "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve": {"UK3CB_BAF_U_CombatUniform_MTP"};
	//Woodland 90
		case "UK3CB_BAF_U_CombatUniform_DPMT": {"UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve"};
		case "UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve": {"UK3CB_BAF_U_CombatUniform_DPMT"};
	//Desert 90
		case "UK3CB_BAF_U_CombatUniform_DDPM_RM": {"UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve"};
		case "UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve": {"UK3CB_BAF_U_CombatUniform_DDPM_RM"};
		default {hint "You do not have an appropriate uniform to roll sleeves"};
	};
	//Saves Gear
	_items = uniformItems player;
	_magazines = magazinesAmmo (uniformContainer player);
	removeUniform player;
	player adduniform _newUniform;
	
	{
		if !(_x isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
			player addItemToUniform _x;
		};
	} foreach _items;
	
	{
		player addMagazine [(_x select 0),(_x select 1)];
	} forEach _magazines;
};