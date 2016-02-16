_nObject = nearestObject [player, "TWC_warrior"];
_allmags = _nObject magazinesTurret [0];
_MagsWarrior = 0;

{
if (_x == "TWC_30mm_3rnd_HE") then {_MagsWarrior = _MagsWarrior + 1;};
} foreach _allmags;

if (_MagsWarrior > 0) then {
	if (player canadd "TWC_30mm_HE_item") then{
		player additem "TWC_30mm_HE_item";
		_nObject removeMagazine "TWC_30mm_3rnd_HE";
	}else{
		Systemchat "Not enough inventory space to remove Magazine.";
	};
}else{
systemchat "There is no HE magazines in the vehicle."
};


