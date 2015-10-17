local _restrictedMagazines = [
    _"rhs_30Rnd_762x39mm",
    _"rhs_100Rnd_762x54mmR_green",
    _"rhs_100Rnd_762x54mmR",
    _"rhs_VOG25",
    _"rhs_GRD40_White",
    _"rhs_100Rnd_762x54mmR_green",
    _"rhs_30Rnd_545x39_AK",
    _"rhs_30Rnd_545x39_AK_no_tracers",
    _"rhs_30Rnd_545x39_7N10_AK",
    _"rhs_30Rnd_545x39_7N22_AK",
    _"rhs_30Rnd_545x39_AK_green",
    _"rhs_45Rnd_545X39_AK",
    _"rhs_45Rnd_545X39_7N22_AK",
    _"rhs_45Rnd_545X39_AK_Green",
    _"rhs_10Rnd_762x54mmR_7N1"
];

while {true} do {
     {
         local _deadBody = _x;
         {
             _deadBody removeMagazineGlobal _x;
             nil
         } count _restrictedMagazines;
	 } forEach allDead;
     sleep 1;
};
