if !(hasInterface) exitWith {}; // hc need not apply

TWC_Suppress_Queue = [];
TWC_Suppress_isSuppressed = false;
TWC_Suppress_threshold = 0; // calculated in event handler
TWC_Suppress_lastShotTime = 0;
TWC_Suppress_maxThreshold = 12; // global, so can be overriden by admin console if needed for testing
TWC_Suppress_inExposedVehicle = false;
TWC_Suppress_modifier = 1; // default, postInit modifies for public setting (1 = normal, 1.25 = 25% reduced etc.)