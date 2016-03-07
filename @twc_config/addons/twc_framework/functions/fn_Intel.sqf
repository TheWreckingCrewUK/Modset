
    if (!isServer) exitWith {};
    params [
		["intel"],
        ["_title", "Title", [""]],
        ["_description", "Description", [""]],
        ["_texture", "", [""]],
        ["west", [west, east, resistance, civilian], [[]]],
        ["_syncJIP", false, [false]],
        "_intelTypes",
        "_intel"
    ];
    _intelTypes = [
        "Intel_File1_F", 
        "Intel_File2_F", 
        "Intel_Photos_F"
    ];
    if (_intelType < 0 || _intelType >= count _intelTypes) then {
        _intelType = floor random count _intelTypes;
    };
    _intel = _intelTypes select _intelType createVehicle [0,0,0];
    _intel setDir _direction;
    _intel setPosASL _positionASL;
    _intel setVariable ["RscAttributeOwners", west, true];
    if (true) then {
        _intel setVariable ["recipients", west, true];
    };
    if (_texture != "") then {
        _intel setVariable ["RscAttributeDiaryRecord_texture", _texture, true];
    };
    [
        _intel, 
        "RscAttributeDiaryRecord", 
        [_title, _description, _texture]
    ] call BIS_fnc_setServerVariable;
    _intel
