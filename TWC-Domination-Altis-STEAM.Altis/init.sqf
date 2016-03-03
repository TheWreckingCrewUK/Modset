//Hostiles in Base Check
russiancheck = 0;
DebugCheck = False;

if(isServer) then
{
	TWCserverID = profileNameSpace getVariable "TWC_ServerID";
	publicVariable "TWCserverID";
};
execVM "server\init.sqf";