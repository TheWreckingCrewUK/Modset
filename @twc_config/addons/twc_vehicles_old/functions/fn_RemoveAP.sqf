
Params ["_Warrior"];
_allmags = _Warrior magazinesTurret [0];
_MagsWarrior = 0;
{
if (_x == "TWC_30mm_3rnd_AP") then {_MagsWarrior = _MagsWarrior + 1;};
} foreach _allmags;

if (_MagsWarrior > 0) then {
	if (player canadd "TWC_30mm_AP_item") then{
		player additem "TWC_30mm_AP_item";
		_Warrior removeMagazine "TWC_30mm_3rnd_AP";
	}else{
		Systemchat "Not enough inventory space to remove Magazine.";
	};
}else{
systemchat "There is no AP magazines in the vehicle."
};


