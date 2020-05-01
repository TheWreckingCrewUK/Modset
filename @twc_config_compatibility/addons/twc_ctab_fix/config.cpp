class CfgPatches {
	class TWC_cTab_fixes {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"cTab"};
		versionDesc = "TWC cTab Fix";
		version = "2.2.2.1";
		versionStr = "2.2.2.1";
		versionAr[] = {2,2,2,1};
	};
};

class cTab_RscMapControl;
class RscTitles {
	titles[] = {};

	class cTab_mapSize_dsp {
		idd = 13673;
		onLoad = "uiNamespace setVariable ['cTab_mapSize_dsp', _this select 0]";
		fadein = 0;
		fadeout = 0;
		duration = 1e+011;
		controlsBackground[] = {};
		objects[] = {};

		class controls {
			class mapSize: cTab_RscMapControl {
				idc = 1110;
				type = 100;
				x = "safeZoneXAbs + safeZoneWAbs";
				y = "safeZoneY + safeZoneH";
				w = 0.01;
				h = 10;
				scaleMin = 0.001;
				scaleDefault = 0.001;
				maxSatelliteAlpha = 0;
				ptsPerSquareSea = 10000;
				ptsPerSquareTxt = 10000;
				ptsPerSquareCLn = 10000;
				ptsPerSquareExp = 10000;
				ptsPerSquareCost = 10000;
				ptsPerSquareFor = 10000;
				ptsPerSquareForEdge = 10000;
				ptsPerSquareRoad = 10000;
				ptsPerSquareObj = 10000;
				widthRailWay = 1;
			};
		};
	};
};

class cTab_Tablet_RscMapControl: cTab_RscMapControl {
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = "(((257))) / 2048  *  ( (safezoneH * 1.2) * 3/4) +  (safezoneX + (safezoneW -  ( (safezoneH * 1.2) * 3/4)) / 2 + ( ( (safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
	y = "(((491) + (42))) / 2048  *  (safezoneH * 1.2) +  (safezoneY + (safezoneH -  (safezoneH * 1.2)) / 2)";
	w = "(((1341))) / 2048  *  ( (safezoneH * 1.2) * 3/4)";
	h = "(((993) - (42) - (0))) / 2048  *  (safezoneH * 1.2)";
	maxSatelliteAlpha = 10000;
	alphaFadeStartScale = 10;
	alphaFadeEndScale = 10;
	ptsPerSquareSea = "8 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareTxt = "8 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareCLn = "8 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareExp = "8 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareCost = "8 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareFor = "3 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareForEdge = "100 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareRoad = "1.5 / (0.86 /  (safezoneH * 1.2))";
	ptsPerSquareObj = "4 / (0.86 /  (safezoneH * 1.2))";
	widthRailWay = 1;
};

