/*
*   AO Funtion for Domination for use only on TWC by FakeMatty
*
*   Parameters
*
*   0 - Marker that is named with the name of the town it is placed over
*
*
*  returns
*
*  fuck all expect for one AO
*
*/
if (isServer) then {
//bunker set and Radar set
AObunkercount = 0;
RadioTowerCheck = 0;
};

hint"AO created";

//Timeout
_bunkertime = 10;

//units
_squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");
_fireteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySection");
_AAteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAA");
_t72 = "CUP_O_T72_SLA";
_btr = "CUP_O_BRDM2_SLA";
_radar = "Land_Communication_F";
_ruflag = "Flag_Red_F";
_natoflag = "Flag_NATO_F";

//array select
params ["_AOname"]; //example "pygros"

//formating
private ["_CentralMarker","_bunkerone","_bunkertwo"];
_CentralMarker = format ["ao%1",_AOname]; // example "aopygros"
_CentralFlagMarker = format ["flag%1", _AOname]; // example "flagpyrgos"
_bunkerone = format ["ao%1bunkerone",_AOname]; // example "aopygrosbunkerone"
_bunkertwo = format ["ao%1bunkertwo",_AOname]; // example "aopygrosbunkertwo"


if (isServer) then {
	_AOAreaMarker = createMarker [ _CentralMarker , position player ];
	_AOAreaMarker setmarkerpos getmarkerpos _AOname;
	_AOAreaMarker setmarkershape "ELLIPSE";
	_AOAreaMarker setmarkersize [600, 600];
	_AOAreaMarker setmarkercolor "ColorBlue";
	_AoAreaMarker setmarkeralpha 0.0;
};
if (isServer) then{
	_AOFlagMarker = createMarker [_CentralFlagMarker, position player];
	_AOFlagMarker setmarkerpos getmarkerpos _AOname;
	_AOFlagMarker setmarkershape "Icon";
	_AOFlagMarker setmarkertype "o_hq";
	_AOFlagMarker setmarkersize [1.0, 1.0];
	_AOFlagMarker setmarkercolor "Default";
};

if (isServer) then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[100,500],[0,180],0,[1,50],"Land_BagBunker_Large_F"] call SHK_pos;
	_AOBunkerOneMarker = createMarker [ _bunkerone, _pos];
	_AOBunkerOneMarker setmarkershape "ICON";
	_AOBunkerOneMarker setmarkertype "n_unknown";
	_AOBunkerOneMarker setmarkersize [0.5, 0.5];
	_AOBunkerOneMarker setmarkercolor "ColorRed";

	_AOBunkerOneSpawn = "Land_BagBunker_Large_F" createVehicle (_pos);
	_BunkerOneFlag = _ruflag createVehicle (_pos);

	_AOBunkerOneDefenceOne = [_pos, EAST, _fireteam] call BIS_fnc_spawnGroup;
	[_AOBunkerOneDefenceOne, _pos, 10] call CBA_fnc_taskDefend;

 	_AOBunkerOnePatrolOne = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
	[_AOBunkerOnePatrolOne, _pos, 250, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;

    _positionForTrigger = _pos;
	_areaForTrigger = [10,10,0,false];
	_activationForTrigger = ["WEST", "PRESENT", true];
	_stateForTrigger = ["this", format ["AObunkercount = AObunkercount + 1; hint 'Bunker Captured';  '%1' setmarkercolor 'ColorBlue';", _bunkerone], "deleteVehicle thisTrigger;"];
	_BunkerTriggerAreaOne = ([_positionForTrigger, "AREA:", _areaForTrigger, "ACT:", _activationForTrigger, "STATE:", _stateForTrigger] call CBA_fnc_createTrigger) select 0;
	_BunkerTriggerAreaOne setTriggerTimeout [_bunkertime, _bunkertime, _bunkertime, true];

 };

if isServer then {

	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[100,500],[180,360],0,[1,50],"Land_BagBunker_Large_F"] call SHK_pos;
	_AOBunkerTwoMarker = createMarker [ _bunkertwo, _pos];
	_AOBunkerTwoMarker setmarkershape "ICON";
	_AOBunkerTwoMarker setmarkertype "n_unknown";
	_AOBunkerTwoMarker setmarkersize [0.5, 0.5];
	_AOBunkerTwoMarker setmarkercolor "ColorRed";


 	_AOBunkerTwoSpawn = "Land_BagBunker_Large_F" createVehicle (_pos);
	_BunkerTwoFlag = _ruflag createVehicle (_pos);

	_AOBunkerTwoDefenceOne = [_pos, EAST, _fireteam] call BIS_fnc_spawnGroup;
	[_AOBunkerTwoDefenceOne, _pos, 10] call CBA_fnc_taskDefend;

 	_AOBunkerTwoPatrolOne = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
	[_AOBunkerTwoPatrolOne, _pos, 250, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;

        _positionForTrigger = _pos;
	_areaForTrigger = [10,10,0,false];
	_activationForTrigger = ["WEST", "PRESENT", true];
	_stateForTrigger = ["this",
	format["
		AObunkercount = AObunkercount + 1; hint 'Bunker Captured';  '%1' setmarkercolor 'ColorBlue';
	",_bunkertwo], "deleteVehicle thisTrigger;"];
	_BunkerTriggerAreaTwo = ([_positionForTrigger, "AREA:", _areaForTrigger, "ACT:", _activationForTrigger, "STATE:", _stateForTrigger] call CBA_fnc_createTrigger) select 0;
	_BunkerTriggerAreaTwo setTriggerTimeout [_bunkertime, _bunkertime, _bunkertime, true];

      };

for "_i" from 0 to 1 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
		_DefendSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
		[_DefendSquad, getmarkerpos _CentralMarker, 600] call CBA_fnc_taskDefend;
		};
};
if isServer then {

	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[400,600],random 360,0,[1,400],_t72] call SHK_pos;
	_CrewOne = creategroup EAST;
	_TankOne = [_pos, 180, _t72,_CrewOne] call BIS_fnc_spawnVehicle;
     [_CrewOne, getMarkerpos _CentralMarker, 600] call CBA_fnc_taskPatrol;

	};
if isServer then {

	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[400,600],random 360,0,[1,400],_t72] call SHK_pos;
	_CrewOne = creategroup EAST;
	_TankOne = [_pos, 180, _btr,_CrewOne] call BIS_fnc_spawnVehicle;
     [_CrewOne, getMarkerpos _CentralMarker, 600] call CBA_fnc_taskPatrol;

	};
if isServer then {

	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[400,600],random 360,0,[1,400],_t72] call SHK_pos;
	_CrewOne = creategroup EAST;
	_TankOne = [_pos, 180, _btr,_CrewOne] call BIS_fnc_spawnVehicle;
     [_CrewOne, getMarkerpos _CentralMarker, 600] call CBA_fnc_taskPatrol;

	};

TaskIncrease = TaskIncrease + 1;

[format["Task%1",TaskIncrease],format[ "Primary Objective : Capture %1",_AOname],"Capture each of the three bunkers inside the AO also destory the Radio tower to complete the AO."] call TWC_fnc_CreateTask;
if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[0,200],[0,360],0,[1,200]] call SHK_pos;
	_RadioTower = _radar createVehicle (_pos);
	_RadarMarker = createMarker [ "radiotowermarkername", _pos];
	_RadioTower setdamage 0.99;
		waituntil { damage _RadioTower == 1};
		RadioTowerCheck = RadioTowerCheck + 1;
		hint "Radio Tower Destroyed";
	};




waituntil {AObunkercount == 2 and RadioTowerCheck == 1};

   [format["Task%1",TaskIncrease],"succeeded"] call TWC_fnc_UpdateTask;
  _CentralMarker setmarkeralpha 1.0;
  _CentralFlagMarker setmarkertype "flag_UK";
  {if (side _x == east) then
  {_x setDamage 1};} foreach allunits;
  sleep 5;
  { deleteVehicle _x } forEach allDead;
  sleep 10;
  execVm "server\ao\RandomArray.sqf";
