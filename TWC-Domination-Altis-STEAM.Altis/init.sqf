//Hostiles in Base Check
russiancheck = 0;
DebugCheck = False;

if(isServer) then
{
	TWCserverID = profileNameSpace getVariable "TWC_ServerID";
	publicVariable "TWCserverID";
};
execVM "server\init.sqf";

execVM "client\init.sqf";
execVM "client\zeus\zeus.sqf";
execVM "client\zeus\zeus-Fakematty.sqf";
execVM "client\zeus\zeus-jayman.sqf";


_pilots = ["p31", "p32"];

if ((str player) in _pilots && (count playableUnits) < 5) then {
    ["end4", false, 0] call BIS_fnc_endMission;
};