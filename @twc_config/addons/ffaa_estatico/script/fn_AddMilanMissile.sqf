_nObject = nearestObject [player, "TWC_Milan"];
	_allmags = magazines _nObject;


	if ((count _allmags) == 0) then {
		player removeitem "TWC_MilanMissileItem";
		_nObject addMagazine "TWC_Milan_Missile_Mag";
	}else{
	Systemchat "There is already a missile loaded.";
	};

