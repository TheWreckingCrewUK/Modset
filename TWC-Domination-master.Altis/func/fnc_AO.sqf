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
CounterAttackCheck = 0;
};

hint"AO created";

//Timeout
_bunkertime = 10;
_RadioTowerTime = 0;

//units
_squad = (configfile >> "CfgGroups" >> "EAST" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_squad");
_fireteam = (configfile >> "CfgGroups" >> "EAST" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_fireteam");
_AAteam = (configfile >> "CfgGroups" >> "EAST" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_section_AA");
_btr60squad = (configfile >> "CfgGroups" >> "EAST" >> "rhs_faction_msv" >> "rhs_group_rus_msv_btr70" >> "rhs_group_rus_msv_btr70_squad_sniper");
_bmp2 = (configfile >> "CfgGroups" >> "EAST" >> "rhs_faction_vdv" >> "rhs_group_rus_vdv_bmd1" >> "rhs_group_rus_vdv_bmd1_squad");
_t72 = "rhs_t72bd_tv";
_shilka = "rhs_zsu234_aa";
_Bmp = "rhs_bmp2_vdv";
_btr = "rhs_btr80_vv";
_bunkergun = "RHS_NSV_TriPod_MSV";
_AAstatic = "rhs_Igla_AA_pod_msv";
_gunner = "rhs_msv_emr_rifleman";
_radar = "rhs_p37";
_ruflag = "rhs_Flag_Russia_F";
_natoflag = "Flag_NATO_F";

//array select
params ["_AOname"]; //example "pygros"

//formating
private ["_CentralMarker","_bunkerone","_bunkertwo","_bunkerthree"];
_CentralMarker = format ["ao%1",_AOname]; // example "aopygros"
_CentralFlagMarker = format ["flag%1", _AOname]; // example "flagpyrgos"
_bunkerone = format ["ao%1bunkerone",_AOname]; // example "aopygrosbunkerone"
_bunkertwo = format ["ao%1bunkertwo",_AOname]; // example "aopygrosbunkertwo"
_bunkerthree = format ["ao%1bunkerthree",_AOname]; // example "aopygrosbunkerthree"


if (isServer) then {
	_AOAreaMarker = createMarker [ _CentralMarker , position player ];
	_AOAreaMarker setmarkerpos getmarkerpos _AOname;
	_AOAreaMarker setmarkershape "ELLIPSE";
	_AOAreaMarker setmarkersize [300, 300];
	_AOAreaMarker setmarkercolor "ColorBlue";
	_AoAreaMarker setmarkeralpha 0.0;
};
if (isServer) then{
	_AOFlagMarker = createMarker [_CentralFlagMarker, position player];
	_AOFlagMarker setmarkerpos getmarkerpos _AOname;
	_AOFlagMarker setmarkershape "Icon";
	_AOFlagMarker setmarkertype "Faction_RU";
	_AOFlagMarker setmarkersize [1.0, 1.0];
	_AOFlagMarker setmarkercolor "Default";
};

if (isServer) then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[100,600],[0,120],0,[1,50],"Land_BagBunker_Large_F"] call SHK_pos;
	_AOBunkerOneMarker = createMarker [ _bunkerone, _pos];
	_AOBunkerOneMarker setmarkershape "ICON";
	_AOBunkerOneMarker setmarkertype "n_unknown";
	_AOBunkerOneMarker setmarkersize [0.5, 0.5];
	_AOBunkerOneMarker setmarkercolor "ColorRed";

	_AOBunkerOneSpawn = "Land_BagBunker_Large_F" createVehicle (_pos);
	_BunkerOneFlag = _ruflag createVehicle (_pos);

	_AOBunkerOneGunOne = _bunkergun createVehicle (_pos);
	_AOBunkerOneGunOne setPos [(getPos _AOBunkerOneGunOne select 0)+6, getPos _AOBunkerOneGunOne select 1, 0];
 	_AOBunkerOneGunOne setDir 90;
	createVehicleCrew _AOBunkerOneGunOne;

	_AOBunkerOneGunTwo = _bunkergun createVehicle (_pos);
	_AOBunkerOneGunTwo setPos [(getPos _AOBunkerOneGunTwo select 0)-8, getPos _AOBunkerOneGunTwo select 1, 0];
	_AOBunkerOneGunTwo setDir 270;
	createVehicleCrew _AOBunkerOneGunTwo;

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
	_pos = [getmarkerpos _CentralMarker,[100,600],[0,120],0,[1,50],"Land_BagBunker_Large_F"] call SHK_pos;
	_AOBunkerTwoMarker = createMarker [ _bunkertwo, _pos];
	_AOBunkerTwoMarker setmarkershape "ICON";
	_AOBunkerTwoMarker setmarkertype "n_unknown";
	_AOBunkerTwoMarker setmarkersize [0.5, 0.5];
	_AOBunkerTwoMarker setmarkercolor "ColorRed";


 	_AOBunkerTwoSpawn = "Land_BagBunker_Large_F" createVehicle (_pos);
	_BunkerTwoFlag = _ruflag createVehicle (_pos);

	_AOBunkerTwoGunOne = _bunkergun createVehicle (_pos);
	_AOBunkerTwoGunOne setPos [(getPos _AOBunkerTwoGunOne select 0)+6, getPos _AOBunkerTwoGunOne select 1, 0];
 	_AOBunkerTwoGunOne setDir 90;
	createVehicleCrew _AOBunkerTwoGunOne;

	_AOBunkerTwoGunTwo = _bunkergun createVehicle (_pos);
	_AOBunkerTwoGunTwo setPos [(getPos _AOBunkerTwoGunTwo select 0)-8, getPos _AOBunkerTwoGunTwo select 1, 0];
	_AOBunkerTwoGunTwo setDir 270;
	createVehicleCrew _AOBunkerThreeGunTwo;

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

if isServer then {

	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[100,600],[0,120],0,[1,50],"Land_BagBunker_Large_F"] call SHK_pos;
	_AOBunkerThreeMarker = createMarker [ _bunkerthree, _pos];
	_AOBunkerThreeMarker setmarkershape "ICON";
	_AOBunkerThreeMarker setmarkertype "n_unknown";
	_AOBunkerThreeMarker setmarkersize [0.5, 0.5];
	_AOBunkerThreeMarker setmarkercolor "ColorRed";


	_AOBunkerThreeSpawn = "Land_BagBunker_Large_F" createVehicle (_pos);
	_BunkerThreeFlag = _ruflag createVehicle (_pos);

	_AOBunkerThreeGunOne = _bunkergun createVehicle (_pos);
	_AOBunkerThreeGunOne setPos [(getPos _AOBunkerThreeGunOne select 0)+6, getPos _AOBunkerThreeGunOne select 1, 0];
 	_AOBunkerThreeGunOne setDir 90;
	createVehicleCrew _AOBunkerThreeGunOne;

	_AOBunkerThreeGunTwo = _bunkergun createVehicle (_pos);
	_AOBunkerThreeGunTwo setPos [(getPos _AOBunkerThreeGunTwo select 0)-8, getPos _AOBunkerThreeGunTwo select 1, 0];
	_AOBunkerThreeGunTwo setDir 270;
	createVehicleCrew _AOBunkerThreeGunTwo;

	_AOBunkerThreeDefenceOne = [_pos, EAST, _fireteam] call BIS_fnc_spawnGroup;
	[_AOBunkerThreeDefenceOne, _pos, 10] call CBA_fnc_taskDefend;

 	_AOBunkerThreePatrolOne = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
	[_AOBunkerThreePatrolOne, _pos, 250, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;

        _positionForTrigger = _pos;
	_areaForTrigger = [10,10,0,false];
	_activationForTrigger = ["WEST", "PRESENT", true];
	_stateForTrigger = ["this",
	format["
		AObunkercount = AObunkercount + 1; hint 'Bunker Captured';  '%1' setmarkercolor 'ColorBlue';
	",_bunkerthree], "deleteVehicle thisTrigger;"];
	_BunkerTriggerAreaThree = ([_positionForTrigger, "AREA:", _areaForTrigger, "ACT:", _activationForTrigger, "STATE:", _stateForTrigger] call CBA_fnc_createTrigger) select 0;
	_BunkerTriggerAreaThree setTriggerTimeout [_bunkertime, _bunkertime, _bunkertime, true];

      };


for "_i" from 0 to 1 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[100,600],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 600, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;
		};
};
for "_i" from 0 to 1 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
		_DefendSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
		[_DefendSquad, getmarkerpos _CentralMarker, 600] call CBA_fnc_taskDefend;
		};
};
for "_i" from 0 to 1 do {
	if isServer then {
			private ["_pos","_m"];
			_pos = [getmarkerpos _CentralMarker,[400,600],random 360,0,[1,400],_btr] call SHK_pos;
			_BtrCrew = creategroup EAST;
			_BtrVeh = [_pos, 180, _btr,_BtrCrew] call BIS_fnc_spawnVehicle;
			[_BtrCrew, getMarkerpos _CentralMarker, 600] call CBA_fnc_taskPatrol;
			_btralone = _BtrVeh select 0;
			_BTRsquad = [[0,0,0], EAST, _squad] call BIS_fnc_spawnGroup;
		    {_x moveincargo _btralone} foreach units _BTRsquad;
		};
};

if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[400,600],random 360,0,[1,400],_btr] call SHK_pos;
	_BmpCrew = creategroup EAST;
	_BmpVeh = [_pos, 180, _Bmp,_BmpCrew] call BIS_fnc_spawnVehicle;
	[_BmpCrew, getMarkerpos _CentralMarker, 600] call CBA_fnc_taskPatrol;
	_bmpalone = _BmpVeh select 0;
	_Bmpsquad = [[0,0,0], EAST, _squad] call BIS_fnc_spawnGroup;
	{_x moveincargo _bmpalone} foreach units _Bmpsquad;

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
	_pos = [getmarkerpos _CentralMarker,[400,600],random 360,0,[1,400],_shilka] call SHK_pos;
	_CrewTwo = creategroup EAST;
	_AAOne = [_pos, 180, _shilka,_CrewTwo] call BIS_fnc_spawnVehicle;

	};
//Counter attacks and other such things
_AttackHeli = [_AOname] spawn TWC_fnc_AttackHelicopter;
_AttackPlane = [_AOname] spawn TWC_fnc_Plane;

TaskIncrease = TaskIncrease + 1;

[format["Task%1",TaskIncrease],format[ "Primary Objective : Capture %1",_AOname],"Capture each of the three bunkers inside the AO also destory the Radio tower to complete the AO. If you dont not destory the Radio tower within a certain time enemy reniforcements will be called in."] call TWC_fnc_CreateTask;
if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[100,600],[0,120],0,[1,200]] call SHK_pos;
	_RadioTower = "rhs_p37" createVehicle (_pos);
	_RadioTower setdamage 0.99;
		waituntil { damage _RadioTower == 1};
		RadioTowerCheck = RadioTowerCheck + 1;
		hint "Radio Tower Destroyed";
	};




waituntil {AObunkercount == 3 and RadioTowerCheck == 1};
[_AOname] spawn twc_fnc_Spawncounter;
waituntil {CounterAttackCheck == 1};

   [format["Task%1",TaskIncrease],"succeeded"] call TWC_fnc_UpdateTask;
  _CentralMarker setmarkeralpha 1.0;
  _CentralFlagMarker setmarkertype "flag_UK";
  terminate _AttackHeli;
  {if (side _x == east) then
  {_x setDamage 1};} foreach allunits;
  sleep 5;
  { deleteVehicle _x } forEach allDead;
  sleep 10;
  null=[]execVm "ao\RandomArray.sqf";
