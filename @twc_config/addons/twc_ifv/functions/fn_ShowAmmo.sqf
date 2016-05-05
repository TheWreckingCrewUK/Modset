Params ["_Warrior"];
_allmags = magazines _Warrior;
_MagsWarriorAP = 0;
_MagsWarriorHE = 0;
{
if (_x == "TWC_30mm_3rnd_AP") then {_MagsWarriorAP = _MagsWarriorAP + 1;};
} foreach _allmags;
{
if (_x == "TWC_30mm_3rnd_HE") then {_MagsWarriorHE = _MagsWarriorHE + 1;};
} foreach _allmags;

Hint parseText format ["<t color='#d0dd00' size='2' shadow='1' shadowColor='#000000' align='center'>Warrior Ammo</t><br/><t color='#d0dd00' size='1.2' shadow='1' shadowColor='#565656' align='left'>HE:</t><t color='##013bb6' size='1.2' shadow='1' shadowColor='#565656' align='right'>%1</t><br/><t color='#d0dd00' size='1.2' shadow='1' shadowColor='#565656' align='left'>AP:</t><t color='##013bb6' size='1.2' shadow='1' shadowColor='#565656' align='right'>%2</t>",_MagsWarriorHE,_MagsWarriorAP];

