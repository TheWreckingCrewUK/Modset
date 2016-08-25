#define BASE_WEST    [["respawn_west", 200]]
#define ALERT "NO FIRING AT BASE"



if (isDedicated) exitWith {};
waitUntil {!isNull player};

player addEventHandler ["Fired", {
    if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count BASE_WEST > 0 && Russiancheck == 0) then
    {
        deleteVehicle (_this select 6);
		hintc ALERT;
		hintC_EH = findDisplay 57 displayAddEventHandler ["unload",{
			0 = _this spawn {
				_this select 0 displayRemoveEventHandler ["unload", hintC_EH];
				hintSilent "";
			};
		}];
    };
}];

