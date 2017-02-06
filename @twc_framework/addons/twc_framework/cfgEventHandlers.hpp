class Extended_PostInit_EventHandlers {
    class twc_debugMarkers {
        clientInit = "execVM '\twc_framework\debug\init.sqf';"
    };
	class twc_moduleFunctions {
        clientInit = "execVM '\twc_framework\xeh_clientInit.sqf';"
    };
};