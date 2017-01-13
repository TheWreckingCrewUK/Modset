twc_fnc_playerListAction = {
actions = [];
actions set [0, player addAction ["<t color = '#145A32'>PlayerList</t>", {
	if (count actions == 1) then {
		actions set [1, player addAction [" Alpha List ", {
			execVM "client\playerList\alpha.sqf";
			{
				player removeAction _x;
			} forEach actions;
			call twc_fnc_playerListAction;
		}, [], 1, false, false]];
		actions set [2, player addAction [" Bravo List ", {
			execVM "client\playerList\bravo.sqf";
			{
				player removeAction _x;
			} forEach actions;
			call twc_fnc_playerListAction;
		}, [], 1, false, false]];
		actions set [3, player addAction [" Charlie List ", {
			execVM "client\playerList\charlie.sqf";
			{
				player removeAction _x;
			} forEach actions;
			call twc_fnc_playerListAction;
		}, [], 1, false, false]];
		actions set [4, player addAction [" Air List ", {
			execVM "client\playerList\air.sqf";
			{
				player removeAction _x;
			} forEach actions;
			call twc_fnc_playerListAction;
		}, [], 1, false, false]];
		actions set [5, player addAction [" Armour List ", {
			execVM "client\playerList\armourcrew.sqf";
			{
				player removeAction _x;
			} forEach actions;
			call twc_fnc_playerListAction;
		}, [], 1, false, false]];
	};
}, [], 1, false, false]];
};
call twc_fnc_playerListAction;

player enableFatigue false;
player setCustomAimCoef 0.4;

player setUnitLoadout defaultLoadout;

player addAction ["<t color='#FF0000'>Mission Status</t>",{
	call InsP_fnc_MissionStatus;
}];

player addAction ["<t color='#0000ff'>Question Civillian</t>",{
	_civ = nearestObject [(getPos player), "C_man_1"];
	_civ call InsP_fnc_questionDisplay
},nil,1.5,true,true,"","(nearestObject [(getPos player), 'C_man_1']) distance2D (getPos player) < 4",15,false];



player addAction ["<t color='#FFFF00'>Disarm IED</t>",{
	_ied = nearestObject [(getPos player), "MineBase"];
	_trigger = _ied getVariable ["InsP_trigger", objNull];
	deleteVehicle _trigger;
	deleteVehicle _ied;
	InsP_iedDestroyed = InsP_iedDestroyed + 1;
	InsP_civTrust = InsP_civTrust + 0.1;
	publicVariable "InsP_iedDestroyed";
	publicVariable "InsP_civTrust";
	_rand = (random 5);
	if(_rand < 1)then{
		[player] remoteExecCall ["TWC_fnc_iedAttack",2];
	};
	_markerstr = createMarker [str random 10000, player];
	_markerstr setMarkerShape "ICON";
	_markerstr setMarkerType "mil_triangle";
	_markerstr setMarkerColor "ColorYellow";
	_markerstr setMarkerText "IED Defused";
	
	hint "IED Disarmed";
	
},nil,1.5,true,true,"","(nearestObject [(getPos player), 'MineBase']) distance2D (getPos player) < 3",15,false];