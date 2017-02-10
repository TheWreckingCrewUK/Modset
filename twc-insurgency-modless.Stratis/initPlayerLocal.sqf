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

_specialSlots = ["helo1","helo2","helo3","tank1","tank2","tank3","apache1","apache2"];
if ((str player) in _specialSlots)then{
	
	_UID = getPlayerUID player;
	if((_UID) != "_SP_PLAYER_" && (_UID) != "76561198070630639")then{	
		_pilots = ["helo1", "helo2","helo3", "helo4"];
		_armourCrew = ["tank1","tank2","tank3"];
		_apachePilots = ["apache1","apache2"];
		_numPlayers = switch (str player) do{
			case "helo1";
			case "helo2";
			case "helo3": {5};
			case "tank1";
			case "tank2";
			case "tank3": {10};
			case "apache1";
			case "apache2": {20};
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
		if ((str player) in _armourCrew && _justPlayers < _numPlayers) then {
			["End3", false, 0] call BIS_fnc_endMission;
		};
		if ((str player) in _apachePilots && _justPlayers < _numPlayers) then {
			["End3", false, 0] call BIS_fnc_endMission;
		};
	};
};

if(isMultiplayer)then{
	cutText ["", "BLACK IN", 2];

	titleText ["Enjoy your stay", "PLAIN"];
	titleFadeOut 4;
};