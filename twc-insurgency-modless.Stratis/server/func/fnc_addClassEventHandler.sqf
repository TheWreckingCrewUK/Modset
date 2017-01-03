params [["_className", "", [""]], ["_eventName", "", [""]], ["_eventFunc", {}, [{}]], ["_allowInheritance", true, [false]], ["_excludedClasses", [], [[]]], ["_applyInitRetroactively", false, [false]]];

private _config = configFile >> "CfgVehicles" >> _className;

// init fallback loop when executing on incompatible class for the first time
if (!GVAR(fallbackRunning) && {ISINCOMP(_className)}) then {
    diag_log text format ["[XEH]: One or more children of class %1 do not support Extended Event Handlers. Fall back to loop.", configName _config];
    call CBA_fnc_startFallbackLoop;
};

// no such CfgVehicles class
if (!isClass _config) exitWith {false};

_eventName = toLower _eventName;

// no such event
if (_eventName == "FiredBIS") exitWith {
    WARNING("Cannot add 'FiredBIS' - Use 'Fired' instead");
    false
};
if !(_eventName in GVAR(EventsLowercase)) exitWith {false};

// don't use "apply retroactively" for non init events
if (_applyInitRetroactively && {!(_eventName in ["init", "initpost"])}) then {
    _applyInitRetroactively = false;
};

// add events to already existing objects
private _entities = entities "" + allUnits;
private _eventVarName = format [QGVAR(%1), _eventName];

{
    if (_x isKindOf _className) then {
        private _unit = _x;

        if (ISKINDOF(_unit,_className,_allowInheritance,_excludedClasses)) then {
            if (isNil {_unit getVariable _eventVarName}) then {
                _unit setVariable [_eventVarName, []];
            };

            (_unit getVariable _eventVarName) pushBack _eventFunc;

            //Run initReto now if the unit has already been initialized
            if (_applyInitRetroactively && {ISINITIALIZED(_unit)}) then {
                [_unit] call _eventFunc;
            };
        };
    };
} forEach (_entities arrayIntersect _entities); // filter duplicates

// define for units that are created later
private _events = EVENTHANDLERS(_eventName,_className);

_events pushBack [_eventFunc, _allowInheritance, _excludedClasses];

SETEVENTHANDLERS(_eventName,_className,_events);

// set flag for this event handler to be used on this class. reduces overhead on init.
private _eventNameFlagsVarName = format [QGVAR(::%1), _className];
private _eventNameFlags = missionNamespace getVariable [_eventNameFlagsVarName, []];

if !(_eventName in _eventNameFlags) then {
    _eventNameFlags pushBack _eventName;
    missionNamespace setVariable [_eventNameFlagsVarName, _eventNameFlags];
};

true