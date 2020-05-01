class CfgFunctions {
	class TWC_Core {
		class functions {
			file = "twc_core\functions";
			
			/** EVENT HANDLERS **/
			class serverEventHandlers {};
			class clientEventHandlers {};
			
			/** MISC FUNCTIONALITY **/
			class soundLoop {};
			class setDirFly {};
			class canGetOutSide {};
			class getOutSide {};
			class getCargo {};
			
			/** PLAYER RELATED **/
			class isMember {};
			class isManagement {};
			class isHigherRank {};
			class isHighestRank {};
			class getTopRanks {};
			class addedToGroup {};
			class addToGroup {};
			class canAddToGroup {};
			class nameToPlayer {};
			class getPlayer {};
			class addItem {};
			class revealPlayer {};
			class initNightGear {};
			
			/** UTILITY FUNCTIONS **/
			class findGreatestDistanceWithArray {};
			class findGreatestDistancePairInArray {};
			class inString {};
			class reverseArray {};
			class floatToString {};
			class positionToString {};
			class isNightTime {};
			class objectAmbientLight {};
			class unflipVehicleQuick {};
			
			/** DEBUG TOOLS **/
			class drawBoundingBox {};
			class boundingBoxToArray {};
		};
	};
};