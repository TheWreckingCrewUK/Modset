params["_unit"];

if(!isPlayer _unit)exitWith{};

_unit addEventHandler ["Reloaded",{
	params["_unit","_weapon","_muzzle","_newMagazine","_oldMagazine"];
	
	if(_oldMagazine select 1 == 0)then{
		switch(primaryWeapon _unit)do{
			case "TWC_Bren": {_unit addItem "TWC_EmptyBrenMag"};
			default{};
		};
	};
}];