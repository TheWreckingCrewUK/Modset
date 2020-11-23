/*
* Author: [TWC] jayman
* Converts 100 Rnd Belts to 50 Rnd Belts
*
* Arguments:
* 0: Player <Unit>
*
* Return Value:
* NOTHING
*
* Example:
* [player] call twc_weapons_fnc_convert100To50;
*
* Public: No
*/

params["_unit"];

//get number of bullets
_bullets = 0;
_tracerbullets = 0;
{
	if((_x select 0) == "UK3CB_BAF_762_100Rnd")then{
		_bullets = _bullets + (_x select 1);
	};
	
	if((_x select 0) == "UK3CB_BAF_762_100Rnd_T")then{
		_tracerbullets = _tracerbullets + (_x select 1);
	};
}forEach (magazinesAmmo _unit);

//remove old magazines
_unit removeMagazines "UK3CB_BAF_762_100Rnd";
_unit removeMagazines "UK3CB_BAF_762_100Rnd_T";

//add Magazines
_ground = "GroundWeaponHolder_scripted" createVehicle (position _unit);
_ground setPos (getPos _unit);
_ground addEventHandler ["ContainerClosed", {
	params["_container","_unit"];
	if(count (magazineCargo _container) == 0)then{
		deleteVehicle _container;
	};
}];
while {_bullets > 0} do {
	if(_bullets >= 50)then{
		_ground addMagazineAmmoCargo ["TWC_UK3CB_BAF_762_50Rnd",1,50];
		_bullets = _bullets - 50;
	}else{
		_ground addMagazineAmmoCargo ["TWC_UK3CB_BAF_762_50Rnd",1,_bullets];
		_bullets = 0;
	};
};

while {_tracerbullets > 0} do {
	if(_tracerbullets >= 50)then{
		_ground addMagazineAmmoCargo ["TWC_UK3CB_BAF_762_50Rnd_T",1,50];
		_tracerbullets = _tracerbullets - 50;
	}else{
		_ground addMagazineAmmoCargo ["TWC_UK3CB_BAF_762_50Rnd_T",1,_tracerbullets];
		_tracerbullets = 0;
	};
};