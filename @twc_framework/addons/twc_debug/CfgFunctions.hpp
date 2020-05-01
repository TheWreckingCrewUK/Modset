class CfgFunctions {
	class TWC_Debug {
		class functions {
			file = "TWC_Debug\functions";

			/** INIT **/
			class init {};
			class settings {};

			/** PUBLIC FUNCTIONS **/
			class log {};
			class logGlobal {};
			class hint {};
			class hintGlobal {};
			class systemChatGlobal {};
			// class marker {}; // TODO

			/** UTIL **/
			class shouldDebug {}; // determine we're not in a "play" session, aka less than 4 people online
		};
	};
};