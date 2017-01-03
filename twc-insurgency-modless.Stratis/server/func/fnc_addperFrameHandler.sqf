params [["_function", {}, [{}]], ["_delay", 0, [0]], ["_args", []]];

if (_function isEqualTo {}) exitWith {-1};

if (isNil QGVAR(PFHhandles)) then {
    GVAR(PFHhandles) = [];
};

if (count GVAR(PFHhandles) >= 999999) exitWith {
    WARNING("Maximum amount of per frame handlers reached!");
    diag_log _function;
    -1
};

private _handle = GVAR(PFHhandles) pushBack count GVAR(perFrameHandlerArray);

GVAR(perFrameHandlerArray) pushBack [_function, _delay, diag_tickTime, diag_tickTime, _args, _handle];

_handle