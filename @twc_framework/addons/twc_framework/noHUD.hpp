class DefaultVehicleSystemsDisplayManagerLeft
{
	componentType = "VehicleSystemsDisplayManager"; //mandatory
	forcedDisplay = "EmptyDisplay";
	left = 1;
	right = 0;

	class Components
	{
		class SlingLoadDisplay { componentType = "EmptyDisplayComponent"; };
		class SensorsDisplay { componentType = "EmptyDisplayComponent"; };
		class UAVFeedDisplay { componentType = "EmptyDisplayComponent"; };
		class VehicleDriverDisplay { componentType = "EmptyDisplayComponent"; };
		class VehicleGunnerDisplay { componentType = "EmptyDisplayComponent"; };
		class VehicleCommanderDisplay { componentType = "EmptyDisplayComponent"; };
		class MissileDisplay { componentType = "EmptyDisplayComponent"; };
		class MinimapDisplay { componentType = "EmptyDisplayComponent"; };
		class CrewDisplay { componentType = "EmptyDisplayComponent"; };
		class EmptyDisplay { componentType = "EmptyDisplayComponent"; };
	};
};

class DefaultVehicleSystemsDisplayManagerRight
{
	componentType = "VehicleSystemsDisplayManager";
	forcedDisplay = "EmptyDisplay";
	left = 0;
	right = 1;

	class Components
	{
		class SlingLoadDisplay { componentType = "EmptyDisplayComponent"; };
		class SensorsDisplay { componentType = "EmptyDisplayComponent"; };
		class UAVFeedDisplay { componentType = "EmptyDisplayComponent"; };
		class VehicleDriverDisplay { componentType = "EmptyDisplayComponent"; };
		class VehicleGunnerDisplay { componentType = "EmptyDisplayComponent"; };
		class VehicleCommanderDisplay { componentType = "EmptyDisplayComponent"; };
		class MissileDisplay { componentType = "EmptyDisplayComponent"; };
		class MinimapDisplay { componentType = "EmptyDisplayComponent"; };
		class CrewDisplay { componentType = "EmptyDisplayComponent"; };
		class EmptyDisplay { componentType = "EmptyDisplayComponent"; };
	};
};
