_veh = _this select 0;
if (_veh isKindOf "CH_147F") then {

};

if (_veh isKindOf "CH_147F") then {
//_veh addAction ["<t color='#FF0000'>Jump Out</t>","oh_round_chute\data\scripts\jump_out.sqf"]; //,"",6,false,true,"","_this in _veh"];
_ _veh addAction ["<t color='#FF0000'>Jump Out!</t>", {[nearestObject [player, "RHS_C130J"],player] call TWC_fnc_Jumpout}];
};
if (_veh isKindOf "CAF_CH146_GRIFFON_J") then {

_jumpOutL = _veh addAction ["<t color='#FF0000'>Jump Out Left</t>","oh_round_chute\data\scripts\jump_out.sqf","",6,false,false,"Eject","(player == _this) && {((assignedVehicleRole player) select 0 in ['Cargo'])}"];

_jumpOutR = _veh addAction ["<t color='#00FF00'>Jump Out Right</t>","oh_round_chute\data\scripts\jump_out2.sqf","",6,false,false,"Eject","(player == _this) && {((assignedVehicleRole player) select 0 in ['Cargo'])}"];

};
/*	
if (_veh isKindOf "Heli_Transport_02_base_F") then {
_veh addAction ["<t color='#FF0000'>Jump Out Right</t>","oh_round_chute\data\scripts\jump_out2.sqf"]; //,"",6,false,true,"","_this in _veh"];
_veh addAction ["<t color='#FF0000'>Jump Out Left</t>","oh_round_chute\data\scripts\jump_out.sqf"]; //,"",6,false,true,"","_this in _veh"];
};

if (_veh isKindOf "Heli_Light_02_base_F") then {
_veh addAction ["<t color='#FF0000'>Jump Out Right</t>","oh_round_chute\data\scripts\jump_out2.sqf"]; //,"",6,false,true,"","_this in _veh"];
_veh addAction ["<t color='#FF0000'>Jump Out Left</t>","oh_round_chute\data\scripts\jump_out.sqf"]; //,"",6,false,true,"","_this in _veh"];
};

/*
if (_veh isKindOf "Heli_Transport_01_base_F") then {
_veh addAction ["<t color='#FF0000'>Jump Out Left</t>","jump_out.sqf"]; //,"",6,false,true,"","_this in _veh"];
};

if (_veh isKindOf "I_Heli_light_03_base_F") then {
_veh addAction ["<t color='#FF0000'>Jump Out Right</t>","oh_round_chute\data\scripts\jump_out2.sqf"]; //,"",6,false,true,"","_this in _veh"];
_veh addAction ["<t color='#FF0000'>Jump Out Left</t>","oh_round_chute\data\scripts\jump_out.sqf"]; //,"",6,false,true,"","_this in _veh"];
};
*/
if (_veh isKindOf "C130J") then {

_jumpOutR = _veh addAction ["<t color='#00FF00'>Jump Out Right</t>","oh_round_chute\data\scripts\jump_out2.sqf","",6,false,false,"Eject","(player == _this) && {((assignedVehicleRole player) select 0 in ['Cargo'])}"];

_jumpOutL = _veh addAction ["<t color='#FF0000'>Jump Out Left</t>","oh_round_chute\data\scripts\jump_out.sqf","",6,false,false,"Eject","(player == _this) && {((assignedVehicleRole player) select 0 in ['Cargo'])}"];
};

if (_veh isKindOf "caf_CC130J") then {

_jumpOutR = _veh addAction ["<t color='#00FF00'>Jump Out Right</t>","oh_round_chute\data\scripts\jump_out2.sqf","",6,false,false,"Eject","(player == _this) && {((assignedVehicleRole player) select 0 in ['Cargo'])}"];

_jumpOutL = _veh addAction ["<t color='#FF0000'>Jump Out Left</t>","oh_round_chute\data\scripts\jump_out.sqf","",6,false,false,"Eject","(player == _this) && {((assignedVehicleRole player) select 0 in ['Cargo'])}"];
};