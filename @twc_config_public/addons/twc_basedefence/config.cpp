/*
 * Author: [TWC] Hobbs
 * Descri: Mortar defence system & 
 */
class CfgPatches {
	class TWC_Public_Siren {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"ace_interaction"};
		author[] = {""};
		authorUrl = "";
	};
};

class CfgFunctions {
	class TWC {
		class idf_Functions {
			file = "\twc_basedefence\functions";

			class init {
				postInit = 1;
			};
		};
	};
};

class CfgVehicles {
	class staticweapon;
	class staticmortar: staticweapon {

		class EventHandlers {
			fired = "[(_this select 0), (_this select 6)] call twc_fnc_idf";
		};
	};
};

class CfgSounds {
	sounds[] = {TWC_sound_idfsiren, TWC_sound_idfclear, TWC_sound_infsiren};

	class TWC_sound_idfsiren {
		name = "TWC_sound_idfsiren";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\idfalarm.wav", db+5, 1, 200};
		titles[] = {0, ""};
	};
	
	class TWC_sound_allclearvoice {
		name = "TWC_sound_allclearvoice";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\allclearvoice.wav", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
	class TWC_sound_contactvoice {
		name = "TWC_sound_contactvoice";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\contactvoice.wav", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
	class TWC_sound_incomingvoice1 {
		name = "TWC_sound_incomingvoice1";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\incomingvoice1.wav", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
	class TWC_sound_incomingvoice2 {
		name = "TWC_sound_incomingvoice2";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\incomingvoice2.wav", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
	class TWC_sound_incomingvoice3 {
		name = "TWC_sound_incomingvoice3";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\incomingvoice3.ogg", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
	class TWC_sound_standtovoice {
		name = "TWC_sound_standtovoice";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\standtovoice.wav", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
	class TWC_sound_idfclear {
		name = "TWC_sound_idfclear";
		sound[] = {"\twc_basedefence\sounds\idfclear.wav", db+5, 1, 200};
		titles[] = {0, ""};
	};
	
		class TWC_sound_infsiren {
		name = "TWC_sound_idfsiren";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\infalarm.ogg", db+5, 1, 200};
		titles[] = {0, ""};
	};
	
		class TWC_sound_down01 {
		name = "TWC_sound_down01";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\down01.ogg", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
		class TWC_sound_down02 {
		name = "TWC_sound_down02";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\down02.ogg", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
		class TWC_sound_down03 {
		name = "TWC_sound_down03";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\down03.ogg", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
		class TWC_sound_down04 {
		name = "TWC_sound_down04";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\down04.ogg", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
		class TWC_sound_down05 {
		name = "TWC_sound_down05";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\down05.ogg", db+25, 1, 400};
		titles[] = {0, ""};
	};
	
		class TWC_sound_down06 {
		name = "TWC_sound_down06";
		// filename, volume, pitch, distance
		sound[] = {"\twc_basedefence\sounds\down06.ogg", db+25, 1, 400};
		titles[] = {0, ""};
	};
};