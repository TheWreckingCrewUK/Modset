
//                           waituntil player                          \\
waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

//Compile Functions
call compile preprocessFileLineNumbers "twc_framework\functions.sqf";

//Enable Debug Markers
if (getPlayerUID player == "_SP_PLAYER_" || name player == "jayman") then {
	execvm "twc_framework\debug\init.sqf";
};

//Forward Base
_baseMakers = ["Modern_British_Platoon_Commander","Modern_British_Platoon_Sergeant","Modern_British_Coin_Platoon_Commander","Modern_British_Coin_Platoon_Sergeant","ColdWar_sergeant","1990_British_Platoon_Commander","1990_British_Platoon_Sergeant","1990_British_Platoon_Commander_Desert","1990_British_Platoon_Sergeant_Desert"];
if(typeof player in _baseMakers)then{
	execVM "twc_framework\forwardBase\init.sqf";
};