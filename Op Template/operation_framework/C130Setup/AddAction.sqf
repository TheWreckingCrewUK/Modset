waituntil {time > 0};

{
	if (_x iskindof "RHS_C130J") then{	
		_X addAction ["<t color='#FF0000'>Jump Out!</t>", {[nearestObject [player, "RHS_C130J"],player] call TWC_fnc_jumpout}];      
		};
}foreach vehicles;