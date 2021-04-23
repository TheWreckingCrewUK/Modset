#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"TWC_Cache_Enabled",
	"CHECKBOX",
	"Enable Caching",
	["TWC", "Cache Settings"],
	true,
	1,
	{ _this call TWC_Cache_fnc_updatedSettings }, // support dynamic disabling/enabling
	false
] call CBA_fnc_addSetting;

// Rest of ranges etc. are managed by the module, which is slightly easier to manage overall