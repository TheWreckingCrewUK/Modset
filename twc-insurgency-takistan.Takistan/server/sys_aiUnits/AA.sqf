

removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeVest this;
removeBackpack this;
removeGoggles this;


for "_i" from 1 to 5 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "rhs_30Rnd_545x39_AK";
this addBackpack "rhs_rpg_empty";
this addItemToBackpack "rhs_mag_9k38_rocket";
this addHeadgear "LOP_H_Turban_mask";

this addWeapon "rhs_weap_ak74m_desert_npz";
this addWeapon "rhs_weap_igla";

this linkItem "ItemRadioAcreFlagged";
