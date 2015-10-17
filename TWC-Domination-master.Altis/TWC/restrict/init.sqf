// Restriction init

[] spawn compile preprocessFileLineNumbers "TWC\restrict\base.sqf";
[] spawn compile preprocessFileLineNumbers "TWC\restrict\pilot.sqf";
[] spawn compile preprocessFileLineNumbers "TWC\restrict\Radio.sqf";
nul = execVM "TWC\restrict\EnemyWeapons.sqf";
