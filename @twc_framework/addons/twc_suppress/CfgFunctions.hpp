class CfgFunctions {
	class twc_suppress {
		tag = "twc_suppress";

		class init {
			file = "twc_suppress\functions";

			// AI
			class module {};
			class doSuppress {};
			class doSuppressLocal {};

			// Effects
			class fired {};
			class pinned {};
			class impact {};
			class readCache {};
		};
	};
};