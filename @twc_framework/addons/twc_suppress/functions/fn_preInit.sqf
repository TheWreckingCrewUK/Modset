if !(hasInterface) exitWith {}; // hc need not apply

TWC_Suppress_Queue = [];
TWC_Suppress_isSuppressed = false;
TWC_Suppress_threshold = 0; // calculated in event handler
TWC_Suppress_lastShotTime = 0;
TWC_Suppress_lastFlinchedTime = -301;
TWC_Suppress_lastImpactTime = -121;
TWC_Suppress_lastPinnedHBTime = 0;
TWC_Suppress_maxThreshold = 14; // global, so can be overriden by admin console if needed for testing
TWC_Suppress_inExposedVehicle = false;

IM_DIV = 15;
OH_DIV = 25;