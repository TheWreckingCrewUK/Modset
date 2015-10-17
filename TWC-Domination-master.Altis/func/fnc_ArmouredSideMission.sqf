params ["_SideMissionCenter"];

_CentralMarker = format ["AreaMarker%1",_SideMissionCenter]; // example "aopygros"
_WritingMarker = format ["WritingMarker%1",_SideMissionCenter]; // example "aopygrosbunkerone"

//SideMissionCheck
SideMissionCheck = 0;

//Markers

_AreaMarker = createMarker [_CentralMarker , position player ];
_AreaMarker setmarkerpos getmarkerpos _SideMissionCenter;
_AreaMarker setmarkershape "ELLIPSE";
_AreaMarker setmarkersize [200, 200];
_AreaMarker setmarkercolor "ColorRed";

_WritingMarkerDepo = createMarker [ _WritingMarker, getmarkerpos _SideMissionCenter];
_WritingMarkerDepo setmarkershape "ICON";
_WritingMarkerDepo setmarkertype "mil_triangle";
_WritingMarkerDepo setmarkersize [0.5, 0.5];
_WritingMarkerDepo setmarkercolor "ColorRed";
_WritingMarkerDepo setmarkertext "Russian Armour Depo";

//Walls
_Wall = "Land_HBarrierBig_F";

// North Wall
_WallOneNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallOneNorth setPos [(getPos _WallOneNorth select 0)+16, (getPos _WallOneNorth select 1)+16, 0];

_WallTwoNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallTwoNorth setPos [(getPos _WallTwoNorth select 0)+8, (getPos _WallTwoNorth select 1)+16, 0];

_WallThreeNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallThreeNorth setPos [(getPos _WallThreeNorth select 0)+0, (getPos _WallThreeNorth select 1)+16, 0];

_WallFourNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallFourNorth setPos [(getPos _WallFourNorth select 0)-8, (getPos _WallFourNorth select 1)+16, 0];

_WallFiveNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallFiveNorth setPos [(getPos _WallFiveNorth select 0)-16, (getPos _WallFiveNorth select 1)+16, 0];

//North Wall Sepators
_WallSeparatorOneNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorOneNorth setPos [(getPos _WallSeparatorOneNorth select 0)+20, (getPos _WallSeparatorOneNorth select 1)+12, 0];
_WallSeparatorOneNorth setdir 90;

_WallSeparatorTwoNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorTwoNorth setPos [(getPos _WallSeparatorTwoNorth select 0)+12, (getPos _WallSeparatorTwoNorth select 1)+12, 0];
_WallSeparatorTwoNorth setdir 90;

_WallSeparatorThreeNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorThreeNorth setPos [(getPos _WallSeparatorThreeNorth select 0)+4, (getPos _WallSeparatorThreeNorth select 1)+12, 0];
_WallSeparatorThreeNorth setdir 90;

_WallSeparatorFourNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorFourNorth setPos [(getPos _WallSeparatorFourNorth select 0)-4, (getPos _WallSeparatorFourNorth select 1)+12, 0];
_WallSeparatorFourNorth setdir 90;

_WallSeparatorFiveNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorFiveNorth setPos [(getPos _WallSeparatorFiveNorth select 0)-12, (getPos _WallSeparatorFiveNorth select 1)+12, 0];
_WallSeparatorFiveNorth setdir 90;

_WallSeparatorSixNorth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorSixNorth setPos [(getPos _WallSeparatorSixNorth select 0)-20, (getPos _WallSeparatorSixNorth select 1)+12, 0];
_WallSeparatorSixNorth setdir 90;



//South Wall
_WallOneSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallOneSouth setPos [(getPos _WallOneSouth select 0)+16, (getPos _WallOneSouth select 1)-16, 0];

_WallTwoSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallTwoSouth setPos [(getPos _WallTwoSouth select 0)+8, (getPos _WallTwoSouth select 1)-16, 0];

_WallThreeSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallThreeSouth setPos [(getPos _WallThreeSouth select 0)+0, (getPos _WallThreeSouth select 1)-16, 0];

_WallFourSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallFourSouth setPos [(getPos _WallFourSouth select 0)-8, (getPos _WallFourSouth select 1)-16, 0];

_WallFiveSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallFiveSouth setPos [(getPos _WallFiveSouth select 0)-16, (getPos _WallFiveSouth select 1)-16, 0];

//South Wall Sepators
_WallSeparatorOneSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorOneSouth setPos [(getPos _WallSeparatorOneSouth select 0)+20, (getPos _WallSeparatorOneSouth select 1)-12, 0];
_WallSeparatorOneSouth setdir 90;

_WallSeparatorTwoSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorTwoSouth setPos [(getPos _WallSeparatorTwoSouth select 0)+12, (getPos _WallSeparatorTwoSouth select 1)-12, 0];
_WallSeparatorTwoSouth setdir 90;

_WallSeparatorThreeSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorThreeSouth setPos [(getPos _WallSeparatorThreeSouth select 0)+4, (getPos _WallSeparatorThreeSouth select 1)-12, 0];
_WallSeparatorThreeSouth setdir 90;

_WallSeparatorFourSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorFourSouth setPos [(getPos _WallSeparatorFourSouth select 0)-4, (getPos _WallSeparatorFourSouth select 1)-12, 0];
_WallSeparatorFourSouth setdir 90;

_WallSeparatorFiveSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorFiveSouth setPos [(getPos _WallSeparatorFiveSouth select 0)-12, (getPos _WallSeparatorFiveSouth select 1)-12, 0];
_WallSeparatorFiveSouth setdir 90;

_WallSeparatorSixSouth = _Wall createVehicle (getmarkerpos _SideMissionCenter);
_WallSeparatorSixSouth setPos [(getPos _WallSeparatorSixSouth select 0)-20, (getPos _WallSeparatorSixSouth select 1)-12, 0];
_WallSeparatorSixSouth setdir 90;


// Vehicle Set Up

_BMP = "rhs_bmd1";
_T90 = "rhs_t90_tv";
_BTR = "rhs_btr80_vv";


//North Vehicle placement

_BMPone = _BMP createVehicle (getmarkerpos _SideMissionCenter);
_BMPone setPos [(getPos _BMPone select 0)+16, (getPos _BMPone select 1)+10, 0];
_BMPone setDir 180;
_BMPone lock True;

_BMPTwo = _BMP createVehicle (getmarkerpos _SideMissionCenter);
_BMPTwo setPos [(getPos _BMPTwo select 0)+8, (getPos _BMPTwo select 1)+10, 0];
_BMPTwo setDir 180;
_BMPTwo lock True;

_BMPThree = _BMP createVehicle (getmarkerpos _SideMissionCenter);
_BMPThree setPos [(getPos _BMPThree select 0)+0, (getPos _BMPThree select 1)+10, 0];
_BMPThree setDir 180;
_BMPThree lock True;

_T90One = _T90 createVehicle (getmarkerpos _SideMissionCenter);
_T90One setPos [(getPos _T90One select 0)-8, (getPos _T90One select 1)+10, 0];
_T90One setDir 180;
_T90One lock True;

_T90Two = _T90 createVehicle (getmarkerpos _SideMissionCenter);
_T90Two setPos [(getPos _T90Two select 0)-16, (getPos _T90Two select 1)+10, 0];
_T90Two setDir 180;
_T90Two lock True;

//South Vehicle Placement

_BTROne = _BTR createVehicle (getmarkerpos _SideMissionCenter);
_BTROne setPos [(getPos _BTROne select 0)+16, (getPos _BTROne select 1)-10, 0];
_BTROne setDir 0;
_BTROne lock True;

_BTRTwo = _BTR createVehicle (getmarkerpos _SideMissionCenter);
_BTRTwo setPos [(getPos _BTRTwo select 0)+8, (getPos _BTRTwo select 1)-10, 0];
_BTRTwo setDir 0;
_BTRTwo lock True;

_BTRThree = _BTR createVehicle (getmarkerpos _SideMissionCenter);
_BTRThree setPos [(getPos _BTRThree select 0)+0, (getPos _BTRThree select 1)-10, 0];
_BTRThree setDir 0;
_BTRThree lock True;

_T90Three = _T90 createVehicle (getmarkerpos _SideMissionCenter);
_T90Three setPos [(getPos _T90Three select 0)-8, (getPos _T90Three select 1)-10, 0];
_T90Three setDir 0;
_T90Three lock True;

_T90Four = _T90 createVehicle (getmarkerpos _SideMissionCenter);
_T90Four setPos [(getPos _T90Four select 0)-16, (getPos _T90Four select 1)-10, 0];
_T90Four setDir 0;
_T90Four lock True;

//Enemy Setup

_Fireteam = (configfile >> "CfgGroups" >> "EAST" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_fireteam");
_BTRCrewed = "rhs_btr80a_msv";

_BTRCrew = creategroup EAST;
_BTRCrewedOne = [[(getmarkerpos _SideMissionCenter select 0) + 30,(getmarkerpos _SideMissionCenter select 1) + 30,(getmarkerpos _SideMissionCenter select 2) + 0], 180, _BTRCrewed,_BTRCrew] call BIS_fnc_spawnVehicle;
[_BTRCrew, getmarkerpos _SideMissionCenter, 200] call CBA_fnc_taskPatrol;


_PatrolOne = [ getmarkerpos _SideMissionCenter, EAST, _Fireteam] call BIS_fnc_spawnGroup;
[_PatrolOne, getmarkerpos _SideMissionCenter, 100, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;


_PatrolTwo = [ getmarkerpos _SideMissionCenter, EAST, _Fireteam] call BIS_fnc_spawnGroup;
[_PatrolTwo, getmarkerpos _SideMissionCenter, 100, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;


_PatrolThree = [ getmarkerpos _SideMissionCenter, EAST, _Fireteam] call BIS_fnc_spawnGroup;
[_PatrolThree, getmarkerpos _SideMissionCenter, 100, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;

_pos = [getmarkerpos _SideMissionCenter,[0,200],random 360,0] call SHK_pos;
_DefendOne = [ getmarkerpos _SideMissionCenter, EAST, _Fireteam] call BIS_fnc_spawnGroup;
[_DefendOne, getmarkerpos _SideMissionCenter, 50] call CBA_fnc_taskDefend;

//Trigger

_positionForTrigger = getmarkerpos _SideMissionCenter;
_areaForTrigger = [250,250,0,false];
_activationForTrigger = ["EAST", "NOT PRESENT", true];
_stateForTrigger = ["this",
	format["
		SideMissionCheck = SideMissionCheck + 1; hint 'Side Mission Complete';  '%1' setmarkercolor 'ColorBlue';
	",_SideMissionMarker], "deleteVehicle thisTrigger;"];
	_BunkerTriggerAreaOne = ([_positionForTrigger, "AREA:", _areaForTrigger, "ACT:", _activationForTrigger, "STATE:", _stateForTrigger] call CBA_fnc_createTrigger) select 0;
	_BunkerTriggerAreaOne setTriggerTimeout [_bunkertime, _bunkertime, _bunkertime, true];



SideMissonIncrease = SideMissonIncrease + 1;
[format["SideMission%1",SideMissonIncrease],"Secondary Objective : Capture Russian Armour Depo","If We capture this Russian Depo it will reduce the amount of Russian armour in the next AO."] call TWC_fnc_CreateTask;

waituntil {SideMissionCheck == 1};

[format["SideMission%1",SideMissonIncrease],"succeeded"] call TWC_fnc_UpdateTask;

_AreaMarker setmarkercolor "Colorblue";
_WritingMarkerDepo setmarkercolor "Colorblue";
