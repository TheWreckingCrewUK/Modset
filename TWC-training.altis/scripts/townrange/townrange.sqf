/* Created by [TWC] jayman
*
* Randomizes the Town targets
*
* Im going to apologize now, but I couldn't think of an easier way. This works perfectly, but sucked to set up
*/
hint "Town is setting up, stand by!";

_placement1 = ["Town1a","Town1b","Town1c","Town1d"] call BIS_fnc_selectRandom;
switch (_placement1) do {
	case "Town1a":{tqb1 setDir 45; tqb1 setpos (getMarkerpos "Town1a")};
	case "Town1b":{tqb1 setDir 315; tqb1 setPos (getMarkerPos "Town1b")};
	case "Town1c":{tqb1 setDir 225; tqb1 setPos (getMarkerPos "Town1c")};
	case "Town1d":{tqb2 setDir 90; tqb2 setPos (getMarkerPos "Town1d")};
};
_placement2 = ["Town2a","Town2b","Town2c"] call BIS_fnc_selectRandom;
switch (_placement2) do {
	case "Town2a":{tqb2 setDir 0; tqb2 setpos (getMarkerpos "Town2a")};
	case "Town2b":{tqb2 setDir 0; tqb2 setPos (getMarkerPos "Townb")};
	case "Town2c":{tqb2 setDir 90; tqb2 setPos (getMarkerPos "Town2c")};
};
_placement3 = ["Town3a","Town3b","Town3c"] call BIS_fnc_selectRandom;
switch (_placement3) do {
	case "Town3a":{tqb3 setDir 45; tqb3 setpos (getMarkerpos "Town3a")};
	case "Town3b":{tqb3 setDir 315; tqb3 setPos (getMarkerPos "Town3b")};
	case "Town3c":{tqb3 setDir 270; tqb3 setPos (getMarkerPos "Town3c")};
};
_placement4 = ["Town4a","Town4b","Town4c"] call BIS_fnc_selectRandom;
switch (_placement4) do {
	case "Town4a":{tqb4 setDir 45; tqb4 setpos (getMarkerpos "Town4a")};
	case "Town4b":{tqb4 setDir 315; tqb4 setPos (getMarkerPos "Town4b")};
	case "Town4C":{tqb4 setDir 0; tqb4 setPos (getMarkerPos "Town4c")};
};
_placement5 = ["Town5a","Town5b","Town5c"] call BIS_fnc_selectRandom;
switch (_placement5) do {
	case "Town5a":{tqb5 setDir 45; tqb5 setpos (getMarkerpos "Town5a")};
	case "Town5b":{tqb5 setDir 315; tqb5 setPos (getMarkerPos "Town5b")};
	case "Town5c":{tqb5 setDir 225; tqb5 setPos (getMarkerPos "Town5c")};
};
_placement6 = ["Town6a","Town6b","Town6c"] call BIS_fnc_selectRandom;
switch (_placement6) do {
	case "Town6a":{tqb6 setDir 180; tqb6 setpos (getMarkerpos "Town6a")};
	case "Town6b":{tqb6 setDir 0; tqb6 setPos (getMarkerPos "Town6b")};
	case "Town6b":{tqb6 setDir 0; tqb6 setPos (getMarkerPos "Town6c")};
};
_placement7 = ["Town7a","Town7b","Town7c"] call BIS_fnc_selectRandom;
switch (_placement7) do {
	case "Town7a":{tqb7 setDir 45; tqb7 setpos (getMarkerpos "Town7a")};
	case "Town7b":{tqb7 setDir 135; tqb7 setPos (getMarkerPos "Town7b")};
	case "Town7c":{tqb7 setDir 225; tqb7 setPos (getMarkerPos "Town7c")};
};
_placement8 = ["Town8a","Town8b","Town8c"] call BIS_fnc_selectRandom;
switch (_placement8) do {
	case "Town8a":{tqb8 setDir 45; tqb8 setpos (getMarkerpos "Town8a")};
	case "Town8b":{tqb8 setDir 1; tqb8 setPos (getMarkerPos "Town8b")};
	case "Town8c":{tqb8 setDir 180; tqb8 setPos (getMarkerPos "Town8c")};
};
_placement9 = ["Town9a","Town9b","Town9c"] call BIS_fnc_selectRandom;
switch (_placement9) do {
	case "Town9a":{tqb9 setDir 270; tqb9 setpos (getMarkerpos "Town9a")};
	case "Town9b":{tqb9 setDir ; tqb9 setPos (getMarkerPos "Town9b")};
	case "Town9c":{tqb9 setDir 180; tqb9 setPos (getMarkerPos "Town9c")};
};
_placement10 = ["Town10a","Town10b","Town10c"] call BIS_fnc_selectRandom;
switch (_placement10) do {
	case "Town10a":{tqb10 setDir 45; tqb10 setpos (getMarkerpos "Town10a")};
	case "Town10b":{tqb10 setDir 315; tqb10 setPos (getMarkerPos "Town10b")};
	case "Town10c":{tqb10 setDir 225; tqb10 setPos (getMarkerPos "Town10c")};
};
_placement11 = ["Town11a","Town11b"] call BIS_fnc_selectRandom;
switch (_placement11) do {
	case "Town11a":{tqb11 setDir 0; tqb11 setpos (getMarkerpos "Town11a")};
	case "Town11b":{tqb11 setDir 180; tqb11 setPos (getMarkerPos "Town11b")};
	case "Town11c":{tqb11 setDir 225; tqb11 setPos (getMarkerPos "Town11c") };
};
_placement12 = ["Town12a","Town12b","Town12c","Town12d","Town12e"] call BIS_fnc_selectRandom;
switch (_placement12) do {
	case "Town12a":{tqb12 setDir 45; tqb12 setpos (getMarkerpos "Town12a")};
	case "Town12b":{tqb12 setDir 315; tqb12 setPos (getMarkerPos "Town12b")};
	case "Town12c":{tqb12 setDir 225; tqb12 setPos (getMarkerPos "Town12c")};
	case "Town12d":{tqb12 setDir 315; tqb12 setPos (getMarkerPos "Town12d")};
	case "Town12e":{tqb12 setDir 225; tqb12 setPos (getMarkerPos "Town12e")};
};
_placement13 = ["Town13a","Town13b","Town13c"] call BIS_fnc_selectRandom;
switch (_placement13) do {
	case "Town13a":{tqb13 setDir 45; tqb13 setpos (getMarkerpos "Town13a")};
	case "Town13b":{tqb13 setDir 315; tqb13 setPos (getMarkerPos "Town13b")};
	case "Town13c":{tqb13 setDir 225; tqb13 setPos (getMarkerPos "Town13c")};
};
_placement14 = ["Civ1a","Civ1b","Civ1c"] call BIS_fnc_selectRandom;
switch (_placement14) do {
	case "Civ1a":{tqb14 setDir 45; tqb14 setpos (getMarkerpos "Civ1a")};
	case "Civ1b":{tqb14 setDir 315; tqb14 setPos (getMarkerPos "Civ1b")};
	case "Civ1c":{tqb14 setDir 225; tqb14 setPos (getMarkerPos "Civ1c")};
};
_placement15 = ["Civ2a","Civ2b","Civ2c"] call BIS_fnc_selectRandom;
switch (_placement15) do {
	case "Civ2a":{tqb15 setDir 45; tqb15 setpos (getMarkerpos "Civ2a")};
	case "Civ2b":{tqb15 setDir 0; tqb15 setPos (getMarkerPos "Civ2b")};
	case "Civ2c":{tqb15 setDir 225; tqb15 setPos (getMarkerPos "Civ2c")};
};
_placement16 = ["Civ3a","Civ3b","Civ3c"] call BIS_fnc_selectRandom;
switch (_placement16) do {
	case "Civ3a":{tqb16 setDir 45; tqb16 setpos (getMarkerpos "Civ3a")};
	case "Civ3b":{tqb16 setDir 0; tqb16 setPos (getMarkerPos "Civ3b")};
	case "Civ3c":{tqb16 setDir 225; tqb16 setPos (getMarkerPos "Civ3c")};
};
_placement17 = ["Civ4a","Civ4b","Civ4c"] call BIS_fnc_selectRandom;
switch (_placement17) do {
	case "Civ4a":{tqb17 setDir 0; tqb17 setpos (getMarkerpos "Civ4a")};
	case "Civ4b":{tqb17 setDir 315; tqb17 setPos (getMarkerPos "Civ4b")};
	case "Civ4c":{tqb17 setDir 225; tqb17 setPos (getMarkerPos "Civ4c")};
};
_placement18 = ["TownTank1a","TownTank1b","TownTank1c","TownTank2a","TownTank2b","TownTank2c"] call BIS_fnc_selectRandom;
switch (_placement18) do {
	case "TownTank18a":{tqb18 setDir 45; tqb18 setpos (getMarkerpos "TownTank1a")};
	case "TownTank18b":{tqb18 setDir 315; tqb18 setPos (getMarkerPos "TownTank1b")};
	case "TownTank18c":{tqb18 setDir 225; tqb18 setPos (getMarkerPos "TownTank1c")};
	case "TownTank2a":{tqb18 setDir 45; tqb18 setpos (getMarkerpos "TownTank2a")};
	case "TownTank2b":{tqb18 setDir 315; tqb18 setPos (getMarkerPos "TownTank2b")};
	case "TownTank2c":{tqb18 setDir 225; tqb18 setPos (getMarkerPos "TownTank2c")};
};
sleep 20;
hint "Town is ready to be cleared, go right ahead boys!"