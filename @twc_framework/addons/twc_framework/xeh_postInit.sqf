//Calls all the functions on player start.
if(!hasInterface)exitWith{};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

ACE_maxWeightDrag = 100000;

//storing an extra weapon on the back.  will soon put weapon animation on it as well
//made mostly for coin rifleman and csms.
//fuck ace for not adding it themselves
twc_weaponOnBack = [];

player addEventHandler ["InventoryOpened",{
	_handle = []spawn{
		disableSerialization;
		waituntil {!(isnull (findDisplay 602))};
		 
		_ctrl3 = findDisplay 602 ctrlCreate ["RscBackground", -1]; 
		_ctrl3 ctrlSetPosition [1.075,0.1,0.3,0.58]; 
		_ctrl3 ctrlSetBackgroundColor [0.2,0.2,0.2, 0.69999999];
		_ctrl3 ctrlCommit 0; 
		 
		_ctrl = findDisplay 602 ctrlCreate ["RscButton", -1]; 
		_ctrl ctrlSetPosition [1.075,0.1,0.3,0.125];
		_ctrl ctrlSetBackgroundColor [0.1,0.1,0.1,1];
		_ctrl ctrlCommit 0; 
		_ctrl ctrlSetText "Weapon on Back"; 
		_ctrl ctrlAddEventHandler ["ButtonClick", {[] call twc_fnc_putWeaponOnBack}];
		
		_ctrl2 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl2 ctrlSetPosition [1.125,0.24,0.2,0.13];
		_ctrl2 ctrlCommit 0;
		if(str twc_weaponOnBack != "[]")then{
			_ctrl2 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		}else{
			_ctrl2 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_primary_gs.paa";
		};

		_ctrl3 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl3 ctrlSetPosition [1.125,0.455,0.2,0.13];
		_ctrl3 ctrlCommit 0;
		if(str twc_weaponOnBack != "[]")then{
			_ctrl3 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		}else{
			_ctrl3 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_secondary_gs.paa";
		};		
		
		uiNamespace setVariable ["twc_uiGun",(twc_weaponOnBack select 0)];		
		uiNamespace setVariable ["twc_uiGun_old",_ctrl2];
	};
}];

player addEventHandler ["Killed",{
	if(str twc_weaponOnBack == "[]")exitWith{};
	if(vehicle (_this select 0) != (_this select 0))then{
		(vehicle (_this select 0)) addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		(vehicle (_this select 0)) addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			(vehicle (_this select 0)) addMagazine (((twc_weaponOnBack select 1) select 0) select 1);
		};
	}else{
		_ground = "groundweaponHolder" createVehicle (getPos (_this select 0));
		_ground setPos (getPos (_this select 0));
		_ground addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 1),1];
		};
	};
}];


if (isNil {missionNameSpace getVariable "twcModuleEnabled"})exitWith {};


waitUntil{missionNameSpace getVariable "twcModuleFinished"};

[(missionNameSpace getVariable "era")] call twc_fnc_era;
[(missionNameSpace getVariable "forwardBase")] spawn twc_fnc_forwardBase;
[(missionNameSpace getVariable "nightGear"),(missionNameSpace getVariable "era")] spawn twc_fnc_nightGear;
[(missionNameSpace getVariable "rollSleeves")] spawn twc_fnc_rollShirt;
[(missionNameSpace getVariable "run")] spawn twc_fnc_run;
[(missionNameSpace getVariable "safeZone")] spawn twc_fnc_safeZone;
[(missionNameSpace getVariable "zuesObjects")] spawn twc_fnc_zeus;