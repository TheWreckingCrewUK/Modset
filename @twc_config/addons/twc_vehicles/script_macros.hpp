// Non-Conflict Add Macros for TransportMagazine, TransportWeapon & TransportItem
#define maga_nc(a,b) class _nc_##a {magazine = a; count = b;}
#define weap_nc(a,b) class _nc_##a {weapon = a; count = b;}
#define item_nc(a,b) class _nc_##a {name = a; count = b;}

/*
	An explanation on how the macros in each era works.

	Below I include the era file, which includes all of its vehicles. This file defines a load of macros for its era. These macros define the class name, and how many magazines of it per section. Each vehicle will manipulate this number, to get their own loadout. These manipulations are also defined in that file, so the calculations can be altered across era. 
	
	For example, the following:
	
	#define MODERN_SECTION_RIFLE ["UK3CB_BAF_556_30Rnd", 24] 

	Means there should be 24 magazines for the L85 in the vehicles as standard.
	
	However, the following:
	
	#define MODERN_HEAVYMOBILITY_MOD 2
	
	Means that the total number should be modified by two (i.e. 2 times) for Mastiffs. The total number will always be rounded as well, so don't worry about defining a mod of say 1.2 to a vehicle.
*/

#define ADD_MAGA(a,b) maga_nc(__EVAL((a) select 0), __EVAL(round(((a) select 1) * b)))
#define ADD_WEAP(a,b) weap_nc(__EVAL((a) select 0), __EVAL(round(((a) select 1) * b)))
#define ADD_ITEM(a,b) item_nc(__EVAL((a) select 0), __EVAL(round(((a) select 1) * b)))