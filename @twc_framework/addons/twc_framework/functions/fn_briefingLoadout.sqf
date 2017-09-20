params["_unit"];
_titleText = "NOTE: The loadout shown below is only accurate at mission start.<br />
<br />";
_titleText = _titleText + format["Total Weight: %1 <br/><br/>",([_unit] call ace_movement_fnc_getWeight)];
_weaponText = "<font size='18'>WEAPONS:<br/></font>";
{
	_attachments = _x;
	if((_attachments select 0) in assignedItems _unit)then{}else{
		_weaponText = _weaponText + format["<img image='%1' height=48 />",getText (configFile >> "CfgWeapons" >> (_attachments select 0) >> "picture")];
		_attachments deleteAT 0;
		{
			if(typeName _x == "ARRAY" || str _x == "[]" || count _x < 3)then{
		
			}else{
				_weaponText = _weaponText + format["<img image='%1' height=48 />",getText (configFile >> "CfgWeapons" >> _x >> "picture")];
			};
		};
	}forEach _attachments;
}forEach (weaponsItems _unit);
_mags = (primaryWeaponMagazine _unit + secondaryWeaponMagazine _unit + handgunMagazine _unit + magazines _unit) call BIS_fnc_consolidateArray;
_magText = "<font size='18'><br/>Magazines:<br/></font>";
{
	_magText = _magText + format["<img image='%1' height=36 />",getText (configFile >> "CfgMagazines" >> _x select 0 >> "picture")];
	_magText = _magText + format["x%1",_x select 1];
	
} forEach _mags;
_items = (items _unit) call BIS_fnc_consolidateArray;
_itemText = "<font size='18'><br/>Items:<br/></font>";
{
	_itemText = _itemText + format["<img image='%1' height=36 />",getText (configFile >> "CfgWeapons" >> _x select 0 >> "picture")];
	_itemText = _itemText + format["x%1",_x select 1];
}forEach _items;
_equipment = assignedItems _unit;
_equipmentText = "<font size='18'><br/>Equipment:<br/></font>";
{
	if(_x == "ItemRadioAcreFlagged")then{}else{
		_equipmentText = _equipmentText + format["<img image='%1' height=36 />",getText (configFile >> "CfgWeapons" >> _x >> "picture")];
	};
}forEach _equipment;
_allText = _titleText + _weaponText + _magText + _itemText + _equipmentText;
_unit createDiaryRecord ["loadout",[name _unit,_allText]];