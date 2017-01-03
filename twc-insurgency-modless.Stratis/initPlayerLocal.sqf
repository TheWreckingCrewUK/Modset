if (!hasInterface) exitWith {};

execVM "client\init.sqf";


if(isMultiplayer)then{
	cutText ["Receiving...", "BLACK", .001];

	titleText ["The Wrecking Crew","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;

	titleText ["Insurgency Plus","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;
};

_specialSlots = ["helo1","helo2","helo3"];

if ((str player) in _specialSlots)then{
	
	_UID = getPlayerUID player;
	if((_UID) != "_SP_PLAYER_" && (_UID) != "76561198070630639")then{	
		_pilots = ["helo1", "helo2","helo3", "helo4"];
		_armourCrew = ["tank1","tank2","tank3"];
		_humancivs = ["humanCiv1", "humanCiv2", "humanCiv3"];
		_mertteam = ["mert_sl","mert_med"];
		_numPlayers = switch (str player) do{
			case "helo1";
			case "helo2";
			case "helo3": {5};
			default {};
		};
		_justPlayers = count(allPlayers - entities "HeadlessClient_F");
		
		_pilotMultiplier = 0;
		if(isPlayer helo1)then{_pilotMultiplier = _pilotMultiplier + 1};
		if(isPlayer helo2)then{_pilotMultiplier = _pilotMultiplier + 1};
		if(isPlayer helo3)then{_pilotMultiplier = _pilotMultiplier + 1};
		
		if ((str player) in _pilots && (_justPlayers * _pilotMultiplier) < _numPlayers) then {
			["End2", false, 0] call BIS_fnc_endMission;
		};
	};
};

if(isMultiplayer)then{
	cutText ["", "BLACK IN", 2];

	titleText ["Enjoy your stay", "PLAIN"];
	titleFadeOut 4;
};