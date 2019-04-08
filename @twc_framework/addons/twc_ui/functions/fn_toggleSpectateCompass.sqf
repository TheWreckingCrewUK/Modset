params [["_isToggle", false], ["_setTo", false]];

if (isNil "TWC_UI_SpectateCompassToggle") then { TWC_UI_SpectateCompassToggle = false };

if (_isToggle) then {
	((findDisplay 60000) displayCtrl 162555) ctrlShow TWC_UI_SpectateCompassToggle;
	TWC_UI_SpectateCompassToggle = !TWC_UI_SpectateCompassToggle;
} else {
	((findDisplay 60000) displayCtrl 162555) ctrlShow _setTo;
	TWC_UI_SpectateCompassToggle = _setTo;
};
