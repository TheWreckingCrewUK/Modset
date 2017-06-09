/*
Script by [TWC] jayman. Vehicle restriction through event handlers. Should cause literally like no lag
The old one by Sa-Matra relied on a while{true}do{} loop which is shitty.
*/
_specialCases = ["helo1","helo2","helo3","tank1","tank2","tank3","apache1","apache1"];
if(str player in _specialCases)then{
	if(str player == "helo1")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "I_Helo_light_03_F")then{
						
					}else{
						hint "You are a BAF Pilot. You may only fly BAF helicopters";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};


	if(str player == "helo2")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "B_Heli_Transport_01_F")then{
					
					}else{
						hint "You are a US pilot. You may only fly US helicopters";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};
	
	
	if(str player == "helo3")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "B_Heli_Transport_01_camo_F")then{
					
					}else{
						hint "You are a US pilot. You may only fly US helicopters";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};
	
	if(str player == "tank1" || str player == "tank2" || str player == "tank3")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Tank")then{
					if(typeOf (_this select 2) == "B_APC_Tracked_01_rcws_F" || typeOf (_this select 2) == "B_APC_Wheeled_01_cannon_F")then{
			
					}else{
						hint "You are the armour crew. You may only Gun,Drive,Command the armour crew vehicles";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};
	
	if(str player == "apache1" || str player == "apache2")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "B_Heli_Attack_01_F")then{
						
					}else{
						hint "You are an Attack Helicopter Pilot. You may only fly The Attack helicopter";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};
}else{
	player addEventHandler ["getInMan",{
		if((_this select 1) != "cargo")then{
			if((_this select 2) isKindOf "Tank" || (_this select 2) isKindOf "Air")then{
				if(str fullCrew [(_this select 2), "driver",false] == "[]" || driver (_this select 2) == (_this select 0))then{
					hint "You are a grunt. You may only be a passenger inhelicopters and armour";
					(_this select 0) action ["eject", (_this select 2)];
					(_this select 0) action ["getout", (_this select 2)];
				};
			};
		};
	}];
};