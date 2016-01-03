sleep 5;
_alphalead = "P1";
_bravolead = "P9";
_charlielead = "P18";
_deltalead = ;
_echolead = ;`
_alphasection = [P2,P3,P4,P5,P6,P7,P8];
_bravosection = [P10,P11,P12,P13,p14,p15,p16,P17];
_charliesection = [P19,P20,P21,P22,P23,P24,P25,P26,P27,P28,P29,P30];
_deltasection = [];
_echosection = [];

if (player in _alphasection) then
{
	if (isNil _alphalead) then {["end7",false,2] call BIS_fnc_endMission;};
};
if (player in _bravosection) then
{
	if (isNil _bravosection) then {["end7",false,2] call BIS_fnc_endMission;};
};
if (player in _charliesection) then
{
	if (isNil _charliesection) then {["end7",false,2] call BIS_fnc_endMission;};
};
if (player in _deltasection) then
{
	if (isNil _deltasection) then {["end7",false,2] call BIS_fnc_endMission;};
};
if (player in _echosection) then
{
	if (isNil _echosection) then {["end7",false,2] call BIS_fnc_endMission;};
};


