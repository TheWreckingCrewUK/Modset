class CfgPatches
{
	class twc_ww2_ships
	{
		units[] = {"twc_cargoship"};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {"A3_Functions_F_jets"};
	};
};
class CfgFunctions
{
	class twc_ww2_ships
	{
		class functions
		{
			class initship
			{
				description = "Initialises Ship";
				file = "\twc_ww2_ships\functions\fnc_initShip.sqf";
			};
			class updateShip
			{
				description = "Updates Ship";
				file = "\twc_ww2_ships\functions\fnc_updateShip.sqf";
			};
			class removeShip
			{
				description = "Removes Ship";
				file = "\twc_ww2_ships\functions\fnc_removeShip.sqf";
			};
		};
	};
};
class CfgVehicles
{
	class StaticShip;
	class HouseBase;
	class twc_cargo_back: HouseBase
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
	class twc_cargo_middle: HouseBase
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
	class twc_cargo_front: HouseBase
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

	class twc_cargoship: StaticShip
	{
		class Eventhandlers
		{
			init = "[_this select 0, true] call twc_ww2_ships_fnc_initShip;";
		};
		scope = 2;
		displayName = "Liberty Ship";
		editorSubcategory="EdSubcat_Boats";
		vehicleClass = "Ship";
		model="TWC_WW2_Ships\cargo_3_middle.p3d";
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
	};
};