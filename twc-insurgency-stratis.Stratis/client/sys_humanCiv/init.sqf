InsP_fnc_civKill = compile preprocessFileLineNumbers "client\sys_humanCiv\fnc_civKill.sqf";

execVM "client\sys_humanCiv\Markers.sqf";
execVM "client\sys_humanCiv\playerSwitch.sqf";
execVM "client\sys_humanCiv\weaponRestrictions.sqf";
sleep 5;
execVM "client\sys_humanCiv\fnc_spawnSelect.sqf";