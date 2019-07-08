params ["_player"];

if ("TWC_Item_Clicker" in items _player) then {
	[_player, ["TWC_Sound_Clicker_1"]] remoteExecCall ["say3D"];
};