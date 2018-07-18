class CfgPatches
{
	class Warship
		{
			units[] = {"twc_cargoship"};
			weapons[] = {};
			requiredVersion = 1.62;
			requiredAddons[] = {"CUP_WaterVehicles_Core"};
		};
};
class CfgVehicles
{
	class All{};
	class AllVehicles: All{};
	class Ship: AllVehicles {};
	class Boat: Ship
	{
		class NewTurret;
		class Turrets;
		class ViewOptics;
	};
	class RHIB: Boat {};
	class Uboat: Boat {};
	class StaticShip;
	class CUP_StaticShip : StaticShip
	{
		class Eventhandlers;
	};
	class HouseBase;
	class CUP_ShipPart: HouseBase
	{
		class Eventhandlers;
	};
	class twc_cargo_back: CUP_ShipPart
	{
			scope = 1;
			displayname = "";
			scopecurator = 0;
			author="Anschluss";
			model="\TWC_WW2_Ships\cargo_3_back.p3d";
			destrType=0;
			featureSize = 100;
			keephorizontalplacement = 1;
			numberofdoors = 0;
	};
	class twc_cargo_middle: CUP_ShipPart
	{
			scope = 1;
			displayname = "";
			scopecurator = 0;
			author="Anschluss";
			model="\TWC_WW2_Ships\cargo_3_middle.p3d";
			destrType=0;
			featureSize = 100;
			keephorizontalplacement = 1;
			numberofdoors = 0;
	};
	class twc_cargo_front: CUP_ShipPart
	{
			scope = 1;
			displayname = "";
			scopecurator = 0;
			author="Anschluss";
			model="\TWC_WW2_Ships\cargo_3_front.p3d";
			destrType=0;
			featureSize = 100;
			keephorizontalplacement = 1;
			numberofdoors = 0;
	};

	class twc_cargoship: CUP_StaticShip
	{
		scope = 2;
		displayName = "Liberty Ship";
		editorSubcategory="EdSubcat_Boats";
		vehicleClass = "Ship";
		model="TWC_WW2_Ships\cargo_3_middle.p3d";
		//model="\CUP\WaterVehicles\CUP_WaterVehicles_LHD\CUP_LHD_select_B.p3d";
		picture = "\CUP\WaterVehicles\CUP_WaterVehicles_LHD\data\UI\Picture_LHD_CA.paa";
		icon = "\CUP\WaterVehicles\CUP_WaterVehicles_LHD\data\UI\Icon_LHD_CA.paa";
		mapsize = 250;
		featureSize = 100;
		scopecurator = 2;
		cargoGetInAction[] = {"GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium"};
		getInAction = "GetInMedium";
		getInRadius = 20;
		getOutAction = "GetOutMedium";
		memoryPointsGetInCargo = "pos cargo";		/// on what memory points should the cargo get in the boat
		memoryPointsGetInCargoDir = "pos cargo dir"; /// what is the direction of the cargo facing during get in animation (and opposite for get out)
		transportSoldier = 40;
		shipParts[] = {twc_cargo_front, twc_cargo_middle, twc_cargo_back};
		class Attributes
		{
			class weapons
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Remove Weapons";
				expression="_this setVariable ['CUP_WaterVehicles_removeShipWeapons',_value];[_this] call CUP_fnc_removeShipWeapons;";
				property="weapons";
			};
			
			class lights
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Remove Interior Lights";
				expression="_this setVariable ['CUP_WaterVehicles_removeShipLights',_value];[_this] call CUP_fnc_removeShipLights;";
				property="lights";
			};
		};
	};
};