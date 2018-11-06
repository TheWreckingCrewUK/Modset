params [["_isToggle", false], ["_setTo", false]];

if (_isToggle) then {
	if (isNil "TWC_UI_SpectateCompassToggle") then { TWC_UI_SpectateCompassToggle = false };
	
	((findDisplay 60000) displayCtrl 162555) ctrlShow TWC_UI_SpectateCompassToggle;
	TWC_UI_SpectateCompassToggle = !TWC_UI_SpectateCompassToggle;
} else {
	((findDisplay 60000) displayCtrl 162555) ctrlShow _setTo;
};
