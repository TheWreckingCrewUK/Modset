/* Created by [TWC] jayman
*
* Randomizes the cqb Range Targets
*
* Im going to apologize now, but I couldn't think of an easier way. This works perfectly, but sucked to set up
*/
_placement1 = ["cqbtarget1a","cqbtarget1b","cqbtarget1c","cqbtarget1d"] call BIS_fnc_selectRandom;
switch (_placement1) do {
	case "cqbtarget1a":{cqb1 setDir 45; cqb1 setpos (getMarkerpos "cqbtarget1a")};
	case "cqbtarget1b":{cqb1 setDir 315; cqb1 setPos (getMarkerPos "cqbtarget1b")};
	case "cqbtarget1c":{cqb1 setDir 225; cqb1 setPos (getMarkerPos "cqbtarget1c")};
	case "cqbtarget1d":{cqb1 setDir 135; cqb1 setPos (getMarkerPos "cqbtarget1d")};
};
_placement2 = ["cqbtarget2a","cqbtarget2b","cqbtarget2c","cqbtarget2d"] call BIS_fnc_selectRandom;
switch (_placement2) do {
	case "cqbtarget2a":{cqb2 setDir 0; cqb2 setpos (getMarkerpos "cqbtarget2a")};
	case "cqbtarget2b":{cqb2 setDir 0; cqb2 setPos (getMarkerPos "cqbtarget2b")};
	case "cqbtarget2c":{cqb2 setDir 90; cqb2 setPos (getMarkerPos "cqbtarget2c")};
	case "cqbtarget2d":{cqb2 setDir 270; cqb2 setPos (getMarkerPos "cqbtarget2d")};
};
_placement3 = ["cqbtarget3a","cqbtarget3b","cqbtarget3c","cqbtarget3d"] call BIS_fnc_selectRandom;
switch (_placement3) do {
	case "cqbtarget3a":{cqb3 setDir 45; cqb3 setpos (getMarkerpos "cqbtarget3a")};
	case "cqbtarget3b":{cqb3 setDir 315; cqb3 setPos (getMarkerPos "cqbtarget3b")};
	case "cqbtarget3c":{cqb3 setDir 270; cqb3 setPos (getMarkerPos "cqbtarget3c")};
	case "cqbtarget3d":{cqb3 setDir 90; cqb3 setPos (getMarkerPos "cqbtarget3d")};
};
_placement4 = ["cqbtarget4a","cqbtarget4b","cqbtarget4c","cqbtarget4d"] call BIS_fnc_selectRandom;
switch (_placement4) do {
	case "cqbtarget4a":{cqb4 setDir 45; cqb4 setpos (getMarkerpos "cqbtarget4a")};
	case "cqbtarget4b":{cqb4 setDir 315; cqb4 setPos (getMarkerPos "cqbtarget4b")};
	case "cqbtarget4C":{cqb4 setDir 0; cqb4 setPos (getMarkerPos "cqbtarget4c")};
	case "cqbtarget4d":{cqb4 setPos (getMarkerPos "cqbtarget4d")};
};
_placement5 = ["cqbtarget5a","cqbtarget5b","cqbtarget5c","cqbtarget5d"] call BIS_fnc_selectRandom;
switch (_placement5) do {
	case "cqbtarget5a":{cqb5 setDir 45; cqb5 setpos (getMarkerpos "cqbtarget5a")};
	case "cqbtarget5b":{cqb5 setDir 315; cqb5 setPos (getMarkerPos "cqbtarget5b")};
	case "cqbtarget5c":{cqb5 setDir 225; cqb5 setPos (getMarkerPos "cqbtarget5c")};
	case "cqbtarget5d":{cqb5 setDir 135; cqb5 setPos (getMarkerPos "cqbtarget5d")};
};
_placement6 = ["cqbtarget6a","cqbtarget6b"] call BIS_fnc_selectRandom;
switch (_placement6) do {
	case "cqbtarget6a":{cqb6 setDir 180; cqb6 setpos (getMarkerpos "cqbtarget6a")};
	case "cqbtarget6b":{cqb6 setDir 0; cqb6 setPos (getMarkerPos "cqbtarget6b")};
};
_placement7 = ["cqbtarget7a","cqbtarget7b","cqbtarget7c","cqbtarget7d"] call BIS_fnc_selectRandom;
switch (_placement7) do {
	case "cqbtarget7a":{cqb7 setDir 45; cqb7 setpos (getMarkerpos "cqbtarget7a")};
	case "cqbtarget7b":{cqb7 setDir 135; cqb7 setPos (getMarkerPos "cqbtarget7b")};
	case "cqbtarget7c":{cqb7 setDir 0; cqb7 setPos (getMarkerPos "cqbtarget7c")};
	case "cqbtarget7d":{cqb7 setDir 270; cqb7 setPos (getMarkerPos "cqbtarget7d")};
};
_placement8 = ["cqbtarget8a","cqbtarget8b","cqbtarget8c","cqbtarget8d"] call BIS_fnc_selectRandom;
switch (_placement8) do {
	case "cqbtarget8a":{cqb8 setDir 45; cqb8 setpos (getMarkerpos "cqbtarget8a")};
	case "cqbtarget8b":{cqb8 setDir 0; cqb8 setPos (getMarkerPos "cqbtarget8b")};
	case "cqbtarget8c":{cqb8 setDir 180; cqb8 setPos (getMarkerPos "cqbtarget8c")};
	case "cqbtarget8d":{cqb8 setDir 135; cqb8 setPos (getMarkerPos "cqbtarget8d")};
};
_placement9 = ["cqbtarget9a","cqbtarget9b"] call BIS_fnc_selectRandom;
switch (_placement9) do {
	case "cqbtarget9a":{cqb9 setDir 270; cqb9 setpos (getMarkerpos "cqbtarget9a")};
	case "cqbtarget9b":{cqb9 setDir 0; cqb9 setPos (getMarkerPos "cqbtarget9b")};
};
_placement10 = ["cqbtarget10a","cqbtarget10b","cqbtarget10c","cqbtarget10d"] call BIS_fnc_selectRandom;
switch (_placement10) do {
	case "cqbtarget10a":{cqb10 setDir 45; cqb10 setpos (getMarkerpos "cqbtarget10a")};
	case "cqbtarget10b":{cqb10 setDir 315; cqb10 setPos (getMarkerPos "cqbtarget10b")};
	case "cqbtarget10c":{cqb10 setDir 225; cqb10 setPos (getMarkerPos "cqbtarget10c")};
	case "cqbtarget1d0":{cqb10 setDir 135; cqb10 setPos (getMarkerPos "cqbtarget1d0")};
};
_placement11 = ["cqbtarget11a","cqbtarget11b"] call BIS_fnc_selectRandom;
switch (_placement11) do {
	case "cqbtarget11a":{cqb11 setDir 0; cqb11 setpos (getMarkerpos "cqbtarget11a")};
	case "cqbtarget11b":{cqb11 setDir 180; cqb11 setPos (getMarkerPos "cqbtarget11b")};
};
_placement12 = ["cqbtarget12a","cqbtarget12b","cqbtarget12c","cqbtarget12d"] call BIS_fnc_selectRandom;
switch (_placement12) do {
	case "cqbtarget12a":{cqb12 setDir 45; cqb12 setpos (getMarkerpos "cqbtarget12a")};
	case "cqbtarget12b":{cqb12 setDir 315; cqb12 setPos (getMarkerPos "cqbtarget12b")};
	case "cqbtarget12c":{cqb12 setDir 225; cqb12 setPos (getMarkerPos "cqbtarget12c")};
	case "cqbtarget12d":{cqb12 setDir 135; cqb12 setPos (getMarkerPos "cqbtarget12d")};
};
_placement13 = ["cqbtarget13a","cqbtarget13b","cqbtarget13c","cqbtarget13d"] call BIS_fnc_selectRandom;
switch (_placement13) do {
	case "cqbtarget13a":{cqb13 setDir 45; cqb13 setpos (getMarkerpos "cqbtarget13a")};
	case "cqbtarget13b":{cqb13 setDir 315; cqb13 setPos (getMarkerPos "cqbtarget13b")};
	case "cqbtarget13c":{cqb13 setDir 225; cqb13 setPos (getMarkerPos "cqbtarget13c")};
	case "cqbtarget13d":{cqb13 setDir 135; cqb13 setPos (getMarkerPos "cqbtarget13d")};
};
_placement14 = ["cqbtarget14a","cqbtarget14b","cqbtarget14c","cqbtarget14d"] call BIS_fnc_selectRandom;
switch (_placement14) do {
	case "cqbtarget14a":{cqb14 setDir 45; cqb14 setpos (getMarkerpos "cqbtarget14a")};
	case "cqbtarget14b":{cqb14 setDir 315; cqb14 setPos (getMarkerPos "cqbtarget14b")};
	case "cqbtarget14c":{cqb14 setDir 225; cqb14 setPos (getMarkerPos "cqbtarget14c")};
	case "cqbtarget14d":{cqb14 setDir 135; cqb14 setPos (getMarkerPos "cqbtarget14d")};
};
_placement15 = ["cqbtarget15a","cqbtarget15b","cqbtarget15c","cqbtarget15d"] call BIS_fnc_selectRandom;
switch (_placement15) do {
	case "cqbtarget15a":{cqb15 setDir 45; cqb15 setpos (getMarkerpos "cqbtarget15a")};
	case "cqbtarget15b":{cqb15 setDir 0; cqb15 setPos (getMarkerPos "cqbtarget15b")};
	case "cqbtarget15c":{cqb15 setDir 225; cqb15 setPos (getMarkerPos "cqbtarget15c")};
	case "cqbtarget15d":{cqb15 setDir 135; cqb15 setPos (getMarkerPos "cqbtarget15d")};
};
_placement16 = ["cqbtarget16a","cqbtarget16b","cqbtarget16c","cqbtarget16d"] call BIS_fnc_selectRandom;
switch (_placement16) do {
	case "cqbtarget16a":{cqb16 setDir 45; cqb16 setpos (getMarkerpos "cqbtarget16a")};
	case "cqbtarget16b":{cqb16 setDir 0; cqb16 setPos (getMarkerPos "cqbtarget16b")};
	case "cqbtarget16c":{cqb16 setDir 225; cqb16 setPos (getMarkerPos "cqbtarget16c")};
	case "cqbtarget16d":{cqb16 setDir 135; cqb16 setPos (getMarkerPos "cqbtarget16d")};
};
_placement17 = ["cqbtarget17a","cqbtarget17b","cqbtarget17c","cqbtarget17d"] call BIS_fnc_selectRandom;
switch (_placement17) do {
	case "cqbtarget17a":{cqb17 setDir 45; cqb17 setpos (getMarkerpos "cqbtarget17a")};
	case "cqbtarget17b":{cqb17 setDir 315; cqb17 setPos (getMarkerPos "cqbtarget17b")};
	case "cqbtarget17c":{cqb17 setDir 225; cqb17 setPos (getMarkerPos "cqbtarget17c")};
	case "cqbtarget17d":{cqb17 setDir 135; cqb17 setPos (getMarkerPos "cqbtarget17d")};
};
_placement18 = ["cqbtarget18a","cqbtarget18b","cqbtarget18c","cqbtarget18d"] call BIS_fnc_selectRandom;
switch (_placement18) do {
	case "cqbtarget18a":{cqb18 setDir 45; cqb18 setpos (getMarkerpos "cqbtarget18a")};
	case "cqbtarget18b":{cqb18 setDir 315; cqb18 setPos (getMarkerPos "cqbtarget18b")};
	case "cqbtarget18c":{cqb18 setDir 225; cqb18 setPos (getMarkerPos "cqbtarget18c")};
	case "cqbtarget18d":{cqb18 setDir 135; cqb18 setPos (getMarkerPos "cqbtarget18d")};
};