_addedLocations = ["Kallista", "Farhannah", "Coal mine", "Coal mine", "Binnaz", "Afaf", "Temirah", "Asra", "Khaatir", "Usaimah", "Dimah", "Salimah",  "Labibah", "Derya", "Wahbiyah", "Dilshad", "Dahab", "Elmas", "Rufaidah", "Jabirah", "Ishfaq", "Coal mine", "Ahlam", "Futun", "Efsane", "Ghufran", "Ghazal", "I'timad", "Kifah", "Yafiah", "Bahijah", "Adawiyah", "Najiba", "Power Plant", "Johari", "Bushra", "Marzuqah", "Jalilah", "Karida Dam", "Kezban", "Ghadir", "Durrishahwar", "Rafi'ah", "Zaleekah Fields", "Zaleekah", "Hadassah", "Faaria", "Husna", "Sa´diyah", "Wadi'ah", "Yaprak"];

{
	_location = createLocation ["nameVillage",getMarkerPos _x,30,30];
	_location setText _x;
}forEach _addedLocations;