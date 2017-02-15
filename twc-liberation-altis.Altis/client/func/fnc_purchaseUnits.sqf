params["_type","_cost"];
/*types are:
B_G_Soldier_F //standard rifleman
B_G_Soldier_AR_F //automatic rifleman
B_G_medic_F //medic
B_G_engineer_F //engineer
B_G_Soldier_exp_F //explosive specialist
B_G_Soldier_GL_F //grenadier
B_G_Soldier_M_F //marskman
B_G_Soldier_LAT_F //rifleman AT
*/
if((friendlyMoney - _cost) < 0)exitWith{hint "You cannot afford this unit"};

if(_type != "AA")then{
	_unit = (group player) createUnit [_type,(getPos player),[],0,"NONE"];
}else{
	_unit = (group player) createUnit ["B_G_Soldier_F",(getPos player),[],0,"NONE"];
	_unit addBackpack "B_AssaultPack_rgr";
	_unit addMagazine "Titan_AA";
	_unit addWeapon "launch_O_Titan_F";
	_unit addMagazine "Titan_AA";
};

friendlyMoney = friendlyMoney - _cost;
publicVariable "friendlyMoney";

friendlyManpower = friendlyManpower + 1;
publicVariable "friendlyManpower";