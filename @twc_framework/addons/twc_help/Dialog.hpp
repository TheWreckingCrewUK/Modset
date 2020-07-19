#include "\a3\ui_f\hpp\definecommongrids.inc"

class RscFrame;
class RscText;
class RscButton;
class RscEdit;

class TWC_Help_Message {
	idd = -1;
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
			action = "[player, ctrlText 5554] call TWC_Help_fnc_sendMessage; closeDialog 1;";
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