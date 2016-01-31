TrainingERA = "modern";
publicVariable "TrainingERA";
execVM "scripts\weaponLists\crates\modern.sqf";

sleep 2;

Trainers = [T1,T2,T3,T4,T5,T6,T7];
publicVariable "Trainers";


if ("B_P_BeretOff" in Containers Trainers) then {TrainingERA = "coin"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\cointrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\coin.sqf";execVM};

if ("UK_Beret_Paras" in Containers Trainers) then {TrainingERA = "coldwar"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\coldwartrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";};

if ("UK3CB_BAF_G_Tactical_Black" in Containers Trainers) then {TrainingERA = "modern"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\moderntrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\modern.sqf";};

