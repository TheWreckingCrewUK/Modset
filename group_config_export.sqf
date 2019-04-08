_groupCfg = configFile >> "CfgGroups" >> "West" >> "TWC_Groups_ColdWar";

_output = "";
for "_i" from 0 to ((count _groupCfg) - 1) do {
	_groupCfgEntry = _groupCfg select _i; 
	_currentTitle = getText (_groupCfgEntry >> "name");

	if (_currentTitle != "") then {
		_a = "## " + _currentTitle + endl;
		_groupsWithin = configProperties [_groupCfg select _i, "true", true];
		_groupsOutput = "";

		for "_y" from 0 to ((count _groupsWithin) - 1) do {
			_groupName = getText ((_groupsWithin select _y) >> "name");

			if (_groupName != "") then {
				_b = "### " + _groupName + endl;
				_unitsWithin = configProperties [_groupsWithin select _y, "true", true];
				_unitsOuput = "Role | Weapon(s) | Personal Gear | Backpack" + endl + "--- | --- | --- | ---" + endl;
				
				for "_w" from 0 to ((count _unitsWithin) - 1) do {
					_unitClass = getText ((_unitsWithin select _w) >> "vehicle");
					
					if (_unitClass != "") then {
						_unitConfig = configFile >> "CfgVehicles" >> _unitClass;
						_unitName = getText (_unitConfig >> "displayName");
						_unitWeaponsArray = getArray (_unitConfig >> "weapons");
						_unitWeapons = "";
						{
							if (toLower(_x) != "throw" && toLower(_x) != "put") then {
								_name = getText (configFile >> "CfgWeapons" >> _x >> "displayName");
								if (_forEachIndex != 0) then {
									_unitWeapons = _unitWeapons + ", " + _name;
								} else {
									_unitWeapons = _name;
								};
							};
						} forEach _unitWeaponsArray;
						
						_unitMagazinesArray = getArray (_unitConfig >> "magazines");
						_unitMagazinesUniques = [];
						{ _unitMagazinesUniques pushBackUnique _x; } forEach _unitMagazinesArray;

						_unitMagazines = "";
						{
							_magazineName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
							_magClass = _x;
							if (_forEachIndex != 0) then {
								_unitMagazines = _unitMagazines + ", " + str ({ _x isEqualTo _magClass } count _unitMagazinesArray) + "x " + _magazineName;
							} else {
								_unitMagazines = str ({ _x isEqualTo _magClass } count _unitMagazinesArray) + "x " + _magazineName;
							};
						} forEach _unitMagazinesUniques;
						
						_unitItems = getArray (_unitConfig >> "items");
						_radioCount = ({ _x == "ACRE_PRC343" } count _unitItems);
						if (_radioCount > 0) then { _unitMagazines = _unitMagazines + ", " + str ({ _x == "ACRE_PRC343" } count _unitClass) + "x AN/PRC-343"; };

						_unitBackpackOutput = "";
						_unitBackpack = configFile >> "CfgVehicles" >> (getText (_unitConfig >> "backpack"));
						_unitBackpackItems = configProperties [_unitBackpack >> "TransportItems", "true", true];

						{
							_itemName = getText (configFile >> "CfgWeapons" >> getText (_x >> "name") >> "displayName");
							if (_forEachIndex != 0) then {
								_unitBackpackOutput = _unitBackpackOutput + ", " + str getNumber (_x >> "count") + "x " + _itemName;
							} else {
								_unitBackpackOutput = str getNumber (_x >> "count") + "x " + _itemName;
							};
						} forEach _unitBackpackItems;

						_unitBackpackMagazines = configProperties [_unitBackpack >> "TransportMagazines", "true", true];
						_count = count _unitBackpackItems;

						{
							_magazineName = getText (configFile >> "CfgMagazines" >> getText (_x >> "magazine") >> "displayName");
							if (_unitBackpackOutput != "") then {
								_unitBackpackOutput = _unitBackpackOutput + ", " + str getNumber (_x >> "count") + "x " + _magazineName;
							} else {
								_unitBackpackOutput = str getNumber (_x >> "count") + "x " + _magazineName;
							};
						} forEach _unitBackpackMagazines;
						
						_unitBackpackWeapons = configProperties [_unitBackpack >> "TransportWeapons", "true", true];
						_count = _count + count _unitBackpackMagazines;

						{
							_weaponName = getText (configFile >> "CfgWeapons" >> getText (_x >> "weapon") >> "displayName");
							if (_unitBackpackOutput != "") then {
								_unitBackpackOutput = _unitBackpackOutput + ", " + str getNumber (_x >> "count") + "x " + _weaponName;
							} else {
								_unitBackpackOutput = str getNumber (_x >> "count") + "x " + _weaponName;
							};
						} forEach _unitBackpackWeapons;

						_unitsOuput = _unitsOuput + _unitName + " | "  + _unitWeapons + " | " + _unitMagazines + " | " + _unitBackpackOutput + endl;
					};
				};
				
				_groupsOutput = _groupsOutput + _b + _unitsOuput + endl;
			};
		};

		_output = _output + _a + _groupsOutput + "---" + endl;
	};
};

copyToClipboard _output;