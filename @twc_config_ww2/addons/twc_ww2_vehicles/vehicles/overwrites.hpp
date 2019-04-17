/** This file includes all the edits we do to the default/modded vehicles, for our reasons **/

class LIB_MKI_HADRIAN;
class LIB_HORSA_RAF;
class LIB_US_Willys_MB;
class LIB_UniversalCarrier;
class LIB_AustinK5_Tent;
class LIB_M4A3_75;
class LIB_Crusader_Mk3;
class csa38_valentineMkII;
class csa38_valentineMkII2;

class TWC_Vehicle_WW2_AustinK5_F: LIB_AustinK5_Tent {
	scope = 1;
	ADD_FACTION;
	class TextureSources
	{
		class Woodland
		{
			displayName = "Woodland";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\camo_1_co.paa","\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\camo_2_co.paa","\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\camo_3_co.paa","\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\Wheels_co.paa"};
			factions[] = {};
		};
		class Desert
		{
			displayName = "Desert";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\camo_1_desert_co.paa","\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\camo_2_desert_co.paa","\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\camo_3_desert_co.paa","\WW2\Assets_t\Vehicles\Trucks_t\DD_AustinK5\Wheels_desert_co.paa"};
			factions[] = {};
		};
	};
};

class TWC_Vehicle_WW2_Sherman_F: LIB_M4A3_75 {
	scope = 1;
	ADD_FACTION;
	class TextureSources
	{
		class Woodland
		{
			displayName = "Woodland";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Body_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Turret_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Wheels_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Tracks_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Usa_ca.paa"};
			factions[] = {};
		};
		class Desert
		{
			displayName = "Desert";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\DSM_Body_9th_QRL_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\DSM_Turret_9th_QRL_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Wheels_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Tracks_T41_co.paa",""};
			factions[] = {};
		};
		class Winter
		{
			displayName = "Winter";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Body_w_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Turret_w_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Wheels_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Tracks_co.paa"};
			factions[] = {};
		};
		class Italy
		{
			displayName = "Italy";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\DSM_Body_3rd_CLY_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\DSM_Turret_3rd_CLY_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Wheels_co.paa","\WW2\Assets_t\Vehicles\Tanks_t\IF_M4A3_75\Tracks_T41_co.paa",""};
			factions[] = {};
		};
	};
};

class TWC_Vehicle_WW2_Crusader_F: LIB_Crusader_Mk3 {
	scope = 1;
	ADD_FACTION;
	class TextureSources
	{
		class Woodland
		{
			displayName = "Woodland";
			author = "IFA3";
			textures[] = {"ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_1_olive_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_2_olive_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_3_olive_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_4_olive_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_lod5_olive_co.paa"};
			factions[] = {};
		};
		class Desert
		{
			displayName = "Desert";
			author = "IFA3";
			textures[] = {"ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_1_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_2_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_3_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_4_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\DD_Crusader_lod5_co.paa"};
			factions[] = {};
		};
		class Desert_Black
		{
			displayName = "Desert/Black";
			author = "IFA3";
			textures[] = {"ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_1_camo_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_2_camo_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_3_camo_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\dd_crusader_camo_4_co.paa","ww2\assets_t\vehicles\tanks_t\dd_crusader\DD_Crusader_lod5_camo_co.paa"};
			factions[] = {};
		};
	};
};

class TWC_Vehicle_WW2_Valentine_F: csa38_valentineMkII {
	scope = 1;
	ADD_FACTION;
	class TextureSources
	{
		class Woodland
		{
			displayName = "Woodland";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\01\valentineA_co.paa","csa38ii_tracked2\t_valentine\01\valentineB_co.paa","csa38ii_tracked2\t_valentine\01\valentineC_co.paa"};
			factions[] = {};
		};
		class Woodland_Black
		{
			displayName = "Woodland/Black";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\08\valentineA_co.paa","csa38ii_tracked2\t_valentine\08\valentineB_co.paa","csa38ii_tracked2\t_valentine\08\valentineC_co.paa"};
			factions[] = {};
		};
		class Desert
		{
			displayName = "Desert";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\valentineA_co.paa","csa38ii_tracked2\t_valentine\valentineB_co.paa","csa38ii_tracked2\t_valentine\valentinec_co.paa"};
			factions[] = {};
		};
		class Desert_Black
		{
			displayName = "Desert/Black";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\04\valentineA_co.paa","csa38ii_tracked2\t_valentine\04\valentineB_co.paa","csa38ii_tracked2\t_valentine\04\valentinec_co.paa"};
			factions[] = {};
		};
		class Desert_Blue
		{
			displayName = "Desert/Blue";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\02\valentineA_co.paa","csa38ii_tracked2\t_valentine\02\valentineB_co.paa","csa38ii_tracked2\t_valentine\02\valentinec_co.paa"};
			factions[] = {};
		};
		class Winter
		{
			displayName = "Winter";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\03\valentineA_co.paa","csa38ii_tracked2\t_valentine\03\valentineB_co.paa","csa38ii_tracked2\t_valentine\03\valentinec_co.paa"};
			factions[] = {};
		};
	};
};
class TWC_Vehicle_WW2_Valentine_Skirts_F: csa38_valentineMkII2 {
	scope = 1;
	ADD_FACTION;
	class TextureSources
	{
		class Woodland
		{
			displayName = "Woodland";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\01\valentineA_co.paa","csa38ii_tracked2\t_valentine\01\valentineB_co.paa","csa38ii_tracked2\t_valentine\01\valentineC_co.paa"};
			factions[] = {};
		};
		class Woodland_Black
		{
			displayName = "Woodland/Black";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\08\valentineA_co.paa","csa38ii_tracked2\t_valentine\08\valentineB_co.paa","csa38ii_tracked2\t_valentine\08\valentineC_co.paa"};
			factions[] = {};
		};
		class Desert
		{
			displayName = "Desert";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\valentineA_co.paa","csa38ii_tracked2\t_valentine\valentineB_co.paa","csa38ii_tracked2\t_valentine\valentinec_co.paa"};
			factions[] = {};
		};
		class Desert_Black
		{
			displayName = "Desert/Black";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\04\valentineA_co.paa","csa38ii_tracked2\t_valentine\04\valentineB_co.paa","csa38ii_tracked2\t_valentine\04\valentinec_co.paa"};
			factions[] = {};
		};
		class Desert_Blue
		{
			displayName = "Desert/Blue";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\02\valentineA_co.paa","csa38ii_tracked2\t_valentine\02\valentineB_co.paa","csa38ii_tracked2\t_valentine\02\valentinec_co.paa"};
			factions[] = {};
		};
		class Winter
		{
			displayName = "Winter";
			author = "CSA38";
			textures[] = {"csa38ii_tracked2\t_valentine\03\valentineA_co.paa","csa38ii_tracked2\t_valentine\03\valentineB_co.paa","csa38ii_tracked2\t_valentine\03\valentinec_co.paa"};
			factions[] = {};
		};
	};
};

// ACRE & ACE fixes
class TWC_Vehicle_WW2_UniversalCarrier_F: LIB_UniversalCarrier {
	scope = 1;
	ADD_FACTION;
	ace_cargo_size = 14;
	ace_cargo_canLoad = 1;
	class TextureSources
	{
		class Woodland
		{
			displayName = "Woodland";
			author = "IFA3";
			textures[] = {"WW2\Assets_t\Vehicles\Tanks_t\I44_UniversalCarrier\carrier_co.paa"};
			factions[] = {};
		};
		class Desert
		{
			displayName = "Desert";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\I44_UniversalCarrier\carrier_desert_co.paa"};
			factions[] = {};
		};
		class Winter
		{
			displayName = "Winter";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\I44_UniversalCarrier\carrier_w_co.paa"};
			factions[] = {};
		};
	};
};

class TWC_Vehicle_WW2_Willys_F: LIB_US_Willys_MB {
	scope = 1;
	ADD_FACTION;
	ace_cargo_size = 10;
	ace_cargo_canLoad = 1;
	class TextureSources
	{
		class Woodland
		{
			displayName = "Woodland";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Cars_t\IF_Willys_MB\Willys_co.paa"};
			factions[] = {};
		};
		class Desert
		{
			displayName = "Desert";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Cars_t\IF_Willys_MB\Willys_Nac_co.paa"};
			factions[] = {};
		};
		class Winter
		{
			displayName = "Winter";
			author = "IFA3";
			textures[] = {"\WW2\Assets_t\Vehicles\Cars_t\IF_Willys_MB\Willys_w_co.paa"};
			factions[] = {};
		};
	};
};

class TWC_Vehicle_WW2_Hadrian_F: LIB_MKI_HADRIAN { scope = 1; ADD_FACTION; };

class TWC_Vehicle_WW2_Hadrian_VIV_F: LIB_MKI_HADRIAN {
	scope = 1;
	displayname = "Mk I. Hadrian (Vehicle Transport)";
	ADD_FACTION;
	transportSoldier = 5;
	cargoIsCoDriver[] = {true, false, false, false, false};
	cargoAction[] = {
		"passenger_generic01_leanright",
		"passenger_generic01_leanleft",
		"passenger_mantisrear",
		"passenger_generic01_leanright",
		"passenger_generic01_foldhands"
	};
	
	ace_cargo_hasCargo = 1;
	ace_cargo_space = 16;
};

class TWC_Vehicle_WW2_Horsa_F: LIB_HORSA_RAF { scope = 1; ADD_FACTION; };