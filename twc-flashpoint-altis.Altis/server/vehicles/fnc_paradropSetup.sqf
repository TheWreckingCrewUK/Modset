params["_vehicle"];
if(_vehicle == objNull)exitWith{hint "Cursor Object returned ObjNull. Paradrop setup failed."};

_vehicle removeAllEventHandlers "GetOut";

_vehicle addEventHandler ["GetOut", {
	_pack = unitBackpack (_this select 2);
	_class = typeOf _pack;
	_magazines = getMagazineCargo _pack;
	_weapons = getWeaponCargo _pack;
	_items = getItemCargo _pack;
	removeBackPack (_this select 2);
	removebackpack (_this select 2);
	(_this select 2) addbackpack "B_Parachute";
	_player = (_this select 2);
	[_player, _class, _magazines, _weapons, _items]spawn{waitUntil {isTouchingGround (_this select 0)	};
	
	
		(_this select 0) addBackpack (_this select 1); 
		clearAllItemsFromBackpack (_this select 0); 

		for "_i" from 0 to (count ((_this select 2) select 0) - 1) do {
			(unitBackpack (_this select 0)) addMagazineCargoGlobal [((_this select 2) select 0) select _i,((_this select 2) select 1) select _i];
		};
		for "_i" from 0 to (count ((_this select 3) select 0) - 1) do {
			(unitBackpack (_this select 0)) addWeaponCargoGlobal [((_this select 3) select 0) select _i,((_this select 3) select 1) select _i];
		};
		for "_i" from 0 to (count ((_this select 4) select 0) - 1) do {
			(unitBackpack (_this select 0)) addItemCargoGlobal [((_this select 4) select 0) select _i,((_this select 4) select 1) select _i];
		};
	};	
}];






