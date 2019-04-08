class Extended_PreInit_EventHandlers {
	class TWC_Unflip {
		serverInit = "call compile preprocessFileLineNumbers 'XEH_preInitServer.sqf'";
		clientInit = "call compile preprocessFileLineNumbers 'XEH_preInitClient.sqf'";
	};
};