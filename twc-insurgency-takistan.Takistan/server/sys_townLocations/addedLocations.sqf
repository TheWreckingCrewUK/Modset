_addedLocations = ["Rasman", "Zavarak", "Shamali", "Nur", "Nagara", "Gospandi", "Lalezar", "Mulladost", "Khushab", "Shukuralay", "Chaman", "Jilavur", "Zavarak", "Karachinar", "Garmarud", "Garmsar", "Timurkalay", "Feruzabad", "Ana", "Loymanara", "Chakchak", "Sultansafe", "Chardarakht"];
{
	_location = createLocation ["nameVillage",getMarkerPos _x,30,30];
	_location setText _x;
}forEach _addedLocations;