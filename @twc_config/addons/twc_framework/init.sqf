waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

call compile preprocessFileLineNumbers "twc_framework\functions.sqf";


RollUpAction = ["RollID","Roll Sleeves Up\Down","", {call TWC_fnc_RollShirt},{call TWC_fnc_HasUniformModern}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","ACE_Equipment"], RollUpAction] call ace_interact_menu_fnc_addActionToObject;




AmmoMenu = ["MenuAmmo","Ammo","",{},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions"], AmmoMenu] call ace_interact_menu_fnc_addActionToClass;


// Warrior
AddHEMagazine = ["AddHE","Add HE Magazine","",{call TWC_fnc_AddHE},{"TWC_30mm_HE_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], AddHEMagazine] call ace_interact_menu_fnc_addActionToClass;
AddAPMagazine = ["AddAP","Add AP Magazine","",{call TWC_fnc_AddAP},{"TWC_30mm_AP_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], AddAPMagazine] call ace_interact_menu_fnc_addActionToClass;

RemoveAPMagazine = ["RemoveAP","Remove AP Magazine","",{call TWC_fnc_RemoveAP},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], RemoveAPMagazine] call ace_interact_menu_fnc_addActionToClass;
RemoveHEMagazine = ["RemoveHE","Remove HE Magazine","",{call TWC_fnc_RemoveHE},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], RemoveHEMagazine] call ace_interact_menu_fnc_addActionToClass;


player addEventHandler ["Put", "_this call TWC_fnc_RemoveAmmoInventory;"];


//C130

{
	if (_x iskindof "TWC_c130") then{	
		_X addAction ["<t color='#FF0000'>Jump Out!</t>", {[nearestObject [player, "TWC_c130"],player] call TWC_fnc_jumpout}];      
		};
}foreach vehicles;
