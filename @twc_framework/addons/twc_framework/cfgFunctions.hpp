class CfgFunctions {
	class TWC {
		class functions {
			file = "twc_framework\functions";
			class AirAssault {};
			class Airborne {};
			class Artillery{};
			class AttackHelicopter{};
			class AttackPlane {};
			class BattlefieldSounds {};
			class briefingLoadout {};
			class CommandMessage{};
			class createMarker{};
			class CreateTask{};
			class daisyCutter{};
			class Defend {};
			class dummyBullets {};
			class Flagchange {};
			class intelHint{};
			class intelHintWithVariable{};
			class LightsSwitch{};
			class Patrol {};
			class patrolRoads{};
			class placedIED{};
			class putWeaponOnBack{};
			class reconnected{};
			class Retreat{};
			class spawnGroup{};
			class spawnIed{};
			class setUniform{};
			class stationaryUnits{};
			class movableUnits{};
			class UpdateTask{};
			class virtualMortar{};
			class toggleSpectator {};
			class grabComposition {};
			class sendCTabMessage {};
			class isHigherRank {};
			class GliderTakeOff {};
			class confiscateBadItems {};
			class addToGroup {};
			class silentSafety {};
			class init{};
			
			/** UTILITY FUNCTIONS **/
			class findGreatestDistanceWithArray {};
			class findGreatestDistancePairInArray {};
		};
		
		class modules {
			file = "twc_framework\modules";
			class era{};
			class rollShirt{};
			class boatSafety{};
			class civilianEquipment{};
			class deadBodies{};
			class disconnectGear{};
			class missionModuleInit{};
			class moduleDebug{};
			class nightGear{};
			class run{};
			class safeZone{};
			class zeus{};
			class moduleCreateTask;
			class moduleStationaryUnits{};
			class moduleMovableUnits{};
			class moduleVirtualArtillery{};
			class moduleArtillery{};
			class moduleUpdateTask{};
			class moduleDefend{};
			class moduleDummyBullets {};
			class moduleAirAssault{};
			class moduleAirborne {};
			class moduleAttackPlane{};
			class moduleCommandMessage{};
			class moduleLightsSwitch{};
			class moduleIntelHint{};
			class moduleIntelHintWithVariable{};
			class moduleDaisyCutter{};
			class moduleDisableCaching {};
			class moduleGrabComposition {};
			class moduleIgnoreForwardBase {};
			class moduleGliderTakeOff {};
			class moduleTriggerUncache {};
		};
		
		class cache {
			file = "twc_framework\cache";
			class aiCaching {};
			class cacheGroup {};
			class cacheModuleInit {};
			class cacheVehicle {};
			class initAICache {};
			class initVehicleCache {};
			class unCacheGroup {};
			class unCacheVehicle {};
			class vehicleCaching {};
		};
		
		class headlessClient {
			file = "twc_framework\headlessClient";
			class handleSpawn {};
			class hcModuleInit {};
			class rebalance {};
			class transferGroups {};
		};

		class curator {
			file = "twc_framework\curator";
			class healPlayer {};
			class killPlayer {};
			class setSpectator {};
			class medicalInfo {};
			class toggleCon {};
		};

		class artillery {
			file = "twc_framework\artillery";
			class moduleArtillerySpotter {};
			class moduleArtilleryPieces {};
		};
	};
};