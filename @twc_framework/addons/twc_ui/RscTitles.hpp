class RscStructuredText;
class RscTitles {
	class Default {
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 0;
	};

	class BearingDisplay {
		idd = 17555;
		onLoad = "uiNamespace setVariable ['TWC_BearingDisplay', (_this select 0)];";
		onUnload = "uiNamespace setVariable ['TWC_BearingDisplay', displayNull];";
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		duration = 10e10;
		fadeIn = 0.1;
		fadeOut = 0.1;
		name = "BearingDisplay";

		class controls {
			class BearingString: RscStructuredText {
				access = 0;
				type = 13;
				idc = 17556;
				style = 0x00;
				lineSpacing = 1;
				colorText[] = {1, 1, 1, 1};
				colorBackground[] = {0, 0, 0, 0};
				x = (safeZoneX + (safeZoneWAbs / 2)) - (0.1 / 2);
				y = (safeZoneY + safeZoneH) - 0.1;
				w = 0.1;
				h = 0.1;
				size = 0.020;
				text = "";
				font = "EtelkaMonospaceProBold";
				
				class Attributes {
					font = "EtelkaMonospaceProBold";
					color = "#FFFFFF";
					align = "center";
					valign = "middle";
					shadow = 2;
					shadowColor = "#3f4345";
					size = "2";
				};
			};
		};
	};
};