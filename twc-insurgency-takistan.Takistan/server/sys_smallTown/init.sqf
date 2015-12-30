twc_smallTown = compile preprocessfilelinenumbers "server\sys_smallTown\fnc_smallTown.sqf";
twc_smallTownCiv = compile preprocessfilelinenumbers "server\sys_smallTown\fnc_smallTownCiv.sqf";

execVM "server\sys_smallTown\smalltownList.sqf";
execVM "server\sys_smallTown\SmallTownListCiv.sqf";