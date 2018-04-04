class twc_inventoryrecords_UI {
	idd = 69299;
	movingEnabled = false;
	onLoad = "";
	onUnload = "";
	
	class controlsBackground {
		class twc_inventoryrecords_background: IGUIBack {
			idc = 2200;
			text = "";
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 39 * GUI_GRID_W;
			h = 17.5 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.3};
		};
	};
	
	class controls {
		class twc_inventoryrecords_title: RscText {
			idc = 1001;
			text = "PLACEHOLDER TITLE: ERROR IF YOU SEE THIS - Inventory Records";
			x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 33 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.75};
		};

		class twc_inventoryrecords_cancel: RscButtonMenuCancel {
			text = "Cancel";
			x = 35 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class twc_inventoryrecords_log: RscListbox {
			idc = 1500;
			x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 38 * GUI_GRID_W;
			h = 15 * GUI_GRID_H;
		};
	};
};