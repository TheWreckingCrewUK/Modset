execVM "scripts\Zues\Zues1.sqf";
execVM "scripts\Zues\Zues2.sqf";
execVM "scripts\Zues\Zues3.sqf";
execVM "scripts\Zues\Zues4.sqf";
execVM "scripts\Zues\Zues5.sqf";
execVM "scripts\Zues\Zues6.sqf";
execVM "scripts\Zues\Zues7.sqf";
execVM "scripts\Zues\Zues8.sqf";
execVM "scripts\Zues\Zues9.sqf";
execVM "scripts\Zues\Zues10.sqf";
execVM "scripts\Zues\Admin.sqf";

execVM "Scripts\cqbrange\cqbrandomtargets.sqf";

if ((str player) == "S10")then{
	_UID = getPlayerUID player;
	if((_UID) != "_SP_PLAYER_")then{
		_management = ["76561198010598279","76561198050512686","76561198070630639"];
		if (!(_UID) in _management) then {
            ["End1", false, 0] call BIS_fnc_endMission;
        };
    };    
};