 private ["_message","_marker","_radius"
        ];
params ["_message"];


waitUntil {player == player};

if (typeof player == "1990_British_Platoon_Commander" || typeof player == "ColdWar_Platoon_Commander" || typeof player == "Modern_British_Platoon_Commander" || typeof player == "Modern_British_Coin_Platoon_Commander") then {
hintsilent _message;
};