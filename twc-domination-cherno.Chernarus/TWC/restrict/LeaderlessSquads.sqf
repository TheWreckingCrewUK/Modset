/*waitUntil {!isNull player};
waitUntil {player == player};
sleep 5;
_alphalead = "P1";
_bravolead = "P9";
_charlielead = "P18";
_deltalead = "p37";
_alphasection = [P2,P3,P4,P5,P6,P7,P8];
_bravosection = [P10,P11,P12,P13,p14,p15,p16,P17];
_charliesection = [P19,P20,P21,P22,P23,P24,P25,P26,P27,P28,P29,P30];
_deltasection = [P38,P39,P40,P41,P42,P43,P44];
_echosection = [];

if ((player) in _alphasection) then
{
	if (isNil "P1") then {["end7",false,2] call BIS_fnc_endMission;};
};
if ((player) in _bravosection) then
{
	if (isNil "P9") then {["end7",false,2] call BIS_fnc_endMission;};
};
if ((player) in _charliesection) then
{
	if (isNil "P18") then {["end7",false,2] call BIS_fnc_endMission;};
};
if ((player) in _deltasection) then
{
	if (isNil "p37") then {["end7",false,2] call BIS_fnc_endMission;};
};
if ((player) in _echosection) then
{
	if (isNil _echosection) then {["end7",false,2] call BIS_fnc_endMission;};
};

if (true)exitwith {};


