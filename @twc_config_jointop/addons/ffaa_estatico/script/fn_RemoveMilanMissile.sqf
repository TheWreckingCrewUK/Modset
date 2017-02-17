
	
		[
            5,
            [],
            {
					_nObject = nearestObject [player, "TWC_Milan"];
	_allmags = magazines _nObject;


	if ((count _allmags) > 0) then {
		if (player canadd "TWC_MilanMissileItem") then{
			player additem "TWC_MilanMissileItem";
			_nObject removeMagazine "TWC_Milan_Missile_Mag";
		}else{
			Systemchat "Not enough inventory space to remove Magazine.";
		};
	}else{
	systemchat "There is not a missile in the milan."
	};
	
	
				
            },
            {},
            "Taking Missile..."
        ] call ACE_common_fnc_progressBar;