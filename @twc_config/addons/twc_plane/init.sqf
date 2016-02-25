waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

{
	if (_x iskindof "TWC_c130") then{	
		_X addAction ["<t color='#FF0000'>Jump Out!</t>", {[nearestObject [player, "TWC_c130"],player] call TWC_fnc_jumpout}];      
		};
}foreach vehicles;
