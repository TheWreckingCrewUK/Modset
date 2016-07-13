#define BASE_WEST    [["respawn_west", 150]]
#define ALERT "NO FIRING AT BASE"



if (isDedicated) exitWith {};
waitUntil {!isNull player};

player addEventHandler ["Fired", {
    if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count BASE_WEST > 0 && Russiancheck == 0) then
    {
        { deleteVehicle _x } forEach allDeadMen; 
        
    };
}];



player addEventHandler ["Fired", {
    if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count BASE_WEST > 0 && Russiancheck == 0) then
    {
        deleteVehicle (_this select 6);
        titleText [ALERT, "BLACK IN", 5];
    };
}];


#define BASE_WEST    [["west_1", 300]]
#define ALERT "NO FIRING AT BASE"



if (isDedicated) exitWith {};
waitUntil {!isNull player};

player addEventHandler ["Fired", {
    if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count BASE_WEST > 0 && Russiancheck == 0) then
    {
        { deleteVehicle _x } forEach allDeadMen; 
        
    };
}];



player addEventHandler ["Fired", {
    if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count BASE_WEST > 0 && Russiancheck == 0) then
    {
        deleteVehicle (_this select 6);
        titleText [ALERT, "BLACK IN", 5];
    };
}];


#define BASE_WEST    [["west_2", 300]]
#define ALERT "NO FIRING AT BASE"



if (isDedicated) exitWith {};
waitUntil {!isNull player};

player addEventHandler ["Fired", {
    if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count BASE_WEST > 0 && Russiancheck == 0) then
    {
        { deleteVehicle _x } forEach allDeadMen; 
        
    };
}];



player addEventHandler ["Fired", {
    if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count BASE_WEST > 0 && Russiancheck == 0) then
    {
        deleteVehicle (_this select 6);
        titleText [ALERT, "BLACK IN", 5];
    };
}];
