/*
Script by [TWC] jayman. Vehicle restriction through event handlers. Should cause literally like no lag
The old one by Sa-Matra relied on a while{true}do{} loop which is shitty.
*/
_specialCases = ["helo1","helo2","helo3","helo4","apache1","apache2","tank1","tank2","tank3","jet1", "jet2"];
if(str player in _specialCases)then{
	if(str player == "helo1" || str player == "helo2")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "UK3CB_BAF_Wildcat_AH1_CAS_8A" || typeOf (_this select 2) == "CUP_B_CH47F_GB" || typeOf (_this select 2) == "UK3CB_BAF_Merlin_HC3_32"|| typeOf (_this select 2) == "UK3CB_BAF_Merlin_HC3_CSAR"|| typeOf (_this select 2) == "RHS_CH_47F_light" || typeOf (_this select 2) == "CUP_B_C130J_GB" || typeOf (_this select 2) == "CUP_B_C130J_CARGO_GB")then{
						
					}else{
						hint "You are a BAF Pilot. You may only fly the following aircrafts: Wildcat, Merlin, Chinook, C130";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};


	if(str player == "helo3" || str player == "helo4")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "RHS_UH60M_D" || typeOf (_this select 2) == "RHS_CH_47F_light" || typeOf (_this select 2) == "rhsusf_CH53E_USMC_D" || typeOf (_this select 2) == "RHS_UH1Y_d_GS" || typeOf (_this select 2) == "CUP_B_C130J_GB" || typeOf (_this select 2) == "CUP_B_C130J_CARGO_GB" || typeOf (_this select 2) == "CUP_B_MV22_USMC" )then{
			
					}else{
						hint "You are a US pilot. You may only fly the following aircrafts: Venom, Blackhawk, Chinook, Osprey";
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
					if(typeOf (_this select 2) == "UK3CB_BAF_Apache_AH1_CAS")then{
			
					}else{
						hint "You are an Apache Pilot/Gunner. You may only fly/gun the Apache";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};
		if(str player == "jet1")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "CUP_B_GR9_CAP_GB")then{
			
					}else{
						hint "You are a BAF Attack Jet Pilot. You may only the following aircrafts: Harrier";
						(_this select 0) action ["eject", (_this select 2)];
						(_this select 0) action ["getout", (_this select 2)];
					};
				};
			};
		}];
	};
	
	if(str player == "jet2")then{
		player addEventHandler ["getInMan",{
			if((_this select 1) != "cargo")then{
				if((_this select 2) isKindOf "Air")then{
					if(typeOf (_this select 2) == "RHS_A10")then{
			
					}else{
						hint "You are a US Attack Jet Pilot. You may only the following aircrafts: A-10";
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
					if(typeOf (_this select 2) == "CUP_B_FV510_GB_D_SLAT" || typeOf (_this select 2) == "CUP_B_Challenger2_2CD_BAF")then{
			
					}else{
						hint "You are the armour crew. You may only Gun,Drive,Command the armour crew vehicle";
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
				if(typeOf (_this select 2) == "CUP_B_FV432_Bulldog_GB_D")then{
				
				}else{
					hint "You are a grunt. You may only be a passenger in helicopters and armour";
					(_this select 0) action ["eject", (_this select 2)];
					(_this select 0) action ["getout", (_this select 2)];
				};
			};
		};
	}];
};