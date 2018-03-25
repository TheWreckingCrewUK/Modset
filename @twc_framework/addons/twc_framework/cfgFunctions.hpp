class CfgFunctions
{
	class TWC
	{
		class Functions
		{
			file="twc_framework\functions";
			class AirAssault {};
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
			class Flagchange {};
			class intelHint{};
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
			class UpdateTask{};
			class virtualMortar{};
			class toggleSpectator {};
			class grabComposition {};
			class sendCTabMessage {};
			
			class init{};
		};
		class Modules
		{
			file="twc_framework\modules";
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

			class moduleStationaryUnits{};
			class moduleVirtualArtillery{};
			class moduleUpdateTask{};
			class moduleDefend{};
			class moduleAirAssault{};
			class moduleAttackPlane{};
			class moduleCommandMessage{};
			class moduleLightsSwitch{};
			class moduleIntelHint{};
			class moduleDaisyCutter{};
			class moduleDisableCaching {};
			class moduleGrabComposition {};
			class moduleIgnoreForwardBase {};
		};
		class cache
		{
			file="twc_framework\cache";
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
		class headlessClient
		{
			file="twc_framework\headlessClient";
			class handleSpawn {};
			class hcModuleInit {};
			class rebalance {};
			class transferGroups {};
		};
		class curator
		{
			file="twc_framework\curator";
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
		class looseAmmo {
			file = "twc_framework\looseAmmo";
			class addLooseAmmoEH {};
			class looseTo303 {};
			class enfieldToBren {};
			class brenToEnfield {};
		};
	};
};