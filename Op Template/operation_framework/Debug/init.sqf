if (vehicle player == player) then {
player addEventHandler ["fired", "diag_log _this"];
player addEventHandler ["Killed", "diag_log _this"];
}