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
