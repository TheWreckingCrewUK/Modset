InsP_fnc_civKill = compile preprocessFileLineNumbers "client\sys_humanCiv\fnc_civKill.sqf";

execVM "client\sys_humanCiv\playerSwitch.sqf";
execVM "client\sys_humanCiv\weaponRestrictions.sqf";
execvM "client\sys_humanciv\fnc_spawnSelect.sqf";
execVM "client\sys_humanciv\Markers.sqf";