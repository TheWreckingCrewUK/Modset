class CfgPatches
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