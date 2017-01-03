{
    // don't run init and initPost event handlers on objects that already exist
    SETINITIALIZED(_x);
} forEach (entities "" + allUnits);

GVAR(entities) = [];

[{
    private _entities = entities "" + allUnits;

    if !(_entities isEqualTo GVAR(entities)) then {
        GVAR(entities) = _entities;

        {
            if !(ISPROCESSED(_x)) then {
                _x call CBA_fnc_initEvents;

                if !(ISINITIALIZED(_x)) then {
                    _x call CBA_fnc_init;
                };
            };
            nil
        } count _entities;
    };
}, 0.1, []] call CBA_fnc_addPerFrameHandler;