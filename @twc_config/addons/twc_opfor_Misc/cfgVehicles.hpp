class CfgVehicles {
	// Time saving MACROs - NC = Non-Conflict
	#define maga_nc(a,b) class _nc_##a {magazine = a; count = b;}
	#define weap_nc(a,b) class _nc_##a {weapon = a; count = b;}
	#define item_nc(a,b) class _nc_##a {name = a; count = b;}
	
	#include "headgearRandomization.hpp"

	#include "vehicles\backpacks.hpp"
	class EventHandlers;
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	class I_Soldier_base_F;
	class I_G_Soldier_base_F;
	
	#include "units\iraq.hpp"
	#include "units\african.hpp"
	
	/* UNITS - INDIVIDUAL DEFINES */
	#include "units\ira.hpp"	
	#include "units\takistan.hpp"
	#include "units\usa_1970.hpp"
	#include "units\pirates.hpp"
//	#include "units\piratesOld.hpp"
	#include "units\WaPArmy_Taviana.hpp"
	#include "units\aden.hpp"
	#include "units\argentina_1980.hpp"
};