//Defines all functions on the server

//Set Setup Defines:
twc_siteSetup = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_siteSetup.sqf";

twc_siteDeciding = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_siteDeciding.sqf";

twc_siteCapturedRedfor = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_siteCapturedRedfor.sqf";
twc_siteCapturedBlufor = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_siteCapturedBlufor.sqf";
twc_siteContested = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_siteContested.sqf";
twc_attackFailed = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_attackFailed.sqf";


twc_redforAttackMotorized = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_redforAttackMotorized.sqf";
twc_redforAttackMechanized = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_redforAttackMechanized.sqf";
twc_redforAttackAirborne = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_redforAttackMechanized.sqf";
twc_redforSiteRecapAttempt = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_redforSiteRecapAttempt.sqf";
twc_siteContestedCounter = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_siteContestedCounter.sqf";

twc_airAssault = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_airassault.sqf";

twc_aa = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_aa.sqf";
twc_hamlet = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_hamlet.sqf";
twc_mech = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_mech.sqf";
twc_radar = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_radar.sqf";
twc_tank = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_tank.sqf";
twc_town = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_town.sqf";
twc_village = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_village.sqf";

twc_mortarAttack = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_mortarAttack.sqf";

//Hostile Attacks
twc_attackDeciding = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_attackDeciding.sqf";
twc_attackHelo = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_attackHelo.sqf";
twc_attackInf = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_attackInf.sqf";

//Hostile Logistics Define:
twc_basicLogistics = compile preprocessfilelinenumbers "server\logistics\func\fnc_basicLogistics.sqf";
twc_constantLogistics = compile preprocessfilelinenumbers "server\logistics\func\fnc_constantLogistics.sqf";

//Hostile Patrols
twc_patrols = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_patrols.sqf";
twc_redforMotorizedPatrol = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_redforMotorizedPatrol.sqf";
twc_redforInfantryPatrol = compile preprocessfilelinenumbers "server\siteSetup\func\fnc_redforInfantryPatrol.sqf";