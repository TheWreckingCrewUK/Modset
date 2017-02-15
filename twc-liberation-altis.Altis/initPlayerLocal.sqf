#include "client\init.sqf";
townEllipsesHidden = true;

playerGarage = ["C_offRoad_01_F","C_Hatchback_01_F","C_QuadBike_01_F","C_QuadBike_01_F"];

	
actions = [];
player addAction ["<t color = '#145A32'>Get Vehicle From Garage</t>", {
	if(str playerGarage == "[]")exitWith{hint "Your Garage is Empty"};
	if (count actions == 0) then {
		_cars = playerGarage;
		{
			_cars = _cars - [_x];
			_cars pushback _x;
		}forEach playerGarage;
		actions set [0, player addAction ["<t color='#0000ff'>Close Garage</t>",{
		{
			player removeAction _x;
			} forEach actions;
			actions = [];		
		},[],1,false,false]];
		_pos = 1;
		{
			actions set [_pos, player addAction [(_x), {
				[((_this select 3)select 0)] call twc_fnc_removeFromGarage;
				((_this select 3) select 0) createVehicle (position player);
				{
					player removeAction _x;
				} forEach actions;
				actions = [];
			}, [_x], 1, false, false]];
			_pos = _pos + 1;
		}forEach _cars;
	};
},nil,1.5,true,false,"","(getPos player) distance2D (getMarkerPos 'playerBase_Garage') < 10",15,false];