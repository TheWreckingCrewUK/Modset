_closetUnits = nearestObjects [player, ["Man"], 20];

{
	vehicle _x setpos [_this select 0, _this select 1, _this select 2];
} foreach _closetUnits;