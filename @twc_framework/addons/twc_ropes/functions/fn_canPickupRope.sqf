params ["_rope"];

isNull (player getVariable ["twc_Rope_Cargo_Ropes_Picked_Up", objNull])
 && vehicle player == player
 && (_rope getVariable ["twc_rope_end", false]);