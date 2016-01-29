waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

while { alive player } do {
	if (Player distance getmarkerpos "base" <125) then {
		if ((velocity player) select 0 > 4 ||(velocity player) select 1 > 4) then {		
		[] spawn {
			titleCut ["", "BLACK FADED", 999];
			titleText ["Don't run in base!","PLAIN"];
			titleFadeOut 3;
			
			"dynamicBlur" ppEffectEnable true;   
			"dynamicBlur" ppEffectAdjust [6];   
			"dynamicBlur" ppEffectCommit 0;     
			"dynamicBlur" ppEffectAdjust [0.0];  
			"dynamicBlur" ppEffectCommit 5;  
			titleCut ["", "BLACK IN", 5];
			};
			
			if (currentWeapon player == handgunWeapon player) then {
					player playMoveNow "AmovPpneMstpSrasWpstDnon";
				} else {
					if (currentWeapon player == "Binocular" || currentWeapon player == "Rangefinder" || currentWeapon player == "Laserdesignator") then {
						player playMoveNow "AmovPpneMstpSrasWbinDnon";
					} else {
						if (currentWeapon player == "") then {
							player playMoveNow "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon";
						} else {
							player playMoveNow "AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft";
						};
					};
				};
			};
		};
	
	
	sleep .503;
};

