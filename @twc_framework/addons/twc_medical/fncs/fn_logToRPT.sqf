/*
 * Rudimentary RPT log file tool, because there's still a few odd occasions difficult to chase.
 */
#define TRACELOG(NAME,RESULT) diag_log format ["MEDICAL RPT: " + NAME + " - %1", RESULT]

params ["_caller", "_target", "_selectionName", "_className", "_items"];

TRACELOG("alive _target", alive _target);
TRACELOG("ace_medical_inReviveState", (_target getVariable ["ace_medical_inReviveState", "Error"]));
TRACELOG("ace_medical_inCardiacArrest", (_target getVariable ["ace_medical_inCardiacArrest", "Error"]));
TRACELOG("ace_medical_bloodVolume", (_target getVariable ["ace_medical_bloodVolume", "Error"]));
TRACELOG("ace_medical_heartRate", (_target getVariable ["ace_medical_heartRate", "Error"]));
TRACELOG("ace_medical_peripheralResistance", (_target getVariable ["ace_medical_peripheralResistance", "Error"]));
TRACELOG("ace_medical_epinephrine_insystem", (_target getVariable ["ace_medical_epinephrine_insystem", "Error"]));
TRACELOG("ACE_medical_lastMomentValuesSynced", (_target getVariable ["ACE_medical_lastMomentValuesSynced", "Error"]));
TRACELOG("ace_medical_reviveStartTime", (_target getVariable ["ace_medical_reviveStartTime", "Error"]));
TRACELOG("CBA_missionTime", CBA_missionTime);
TRACELOG("ACE_medical_medicClass", (_caller getVariable ["ACE_medical_medicClass", "Error"]));
TRACELOG("ACE_isUnconscious", (_target getVariable ["ACE_isUnconscious", "Error"]));
TRACELOG("twc_medical_defaultMaxTime", (missionNamespace getVariable ["twc_medical_defaultMaxTime", "Error"]));
TRACELOG("ace_medical_maxReviveTime", (missionNamespace getVariable ["ace_medical_maxReviveTime", "Error"]));