if (_this < 0) then {
	str ceil _this + (str (_this - ceil _this) select [2])
} else {
	str floor _this + (str (_this - floor _this) select [1])
};