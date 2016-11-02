/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/

player addEventHandler ["Fired", {
    if ((_this select 0) distance getMarkerPos "respawn_west" < 200) then
    {
        deleteVehicle (_this select 6);
		hintc "NO FIRING AT BASE";
		hintC_EH = findDisplay 57 displayAddEventHandler ["unload",{
			0 = _this spawn {
				_this select 0 displayRemoveEventHandler ["unload", hintC_EH];
				hintSilent "";
			};
		}];
    };
}];