params ["_person","_Container","_item"];

if (_container iskindof "TWC_Warrior") then {
	if (_item == "TWC_30mm_HE_item") then{
		 _vehitems = itemcargo _Container;
		clearitemcargoglobal _container;
		_vehitems = _vehitems - ["TWC_30mm_HE_item"];
		{
		_container additemcargoglobal [_x,1];
		} foreach _vehitems;
		_person Additem "TWC_30mm_HE_item";
	};
	if (_item == "TWC_30mm_AP_item") then{
		_vehitems = itemcargo _Container;
		clearitemcargoglobal _container;
		_vehitems = _vehitems - ["TWC_30mm_AP_item"];
		{
		_container additemcargoglobal [_x,1];
		} foreach _vehitems;
		_person Additem "TWC_30mm_AP_item";
	};
};




	
      