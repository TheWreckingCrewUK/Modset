/*
* Creates an event Handler on AI to update a players killed list.
*/

{
	if!(isPlayer _x)then{
		_x addEventHandler ["Hit", {
			if((_this select 0) != (_this select 1) && isPlayer (_this select 1))then{
				[(_this select 0)] remoteExecCall ["twc_fnc_updatePlayerKills",(_this select 1)];
			};
		}];
}forEach allUnits;