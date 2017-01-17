params ["_enabled"];

if(!hasInterface)exitWith{};

if !(_enabled) exitWith {};

waituntil {vehicle player == player};

Switch (typeof player) do {
	case "Modern_British_Squadleader" : {player additemTobackpack "ACRE_PRC117F"};
	case "Modern_British_Platoon_Commander" : {player additemTobackpack "ACRE_PRC117F"};
	case "Modern_British_Platoon_Sergeant" : {player additemTobackpack "ACRE_PRC117F"};
	case "Modern_British__Coin_Squadleader" : {player additemTobackpack "ACRE_PRC117F"};
	case "Modern_British_Coin_Platoon_Commander" : {player additemTobackpack "ACRE_PRC117F"};
	case "Modern_British_Coin_Platoon_Sergeant" : {player additemTobackpack "ACRE_PRC117F"};
	case "Modern_British_FAC" : {player additemTobackpack "ACRE_PRC117F"};
	case "ColdWar_Section_Leader" : {player additemTobackpack "ACRE_PRC117F"};
	case "ColdWar_Platoon_Commander" : {player additemTobackpack "ACRE_PRC117F"};
	case "ColdWar_sergeant" : {player additemTobackpack "ACRE_PRC117F"};
	case "1990_British_Squadleader" : {player additemTobackpack "ACRE_PRC117F"};
	case "1990_British_Platoon_Commander" : {player additemTobackpack "ACRE_PRC117F"};
	case "1990_British_Platoon_Sergeant" : {player additemTobackpack "ACRE_PRC117F"};
	case "1990_British_Squadleader_Desert" : {player additemTobackpack "ACRE_PRC117F"};
	case "1990_British_Platoon_Commander_Desert" : {player additemTobackpack "ACRE_PRC117F"};
	case "1990_British_Platoon_Sergeant_Desert" : {player additemTobackpack "ACRE_PRC117F"};
	case "bw_platoon_commander" : {player additemTobackpack "ACRE_PRC117F"};
	case "bw_platoon_sergeant" : {player additemTobackpack "ACRE_PRC117F"};
	case "bw_section_leader" : {player additemTobackpack "ACRE_PRC117F"};
	case "bw_vehicle_commander" : {player additemTobackpack "ACRE_PRC117F"};
	case "usa_1970_leader" : {player additemTobackpack "ACRE_PRC117F"};
};