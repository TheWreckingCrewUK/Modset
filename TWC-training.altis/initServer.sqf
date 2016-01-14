TrainingERA = "coldwar";
publicVariable "TrainingERA";
execVM "scripts\weaponLists\crates\coldwar.sqf";

sleep 3;

Trainers = [T1,T2,T3,T4,T5];
publicVariable "Trainers";


if ("B_P_BeretOff" in Containers Trainers) then {TrainingERA = "coin"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\cointrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\coin.sqf";execVM "scripts\weaponLists\crates\coin.sqf";};

if ("UK_Beret_Paras" in Containers Trainers) then {TrainingERA = "coldwar"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\coldwartrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";execVM "scripts\weaponLists\crates\coldwar.sqf";};

if ("UK3CB_BAF_G_Tactical_Black" in Containers Trainers) then {TrainingERA = "modern"; publicVariable "TrainingERA"; execVM "scripts\weaponLists\playerLoadouts\moderntrainer.sqf";execVM "scripts\weaponLists\crates\modern.sqf";execVM "scripts\weaponLists\playerLoadouts\modern.sqf";};
