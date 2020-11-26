//Calls all the functions on player start.
params["_unit"];


if (isserver) then {
	

	// no need to initialise ragdolling twice!
	if (!isNil 'diwako_ragdoll_ragdollRunning') exitWith {};
	diwako_ragdoll_ragdollRunning = true;
	diwako_ragdoll_ragdolling = true;
	diwako_ragdoll_ai = true;
	diwako_ragdoll_server_only = true;

	
	["ace_unconscious", {
	  params [["_unit", objNull],["_state", false]];
	  // if(!local _unit || {!diwako_ragdoll_ragdolling}) exitWith {}; // ragdolling if it's active and unit local
	  if(!diwako_ragdoll_ragdolling) exitWith {}; // ragdolling if it's active
	  if(isPlayer _unit) exitWith {}; // hobbs: don't ragdoll players
	  
	  if(_state && {(isNull objectParent _unit) && {!([_unit] call ace_medical_fnc_isBeingCarried) && {!([_unit] call ace_medical_fnc_isBeingDragged)}}}) then {
		// ragdoll unit
		_unit setUnconscious true;
	  };
	  if(!_state) then {
	   
	   // unit woke up before ragdolling was finished
		_unit setUnconscious false;
	  };
	}] call CBA_fnc_addEventHandler;


	["CAManBase", "AnimChanged", {
		if(isPlayer (_this select 0)) exitWith {};
		_this call diwako_ragdoll_fnc_animChangedEH;
	}] call CBA_fnc_addClassEventHandler;



	diwako_ragdoll_fnc_animChangedEH = {

		params ["_unit","_anim"];
		if(!(_unit getVariable ["ACE_isUnconscious",false])) exitWith {}; 
		// do not run if unit is conscious
		if(!(alive _unit) && (!(isNull objectParent _unit))) exitWith {}; 
		// do not run if unit in any vehicle

		_anim = toLower(_anim);

		if((_anim find "unconsciousrevive") != -1 ||  (_anim == "unconsciousoutprone" ||   ((_anim find "amov") == 0 )) ) then {
		  _anim = "unconscious";

		  private _vRightShoulder = _unit selectionPosition "rightshoulder";
		  private _vLeftShoulder = _unit selectionPosition "leftshoulder";
		  private _heightDif = (_vRightShoulder select 2) - (_vLeftShoulder select 2);

		  private _animHolder = [];

		  if(isNil "diwako_ragdoll_animHolder") then {
			diwako_ragdoll_animHolder = [];
			if(!diwako_ragdoll_server_only && (isClass(configFile >> "CfgPatches" >> "diwako_ragdoll"))) then {
			  
			  diwako_ragdoll_animHolder pushBack ["kka3_unc_2","kka3_unc_2_1","kka3_unc_7_1","kka3_unc_8_1","kka3_unc_5_1","kka3_unc_6_1"]; 
			  diwako_ragdoll_animHolder pushBack ["kka3_unc_1", "kka3_unc_3", "kka3_unc_4","unconscious","KIA_passenger_boat_holdleft","kka3_unc_3_1","kka3_unc_4_1"]; 
			  diwako_ragdoll_animHolder pushBack ["kka3_unc_7","kka3_unc_8","kka3_unc_6_1","kka3_unc_5_1"]; 
			  diwako_ragdoll_animHolder pushBack ["kka3_unc_5","kka3_unc_6","KIA_driver_boat01","kka3_unc_1_1","kka3_unc_7_1","kka3_unc_8_1"]; 
			} else {
			
			  diwako_ragdoll_animHolder pushBack ["unconscious"]; 
			  diwako_ragdoll_animHolder pushBack ["unconscious","KIA_passenger_boat_holdleft"]; 
			  diwako_ragdoll_animHolder pushBack ["unconscious"];
			  diwako_ragdoll_animHolder pushBack ["unconscious","KIA_driver_boat01"];
			};
		  };

		  if( _heightDif > 0.2 || _heightDif < -0.2) then {
		  
			_anim = selectRandom ([ (diwako_ragdoll_animHolder select 2) , (diwako_ragdoll_animHolder select 3) ] select (_heightDif < -0.2));
		  } else {
			if((_vRightShoulder select 0) > (_vLeftShoulder select 0)) then {
			
			  _anim = selectRandom (diwako_ragdoll_animHolder select 1);
			} else {
			
			  _anim = selectRandom (diwako_ragdoll_animHolder select 0);
			};
		  };

		  [
			{
			  params ["_unit","_anim"];
			  if(_unit getVariable ["ACE_isUnconscious",false]) then {
				if(_unit == ace_player) then {
				  ["ace_common_switchMove", [_unit, _anim]] call CBA_fnc_globalEvent;
				} else {
				  _unit switchMove _anim;
				};
			  };
			},   [_unit,_anim],     0.2 
		  ] call CBA_fnc_waitAndExecute;
		  [
			{
			  params ["_unit","_anim"];
			  if(_unit getVariable ["ACE_isUnconscious",false]) then {
				_unit setUnconscious false;
			  };
			},    [_unit,_anim],    5  ] call CBA_fnc_waitAndExecute;

		  if(isMultiplayer) then {
			[
			  {
				params ["_unit","_anim"];
				if((_unit getVariable ["ACE_isUnconscious",false]) &&        {(isNull objectParent _unit) &&          {!([_unit] call ace_medical_fnc_isBeingCarried) &&           {!([_unit] call ace_medical_fnc_isBeingDragged)}}}          ) then {
				  
				  if(_unit == ace_player) then {
					["ace_common_switchMove", [_unit, _anim]] call CBA_fnc_globalEvent;
				  } else {
					_unit switchMove _anim;
				  };
				};
				if(!(_unit getVariable ["ACE_isUnconscious",false])) then {
				  _unit setUnconscious false;
				  if(local _unit) then {
					["ace_common_switchMove", [_unit, (animationState _unit)]] call CBA_fnc_globalEvent;
				  };
				};
			  },      [_unit,_anim],       10     ] call CBA_fnc_waitAndExecute;
		  };
		};

	};
};


if (!hasInterface || isDedicated) exitWith {};
if (player != _unit) exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

openBoltFnc = {
	if (!hasinterface) exitwith {};
	_openbolt = [(configFile >> "CfgWeapons" >> (primaryweapon player)), "twc_openbolt", 0] call BIS_fnc_returnConfigEntry;

	if (_openbolt > 0) then {
		_openboltcoef = [(configFile >> "CfgWeapons" >> (primaryweapon player)), "twc_openbolt_coef", 1] call BIS_fnc_returnConfigEntry;

		[{
			if (random 1 < 0.5) then {
				[player, primaryweapon player] call ace_overheating_fnc_jamWeapon;
			};
			[] call openBoltFnc;
		}, [], (random (6000 / _openboltcoef)) + 200] call CBA_fnc_waitAndExecute;
	} else {
		[{ [] call openBoltFnc; }, [], 900] call CBA_fnc_waitAndExecute;
	};
};

[] call openBoltFnc;


//transonic ballistic instability. Means subguns/pistols don't stay accurate beyond 150-200m and 556 rifles can't plink at 900m if you get a good enough scope and some tracers. Also means that longer barrel weapons like the L86 can reach out further, because their higher muzzle velocity means they stay supersonic for longer

player addEventHandler ["Fired", { 
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
	if (!(_unit == player)) exitwith {};
	if (!((vehicle player) == player)) exitwith {};

	//I haven't noticed a performance hit, but don't poke the bear if they're struggling already
	if (diag_fps < 15) exitwith {};

	//if it's much slower than the speed of sound, no buffeting necessary. for ugl's and the like
	if ((speed _projectile) < 950) exitwith {};

	[_projectile, _ammo] spawn {
		params ["_projectile", "_ammo"];

		// wait until the bullet is passing through the sound barrier or it's gone
		waituntil {((((speed _projectile) < 1500))) || (!alive _projectile)};
		if (!alive _projectile) exitwith {}; 

		//caliber detection. 'Caliber' in config is often set up weird to help with penetration, so use hit instead. Multiplies the buffeting by how chunky the bullet is and how far it's gone already to differntiate between high and low velocity bullets
		_mult = (((((((player distance _projectile) * -1) + 2000) * 0.0006) - (((getNumber (configFile >> "CfgAmmo" >> _ammo >> "hit")) - 5) * 0.1)) max 0.01) min (missionnamespace getvariable ["tlimit", 0.5]));


		//systemchat ("transonic at " + (str(player distance _projectile)) + "m with a mult of " + (str _mult));

		//start buffeting. small modifier first, then ramps up to full after a second or two
		_mods = 0;
		while {alive _projectile} do {
			//if it's passed completely through the sound barrier, stop buffeting
			if ((speed _projectile) < 900) exitwith {};
			_projectile setvelocity [(velocity _projectile select 0) + (((random 8) - 4) * (_mult * _mods)), (velocity _projectile select 1) + (((random 8) - 4) * (_mult * _mods)), 	(velocity _projectile select 2) + (((random 4) - 2) * (_mult * _mods))];

			sleep (random 0.4);

			if (_mods < 1) then {
				_mods = _mods + 0.2;
			};
		};
	};
}];


