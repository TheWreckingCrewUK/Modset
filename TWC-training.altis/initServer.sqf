TrainingERA = "modern";
publicVariable "TrainingERA";
execVM "scripts\weaponLists\crates\modern.sqf";

sleep 2;

Trainers = [T1,T2,T3,T4,T5,T6,T7];
publicVariable "Trainers";


if ("B_P_BeretOff" in Containers Trainers) then {TrainingERA = "coin"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\cointrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\coin.sqf";execVM};

if ("UK_Beret_Paras" in Containers Trainers) then {TrainingERA = "coldwar"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\coldwartrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";};

if ("UK3CB_BAF_G_Tactical_Black" in Containers Trainers) then {TrainingERA = "modern"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\moderntrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\modern.sqf";};

sleep 10;

silentHint "Trainers are in charge of phase 1, listen to them and have a semi-serious attitude!";

sleep 3600;

Hint "Phase 1 has finished, Phase 2 will start in 5min";

sleep 300;

Hint "Phase 2 has started"

sleep 3600;

hint "Phase 2 has finished, Phase 3 will start in 5min";

sleep 300;

hint "Phase 3 has started"

sleep 3600;

hint "Phase 3 has finished, Training has finished. If you are required to stay more by the TRAINERS you are welcome to!";