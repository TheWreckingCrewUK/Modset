if (!(hasInterface) || isDedicated) exitWith {};

TWC_Suppress_Queue = [];
TWC_Suppress_isSuppressed = false;
TWC_Suppress_threshold = 0; // calculated in event handler
TWC_Suppress_lastShotTime = 0;
