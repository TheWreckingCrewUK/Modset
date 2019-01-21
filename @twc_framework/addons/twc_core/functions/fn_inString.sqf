params ["_needle", "_haystack"];

_needleLen = count toArray _needle;
_hay = +_haystack;
_hay resize _needleLen;
_found = false;

for "_i" from _needleLen to count _haystack do {
	if (toString _hay == _needle) exitWith {_found = true};
	_hay set [_needleLen, _haystack select _i];
	_hay set [0, "x"];
	_hay = _hay - ["x"]
};

_found