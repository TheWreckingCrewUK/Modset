_veh = _this select 0;
	_caller = _this select 1;


	


			
			_pos = getPosASL _veh;
			
			if (((getPosASL _veh select 2) <50) or ((getPos _veh select 2) < 50)) then {
			
			_dir = getDir _veh;
			_newDir = _dir +90;
			
			//Get Jumper out of aircraft
			moveOut _caller;
			unassignVehicle _caller;
			_caller attachTo [_veh,[0,-20,-4],"jump_outL"]; 
			_caller setdir _newDir;
			//Move Jumper to safe location
			
			detach _caller;
			
			} else {
			
			
			_caller allowDamage false;
			
		
			if (!isNull (unitBackpack _caller)) then {
						private ["_pack","_class","_magazines","_weapons","_items"];
						_pack	   = unitBackpack _caller;
						_class	   = typeOf _pack;
						_magazines = getMagazineCargo _pack;
						_weapons   = getWeaponCargo _pack;
						_items	   = getItemCargo _pack;
						removeBackPack _caller;
						
						
						[_caller,_class,_magazines,_weapons,_items] spawn {
							private ["_caller","_class","_magazines","_weapons","_items"];
							_caller		= _this select 0;
							_class		= _this select 1;
							_magazines	= _this select 2;
							_weapons 	= _this select 3;
							_items 		= _this select 4;
								
							private "_packHolder";
							_packHolder = createVehicle ["groundWeaponHolder", [0,0,0], [], 0, "can_collide"];
							_packHolder addBackpackCargoGlobal [_class, 1];
							
							waitUntil {animationState _caller == "oh_para_pilot"};
							_lower_line = "lowering_line" createVehicle (getpos _caller);
							_lower_line attachTo [vehicle _caller,[-0.5,0,-2.5],"zamerny"];
							_packHolder attachTo [vehicle _caller,[-0.2,0.625,-3.25]]; 
							_packHolder setVectorDirAndUp [[0,0,-1],[0,1,0]];
									
							waitUntil {isTouchingGround _caller || (getPos _caller select 2) < 4};
							deleteVehicle _lower_line;
							deleteVehicle _packHolder; 
							_caller addBackpack _class; 
							clearAllItemsFromBackpack _caller; 

							for "_i" from 0 to (count (_magazines select 0) - 1) do {
								(unitBackpack _caller) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; //return the magazines
							};
							for "_i" from 0 to (count (_weapons select 0) - 1) do {
								(unitBackpack _caller) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; //return the weapons
							};
							for "_i" from 0 to (count (_items select 0) - 1) do {
								(unitBackpack _caller) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i]; //return the items
							};
						};
				};
			
			
			
		
			_caller addBackPack "B_Parachute";
			
			
			_dir = getDir _veh;
			_newDir = _dir -120;
			
			
			moveOut _caller;
			_callerMoveaway = _caller setpos [(getpos _caller select 0),(getpos _caller select 1)-20,(getpos _caller select 2)];
			_caller setdir _newDir;
			_caller attachTo [_veh,[0,-20,-4],"jump_outL"]; 
			detach _caller;
			
			_pos2 = getPosASL _caller;
			_vUp = vectorUp _caller;
			_vDir = vectorDir _caller;
			_vel = velocity _caller;
			
			
			
			sleep 1;
			_caller action ["OpenParachute",_caller];
			_caller say3D "ChuteOpen";
			
			
			_chute = vehicle _caller;
			
			_chute allowDamage false;
			_chute setVectorDirAndUp [_vDir, _vUp];
			_chute setVelocity _vel;
			_caller setVelocity _vel;
			
			waitUntil {(getPosATL _caller select 2) < 1};
			moveOut _caller;
			_pos_ground = getpos _caller;
			_caller setpos _pos_ground;
			waitUntil {isTouchingGround _caller};
			deletevehicle _chute;
			_caller allowDamage true;
		};