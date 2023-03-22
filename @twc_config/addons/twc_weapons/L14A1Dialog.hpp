#include "DialogDefines.hpp"

class L14A1Dialog {
	idd = 144284;
	MovingEnable = 0;
	onUnload = "_this call TWC_Weapons_fnc_unloadFuzeMenu;";
	onLoad = "_this call TWC_Weapons_fnc_loadFuzeMenu;";
	controlsBackground[] = {L14A1Background};
	objects[] = {};
	class L14A1Background {
		type = CT_STATIC;
		idc = 99999;
		style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {1, 1, 1, 1};
		font = FontM;
		sizeEx = 0.04;
		
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.55 * safezoneH;
		
		text = "";
	};
	class controls {
		class FuzeBackground {
			type = CT_STATIC;
			idc = 421;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			font = FontM;
			sizeEx = 0.04;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			text = "\TWC_Weapons\data\l14a1_fuzes\200.paa";
		};
		class FuzeKnob {
			idc = 422;
			
			type = CT_BUTTON;
			style = ST_CENTER + ST_KEEP_ASPECT_RATIO;
			
			sizeEx = 0.0325;
			offsetX = 0;
			offsetY = 0.002;
			offsetPressedX = 0;
			offsetPressedY = 0.002;
			borderSize = 0;
			
			colorText[] = {0, 0, 0, 0};
			colorDisabled[] = {0, 0, 0, 0};
			font = FontM;
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {0, 0, 0, 0};
			colorFocused[] = {0, 0, 0, 0};
			colorShadow[] = {0, 0, 0, 0};
			colorBorder[] = {0, 0, 0, 0};
			
			soundEnter[] = {"", 0.2, 1};
			soundPush[] = {"", 0.2, 1};
			soundClick[] = {"", 0.2, 1};
			soundEscape[] = {"", 0.2, 1};
			
			default = 0;
			action = "";
			
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
			text = "";
			onMouseButtonUp = "_this call TWC_Weapons_fnc_changeFuze";
			toolTip = "Change Fuze";
		};
	};
};