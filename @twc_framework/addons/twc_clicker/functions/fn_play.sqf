params ["_player"];

if ("TWC_Item_Clicker" in items _player && TWC_CLICKER_PLAY && (count TWC_CLICKER_PLAY_QUEUE < 3)) then {
	[_player, "TWC_Sound_Clicker_1"] remoteExecCall ["say3D"];

	TWC_CLICKER_PLAY = false;
	TWC_CLICKER_PLAY_QUEUE pushBack "played";
	["TWC_Clicker_Sounded", _player] call CBA_fnc_localEvent;

	[
		{
			if (count TWC_CLICKER_PLAY_QUEUE > 0) then {
				TWC_CLICKER_PLAY_QUEUE deleteAt 0;
			};
		}, 
		[],
		20
	] call CBA_fnc_waitAndExecute;
};