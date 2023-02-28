#include "defineCommonGrids.inc"

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
			action = "[player, ctrlText 5554] remoteExecCall [""TWC_core_fnc_findAdmin"",2]; closeDialog 1;";
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
class TWC_Help_Message_Escape {
	idd = -1;
	movingEnable = false;
	class ControlsBackground{
		class Frame: RscFrame
		{
			idc = 5555;
			style = "0x50";

			x = 59.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 8 * GUI_GRID_H;
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0.5};
			colorActive[] = {0,0,0,0.5};
		};
		class Header: RscText
		{
			idc = 5556;

			text = "Enter Message for Management:";
			x = 60 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13.8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.8};
			colorActive[] = {0,0,0,0.8};
		};
	};
	class Controls {
		class Button: RscButton
		{
			idc = 5557;
			action = "hint ""Messaged Sent""; [player, ctrlText 5558] remoteExecCall [""TWC_core_fnc_findAdmin"",2]; ctrlSetText [5558,""""];";

			text = "Send";
			x = 68.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.8};
			colorActive[] = {0,0,0,0.8};
		};
		class Message: RscEdit
		{
			idc = 5558;

			x = 60 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13.8 * GUI_GRID_W;
			h = 5.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorActive[] = {0,0,0,0.8};
		};
	};
};
