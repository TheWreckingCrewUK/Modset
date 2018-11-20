/*
 * Rudimentary RPT log file tool, because there's still a few odd occasions difficult to chase.
 */
#define TRACELOG(NAME,RESULT) diag_log format ["MEDICAL RPT: " + NAME + " - %1", RESULT]

params ["_caller", "_target", "_selectionName", "_className", "_items"];

TRACELOG("alive _target", alive _target);
diag_log format ["MEDICAL RPT: ace_medical_inReviveState - %1", (_target getVariable ["ace_medical_inReviveState", "Error"])];
diag_log format ["MEDICAL RPT: ace_medical_inCardiacArrest - %1", (_target getVariable ["ace_medical_inCardiacArrest", "Error"])];
diag_log format ["MEDICAL RPT: ace_medical_bloodVolume - %1", (_target getVariable ["ace_medical_bloodVolume", "Error"])];
diag_log format ["MEDICAL RPT: ace_medical_heartRate - %1", (_target getVariable ["ace_medical_heartRate", "Error"])];
diag_log format ["MEDICAL RPT: ace_medical_peripheralResistance - %1", (_target getVariable ["ace_medical_peripheralResistance", "Error"])];
diag_log format ["MEDICAL RPT: ace_medical_epinephrine_insystem - %1", (_target getVariable ["ace_medical_epinephrine_insystem", "Error"])];
diag_log format ["MEDICAL RPT: ACE_medical_lastMomentValuesSynced - %1", (_target getVariable ["ACE_medical_lastMomentValuesSynced", "Error"])];
diag_log format ["MEDICAL RPT: ace_medical_reviveStartTime - %1", (_target getVariable ["ace_medical_reviveStartTime", "Error"])];
TRACELOG("CBA_missionTime", CBA_missionTime);
diag_log format ["MEDICAL RPT: ACE_medical_medicClass - %1", (_caller getVariable ["ACE_medical_medicClass", "Error"])];
diag_log format ["MEDICAL RPT: ACE_isUnconscious - %1", (_target getVariable ["ACE_isUnconscious", "Error"])];
diag_log format ["MEDICAL RPT: twc_medical_defaultMaxTime - %1", (missionNamespace getVariable ["twc_medical_defaultMaxTime", "Error"])];
diag_log format ["MEDICAL RPT: ace_medical_maxReviveTime - %1", (missionNamespace getVariable ["ace_medical_maxReviveTime", "Error"])];