class CfgFunctions
{
	class TWC
	{
		class Functions
		{
			file="twc_framework\functions";
			class Defend {};
			class Patrol {};
			class AirAssault {};
			class AttackPlane {};
			class AttackHelicopter{};
			class spawnIed{};
			class IEDpopulate{};
			class intelHint{};
			class Artillery{};
			class CommandMessage{};
			class LightsSwitch{};
			class Retreat{};
			class patrolRoads{};
			class placedIED{};
			class patrolMarkers{};
			class putWeaponOnBack{};
			class CreateTask{};
			class UpdateTask{};
			class daisyCutter{};
			class reconnected{};
			class createMarker{};
			class virtualMortar{};
		};
		class Modules
		{
			file="twc_framework\modules";
			class era{};
			class rollShirt{};
			class boatSafety{};
			class civilianEquipment{};
			class deadBodies{};
			class forwardBase{};
			class missionModuleInit{};
			class nightGear{};
			class run{};
			class saveGear{};
			class safeZone{};
			class stats{};
			class zeus{};
		};
		class medical
		{
			file="twc_framework\medical";
			class itemCheck {};
			class useSyrette {};
		};
		class admin
		{
			file="twc_framework\admin";
			class setSpectator {};
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

	};
};