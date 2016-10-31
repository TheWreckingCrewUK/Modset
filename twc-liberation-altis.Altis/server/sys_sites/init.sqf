//Initial Defines:

_infMarker = "n_inf";
_installationMarker =  "n_maint";
_navalMarker = "n_naval";
_smallTownMarker = "n_recon";
_airfieldMarker = "n_air";
_militaryMarker = "n_hq";
_townMarker = "c_unknown";

_installationNames = ["dump","factory","quarry","Stadium","storage","power plant","Fotia","mine"];
_smallTownNames = ["Faros","Aristi","Amfissa","Kaviridia","Eginio","Vikos","Ekali","Nifi","Agios Georgios","Nidasos","Gatolia","Cap Striglia"];
_navalNames = ["Krya Nera","Edessa","Drimea","Nychi","Agia Triada","Zeloran","Cap Zefyris","Faronaki","Livadi","Mazi","Agia Pelagia","Trachia","Surf Club","Cap Kategidis","Cap Thelos","Iraklia","Limnichori","Polemistia"];
_airfieldNames = ["AAC airfield","airbase","Terminal","Molos Airfield"];
_militaryNames = ["military"];
_stupidNames = ["Fournos","Savri","Bomos","Monisi","Cap Makrinos","Cap Drakontas","Pyrgi","Makrynisi","Sagonisi","Cap Agrios","Atsalis","Chelonisi","Limni","Ochrolimni","Almyra","Edoris","Kavala Pier","Gori","Agios Panagiotis","Agios Kosmas"];
_townNames = ["Athanos","Panochori","Neri","Kavala","Aggelochori","Negades","Zaros","Therisa","Kore","Agios Konstantinos","Oreokastro","Syrta","Agios Dionysios","Alikampos","Poliakko","Neochori","Stavros","Lakka","Galati","Abdera","Frini","Anthira","Gravia","Telos","Anthrakia","Charkia","Pyrgos","Selakano","Feres","Panagia","Chalkeia","Dorida","Kalochori","Paros","Ioannina","Sofia","Molos"];

townLocationArray = nearestLocations [[worldSize / 2, worldSize / 2], ["NameVillage","NameCity","NameCityCapital","nameLocal"], (sqrt 2 *(worldSize / 2))];
{
	call{
		if(text _x in _stupidNames)exitWith{};
		if(text _x in _townNames)exitWith{
			[getPos _x, _townMarker,"placeHolder",1] call twc_fnc_createTown;
		};
		if(text _x in _installationNames)exitWith{
			[getPos _x,_installationMarker,"placeHolder",1] call twc_fnc_createSite;
		};
		if(text _x in _smallTownNames)exitWith{
			[getPos _x,_smallTownMarker,"placeHolder",1] call twc_fnc_createSite;
		};
		if(text _x in _navalNames)exitWith{
			[getPos _x,_navalMarker,"placeHolder",1] call twc_fnc_createSite;
		};
		if(text _x in _airfieldNames)exitWith{
			[getPos _x,_airfieldMarker,"placeHolder",1] call twc_fnc_createSite;
		};
		if(text _x in _militaryNames)exitWith{
			[getPos _x,_militaryMarker,"placeHolder",1] call twc_fnc_createSite;
		};		
		[getPos _x,_infMarker,"placeHolder",1] call twc_fnc_createSite;
	};	
}forEach townLocationArray;
//Makes the townInforArray public. It is simply very convenient to do it now:
publicVariable "townInfoArray";

#include "outpost.sqf";
#include "radio.sqf";
#include "installation.sqf";