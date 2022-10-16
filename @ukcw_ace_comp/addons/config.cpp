////////////////////////////////////////////////////////////////////
//DeRap: ukcw_ace_compatability\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Feb 02 18:51:25 2022 : 'file' last modified on Thu Jan 01 02:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ukcw_ace_comp
	{
		name = "ukcw_ace_comp";
		author = "NickTG";
		requiredAddons[] = {"ukcw_milan"};
	};
};
class CfgVehicles
{
	class ukcw_milan_tripod
	{
		class ACE_CSW
		{
			enabled = 1;
			magazineLocation = "[0.1,0,0.2]";
			ammoLoadTime = 7;
			ammoUnloadTime = 7;
			desiredAmmo = 1;
		};
	};
};
class cfgMods
{
	author = "nickthegreek";
	timepacked = "1643812133";
};
