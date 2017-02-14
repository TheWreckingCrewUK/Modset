params["_type"];
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

_unit = (group player) createUnit [_type,(getPos player),[],0,"NONE"];