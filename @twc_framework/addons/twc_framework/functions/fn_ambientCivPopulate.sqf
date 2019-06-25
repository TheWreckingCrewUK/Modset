params ["_pos", "_type", "_size"];

_civArray = switch _type do {
	case "Arabian": {
		["CUP_C_TK_Man_04",
		"CUP_C_TK_Man_04_Jack",
		"CUP_C_TK_Man_04_Waist",
		"CUP_C_TK_Man_07",
		"CUP_C_TK_Man_07_Coat",
		"CUP_C_TK_Man_07_Waist",
		"CUP_C_TK_Man_08",
		"CUP_C_TK_Man_08_Jack",
		"CUP_C_TK_Man_08_Waist",
		"CUP_C_TK_Man_05_Coat",
		"CUP_C_TK_Man_05_Jack",
		"CUP_C_TK_Man_05_Waist",
		"CUP_C_TK_Man_06_Coat",
		"CUP_C_TK_Man_06_Jack",
		"CUP_C_TK_Man_06_Waist",
		"CUP_C_TK_Man_02",
		"CUP_C_TK_Man_02_Jack",
		"CUP_C_TK_Man_02_Waist",
		"CUP_C_TK_Man_01_Waist",
		"CUP_C_TK_Man_01_Jack",
		"CUP_C_TK_Man_01_Coat",
		"CUP_C_TK_Man_03_Coat",
		"CUP_C_TK_Man_03_Jack",
		"CUP_C_TK_Man_03_Waist"]
	}:
	case "Eastern European": {
		["CUP_C_R_Assistant_01",
		"CUP_C_R_Citizen_02",
		"CUP_C_R_Citizen_01",
		"CUP_C_R_Citizen_04",
		"CUP_C_R_Citizen_03",
		"CUP_C_R_Doctor_01",
		"CUP_C_R_Functionary_01",
		"CUP_C_R_Functionary_02",
		"CUP_C_R_Worker_05",
		"CUP_C_R_Mechanic_02",
		"CUP_C_R_Mechanic_03",
		"CUP_C_R_Mechanic_01",
		"CUP_C_R_Pilot_01",
		"CUP_C_R_Priest_01",
		"CUP_C_R_Profiteer_02",
		"CUP_C_R_Profiteer_03",
		"CUP_C_R_Profiteer_01",
		"CUP_C_R_Profiteer_04",
		"CUP_C_R_Rocker_01",
		"CUP_C_R_Rocker_03",
		"CUP_C_R_Rocker_02",
		"CUP_C_R_Rocker_04",
		"CUP_C_R_Schoolteacher_01",
		"CUP_C_R_Villager_01",
		"CUP_C_R_Villager_04",
		"CUP_C_R_Villager_02",
		"CUP_C_R_Villager_03",
		"CUP_C_R_Woodlander_01",
		"CUP_C_R_Woodlander_02",
		"CUP_C_R_Woodlander_03",
		"CUP_C_R_Woodlander_04",
		"CUP_C_R_Worker_03",
		"CUP_C_R_Worker_04",
		"CUP_C_R_Worker_02",
		"CUP_C_R_Worker_01"]
	};
	case "Mediterranean": {
		["C_man_w_worker_F",
		"C_Man_UtilityWorker_01_F",
		"C_man_shorts_4_F",
		"C_man_shorts_3_F",
		"C_man_shorts_2_F",
		"C_Man_Messenger_01_F",
		"C_man_hunter_1_F",
		"C_man_p_shorts_1_F",
		"C_man_p_fugitive_F",
		"C_Man_Fisherman_01_F",
		"C_Man_ConstructionWorker_01_Red_F",
		"C_Man_ConstructionWorker_01_Blue_F",
		"C_Man_ConstructionWorker_01_Black_F",
		"C_man_1_3_F",
		"C_man_1_2_F",
		"C_man_1_1_F",
		"C_man_shorts_1_F",
		"C_man_polo_6_F",
		"C_man_polo_5_F",
		"C_man_polo_4_F",
		"C_man_polo_3_F",
		"C_man_polo_2_F",
		"C_man_polo_1_F",
		"C_Man_casual_6_F",
		"C_Man_casual_5_F",
		"C_Man_casual_4_F",
		"C_Man_casual_3_F",
		"C_Man_casual_2_F",
		"C_Man_casual_1_F",
		"C_man_1"
		"C_man_p_beggar_F"]
	}:
	case "Asian": {
		["C_man_p_beggar_F_asia",
		"C_Man_casual_1_F_asia",
		"C_Man_casual_2_F_asia",
		"C_Man_casual_3_F_asia",
		"C_Man_casual_4_F_asia",
		"C_Man_casual_5_F_asia",
		"C_Man_casual_6_F_asia",
		"C_man_polo_1_F_asia",
		"C_man_polo_2_F_asia",
		"C_man_polo_3_F_asia",
		"C_man_polo_4_F_asia",
		"C_man_polo_5_F_asia",
		"C_man_polo_6_F_asia",
		"C_man_shorts_1_F_asia",
		"C_man_p_fugitive_F_asia",
		"C_man_p_shorts_1_F_asia",
		"C_man_shorts_2_F_asia",
		"C_man_shorts_3_F_asia",
		"C_man_shorts_4_F_asia"]
	}:
	case "African": {
		["C_man_p_beggar_F_afro",
		"C_Man_casual_1_F_afro",
		"C_Man_casual_2_F_afro",
		"C_Man_casual_3_F_afro",
		"C_Man_casual_4_F_afro",
		"C_Man_casual_5_F_afro",
		"C_Man_casual_6_F_afro",
		"C_man_polo_1_F_afro",
		"C_man_polo_2_F_afro",
		"C_man_polo_3_F_afro",
		"C_man_polo_4_F_afro",
		"C_man_polo_5_F_afro",
		"C_man_polo_6_F_afro",
		"C_man_shorts_1_F_afro",
		"C_man_p_fugitive_F_afro",
		"C_man_p_shorts_1_F_afro",
		"C_man_shorts_2_F_afro",
		"C_man_shorts_3_F_afro",
		"C_man_shorts_4_F_afro"]
	}:
};

_location = nearestLocation [_pos, ""];

for "_i" from 0 to _size do {
	_spawnPos = [_location] call BIS_fnc_randomPos
	_civ = createAgent [selectRandom _civArray, nearestBuilding _spawnPos, [], 0, "NONE"];
	
	_movePos = [_location, [], {isOnRoad _this}] call BIS_fnc_randomPos;
	_wp = (group _civ) addWaypoint [_movePos, 0];
	_wp setWaypointType "MOVE";
	_wp setWaypointStatements ["true", "[this] call twc_fnc_ambientCivWaypoint"];
};