Everyone = [p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31,p32,p33,p34,p35];
Trainers = [p1,p2,p3,p4,p5];

if (player in Trainers) then {
	execVM "scripts\weaponLists\playerLoadouts\modernTrainer.sqf";
	_markerList = ['markerList','Area Markers List','', {hint format ["%1\n%2\n%3\n%4\n%5\n%6\n%7",'rifleRange','atArea','cqbArea','sniperRange','vehicleTraining','hqArea','battleship'];},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _markerList] call ace_interact_menu_fnc_addActionToObject;
	
}else{
	execVM "scripts\weaponLists\playerLoadouts\modern.sqf";
};