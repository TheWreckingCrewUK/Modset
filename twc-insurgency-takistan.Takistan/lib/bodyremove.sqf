_restrictedMagazines = [
/*
    "rhs_30Rnd_762x39mm",
    "rhs_100Rnd_762x54mmR_green",
    "rhs_100Rnd_762x54mmR",
    "rhs_VOG25",
    "rhs_GRD40_White",
    "rhs_100Rnd_762x54mmR_green",
    "rhs_30Rnd_545x39_AK",
    "rhs_30Rnd_545x39_AK_no_tracers",
    "rhs_30Rnd_545x39_7N10_AK",
    "rhs_30Rnd_545x39_7N22_AK",
    "rhs_30Rnd_545x39_AK_green",
    "rhs_45Rnd_545X39_AK",
    "rhs_45Rnd_545X39_7N22_AK",
    "rhs_45Rnd_545X39_AK_Green",
    "rhs_10Rnd_762x54mmR_7N1"

*Commented Out as we need these weapons for Insurgency Takistan as the Ruskies
*/
];

while {true} do {
     {
         _deadBody = _x;
         {
             _deadBody removeMagazineGlobal _x;
             nil
         } count _restrictedMagazines;
	 } forEach allDead;
     sleep 1;
};
