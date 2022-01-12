class CfgPatches {
	class AW_Server {
		units[]={};
		weapons[]={};
		requiredVersion=2.02;
		requiredAddons[] = {};
		author = "Dom";
	};
};

class CfgFunctions {
	class AWServer {
		tag = "AW";

		class functions {
			file = "\AW_Server\Functions";
			class adjustCivRep {};
			class adjustIntel {};
			class adjustThreat {};
			class assignZeus {};
			class buildingChanged {};
			class civilianKilled {};
			class createUnit {};
			class deleteGroup {};
			class entityKilled {};
			class findAirSpawn {};
			class findSafePosition {};
			class forceCreateFactionCrew {};
			class getConfigSide {};
			class handleDisconnect {};
			class initHC {};
			class mainServerLoop {};
			class monitorSurrender {};
			class playerConnected {};
			class ropeAttach {};
			class spawnAmbientAir {};
			class spawnAmbientCiv {};
			class spawnAmbientOpfor {};
			class spawnHelicopters {};
			class spawnJet {};
			class spawnTroopCarrier {};
			class waitForTransferAndExecute {};
			class zeusLocalityChanged {};
		};

		class logistics {
			file = "\AW_Server\Logistics";
			class guerillaCrateRetrieve {};
			class logisticsCall {};
			class logisticsLoop {};
			class storeCrate {};
		};

		class save {
			file = "\AW_Server\Save";
			class addClassEventHandlers {};
			class initialSetup {};
			class loadSave {};
			class logIt {};
			class saveGame {};
			class wipeServer {};
		};

		class secondary {
			file = "\AW_Server\Secondary";
			class captureUAV {};
			class clearUXOs {};
			class fobHunt {};
			class humanitarianRelief {};
			class IEDFactory {};
			class listeningPost {};
			class protectSite {};
			class provideAid {};
			class raidSupplyDepot {};
		};

		class sectors {
			file = "\AW_Server\Sectors";
			class activateSector {};
			class callReinforcements {};
			class createSquad {};
			class createSquadInBuilding {};
			class createVehicle {};
			class getGarrisonStrength {};
			class initIEDs {};
			class initSectorPatrol {};
			class mainSectorLoop {};
			class monitorSector {};
			class setGarrisonStrength {};
			class setTower {};
			class spawnCivs {};
			class spawnGuerillas {};
			class spawnTower {};
			class towerDestroyed {};
			class updateGarrisonStrength {};
		};

		class sideMissions {
			file = "\AW_Server\SideMissions";
			class fobAssault {};
			class logisticsAmbush {};
			class repairSector {};
			class sectorCounterAttack {};
		};
	};
};