if(!isDedicated) then {
	[] spawn {
		private ["_cargoHelisWithActions","_nearCargoHelis","_action","_cargoHelisNotNearbyWithActions"];
		_cargoHelisWithActions = [];

		while {true} do {
			_nearCargoHelis = call twc_ropes_fnc_findNearbyCargoHeli;
			
			{
				if !(_x in _cargoHelisWithActions) then {
					_action = player addAction ["Pick Up Cargo Ropes", {
						[[_this select 3, player],"twc_ropes_fnc_pickUpRopes",_this select 3,false,true] spawn BIS_fnc_MP
					}, _x, 0, false, true, "", "call twc_ropes_fnc_canPickupRope"];
					_x setVariable ["TWC_Rope_Pickup_Action", _action];
					
					_action = player addAction ["Drop Cargo Ropes", { 
						[[_this select 3, player],"twc_ropes_fnc_dropRopes",_this select 3,false,true] spawn BIS_fnc_MP
					}, _x, 0, false, true, "", "call twc_ropes_fnc_canDropRope"];
					_x setVariable ["TWC_Rope_Drop_Action", _action];

					_action = player addAction ["Attach Cargo Ropes", {
						[[_this select 3, player, cursorTarget],"twc_ropes_fnc_attachRopes",_this select 3,false,true] spawn BIS_fnc_MP
					}, _x, 0, false, true, "", "call twc_ropes_fnc_canAttachRope"];
					_x setVariable ["TWC_Rope_Attach_Action", _action];
				};
			} forEach _nearCargoHelis;
			
			_cargoHelisNotNearbyWithActions = _cargoHelisWithActions - _nearCargoHelis;
			
			{
				player removeAction (_x getVariable "TWC_Rope_Pickup_Action");
				player removeAction (_x getVariable "TWC_Rope_Drop_Action");
				player removeAction (_x getVariable "TWC_Rope_Attach_Action");
			} forEach _cargoHelisNotNearbyWithActions;
			
			_cargoHelisWithActions = _nearCargoHelis;
			sleep 2;
		};
	};
};