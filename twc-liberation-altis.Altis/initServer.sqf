_script = execVM "SHK_pos\shk_pos_init.sqf";
waitUntil {scriptDone _script};
townEllipses = [];
publicVariable "townEllipses";
#include "server\init.sqf";
easyGearPickup = true;

missionNameSpace setVariable ["playerBase_Marksman", false, true];
missionNameSpace setVariable ["playerBase_Roadblock", false,true];
missionNameSpace setVariable ["playerBase_Garage", false,true];

//Arsenal Shit:
arsenalAmmoBoxWeapons = ["SMG_02_F","hgun_Pistol_heavy_01_F","Binocular"];
publicVariable "arsenalAmmoBoxWeapons";
arsenalAmmoBoxMagazines = ["30Rnd_9x21_Mag_SMG_02","11Rnd_45ACP_Mag"];
publicVariable "arsenalAmmoBoxMagazines";
arsenalAmmoBoxItems = ["FirstAidKit","ItemMap","ItemCompass","ItemWatch","V_BandollierB_blk","U_BG_Guerrilla_6_1","H_Cap_oli"];
publicVariable "arsenalAmmoBoxItems";
arsenalAmmoBoxBackpacks = [];
publicVariable "arsenalAmmoBoxBackpacks";