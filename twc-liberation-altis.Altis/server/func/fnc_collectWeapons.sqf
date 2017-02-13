params["_location",["_distance",400]];

if(!easyGearPickup)exitWith{};

_crate = "Box_NATO_AmmoVeh_F" createVehicle _location;
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;
clearItemCargoGlobal _crate;

_groundWeapons = nearestObjects [_location, ["WeaponHolder","GroundWeaponHolder","WeaponHolderSimulated"], _distance];
_weaponArray = [];
{
	_weaponArray = _weaponArray + WeaponCargo _x;
	deleteVehicle _x;
}forEach _groundWeapons;

{
	if(typeName _x == "STRING")then{
		_crate addWeaponCargoGlobal [_x,1];
	};
}forEach _weaponArray;


_men = nearestObjects [_location, ["Man"], _distance];
{
	if (alive _x) then{
		_men = _men - [_x];
	};
}forEach _men;

_gearArray = [];

{
	_vest = vestContainer _x;
	_vestCargo = getMagazineCargo _vest;
	_gearArray = _gearArray + [_vestCargo];
}forEach _men;

_place = 0;
_vestPlace = 0;
_numberOfVests = count _gearArray;
while {_vestPlace < _numberOfVests}do{
	{
		_crate addMagazineCargoGlobal [_x,(((_gearArray select _vestPlace) select 1) select _place)];
		_place = _place + 1;
	}forEach ((_gearArray select _vestPlace) select 0);
	_vestPlace = _vestPlace + 1;
	_place = 0;
};
_gearArray = [];

{
	_uniform = uniformContainer _x;
	_uniformCargo = getMagazineCargo _uniform;
	_gearArray = _gearArray + [_uniformCargo];
}forEach _men;

_place = 0;
_uniformPlace = 0;
_numberOfuniforms = count _gearArray;
while {_uniformPlace < _numberOfuniforms}do{
	{
		_crate addMagazineCargoGlobal [_x,(((_gearArray select _uniformPlace) select 1) select _place)];
		_place = _place + 1;
	}forEach ((_gearArray select _uniformPlace) select 0);
	_uniformPlace = _uniformPlace + 1;
	_place = 0;
};
_gearArray = [];
{
	_backpack = backpackContainer _x;
	_backpackCargo = getMagazineCargo _backpack;
	_gearArray = _gearArray + [_backpackCargo];
}forEach _men;

_place = 0;
_backpackPlace = 0;
_numberOfbackpacks = count _gearArray;
while {_backpackPlace < _numberOfbackpacks}do{
	{
		_crate addMagazineCargoGlobal [_x,(((_gearArray select _backpackPlace) select 1) select _place)];
		_place = _place + 1;
	}forEach ((_gearArray select _backpackPlace) select 0);
	_backpackPlace = _backpackPlace + 1;
	_place = 0;
};

//Creates marker so players can find the box
_markerstr = createMarker [str (random 1000),_location];
_markerstr setMarkerShape "ICON";
_markerstr setMarkerType "mil_marker";
_markerstr setMarkerText "Looted Gear Crate";
_markerstr setMarkerColor "colorWest";

//When blufor leaves it checks if crate has moved. If it hasn't it is delete. Marker gets deleted.
[_markerstr,_crate,_location] spawn{
_bluClose = 1;
	while{_bluClose == 1}do{
		_obj = nearestObjects [(_this select 2),["Man","Car","Truck","Tank"],600];
		{
			if(side _x == West)exitWith{
				_bluClose = 1
			};
			_bluClose = 0;
		}forEach _obj;
	};
	deleteMarker (_this select 0);

	if((getPos (_this select 1)) distance2D (_this select 2) < 5) then{
		deleteVehicle (_this select 1);
	};
};