class DefaultVehicleSystemsDisplayManagerLeft
{
	componentType = "VehicleSystemsDisplayManager"; //mandatory
	x = (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40));
	y = (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
	left = 1;
	forcedDisplay = "EmptyDisplay";

	class Components
	{
		class MinimapDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		
		class CrewDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
	};
};

class DefaultVehicleSystemsDisplayManagerRight
{
	x = ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)));
	left = 0;
	right = 1;
	forcedDisplay = "EmptyDisplay";

	class Components
	{
		class MinimapDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		
		class CrewDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
	};
};
