#include "defineCommonGrids.inc"

class RscFrame;
class RscText;
class RscButton;
class RscEdit;

class TWC_Help_Message {
	idd = 555666;
	movingEnable = false;
	class ControlsBackground {
		class Frame: RscFrame {
			idc = 5551;
			style = "0x50";
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 8 * GUI_GRID_H;
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class Header: RscText {
			idc = 5552;
			text = "Enter Message for Management:";
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorActive[] = {0,0,0,0.8};
		};
	};
	class Controls {
		class Button: RscButton {
			idc = 5553;
			text = "Send";
			x = 17.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorActive[] = {0,0,0,0.8};
			action = "hint (ctrlText ((findDisplay 555666) displayCtrl 5554)); [player, ctrlText ((findDisplay 555666) displayCtrl 5554)] remoteExecCall [""TWC_core_fnc_findAdmin"",2]; (findDisplay 555666) closeDisplay 1; (findDisplay 49) closeDisplay 2;";
		};
		class Message: RscEdit {
			idc = 5554;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorActive[] = {0,0,0,0.8};
		};
	};	
};