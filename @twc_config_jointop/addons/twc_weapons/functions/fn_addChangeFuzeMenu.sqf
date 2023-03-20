{
	_x params ["_mag"];

	[
		_mag,
		"CONTAINER",
		"Change Fuze",
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		[
			{true},
			{true}
		],
		{
			params ["_unit", "", "", "_slot", "_mag"];
			
			private _display = createDialog ["L14A1Dialog", true];
			_display setVariable ["TWC_L14A1_Magazine", _mag];
			_display setVariable ["TWC_L14A1_Slot", _slot];
			
			false
		},
		true,
		_mag
	] call CBA_fnc_addItemContextMenuOption;
} forEach [
	"TWC_Magazine_L14A1_HE", "TWC_Magazine_L14A1_Illum",
	"TWC_Magazine_L14A1_HE_200", "TWC_Magazine_L14A1_Illum_200",
	"TWC_Magazine_L14A1_HE_300", "TWC_Magazine_L14A1_Illum_300",
	"TWC_Magazine_L14A1_HE_400", "TWC_Magazine_L14A1_Illum_400",
	"TWC_Magazine_L14A1_HE_500", "TWC_Magazine_L14A1_Illum_500",
	"TWC_Magazine_L14A1_HE_600", "TWC_Magazine_L14A1_Illum_600",
	"TWC_Magazine_L14A1_HE_700", "TWC_Magazine_L14A1_Illum_700",
	"TWC_Magazine_L14A1_HE_800", "TWC_Magazine_L14A1_Illum_800",
	"TWC_Magazine_L14A1_HE_900", "TWC_Magazine_L14A1_Illum_900",
	"TWC_Magazine_L14A1_HE_1000", "TWC_Magazine_L14A1_Illum_1000",
	"TWC_Magazine_L14A1_HE_1100", "TWC_Magazine_L14A1_Illum_1100",
	"TWC_Magazine_L14A1_HE_1200", "TWC_Magazine_L14A1_Illum_1200",
	"TWC_Magazine_L14A1_HE_1300", "TWC_Magazine_L14A1_Illum_1300",
	"TWC_Magazine_L14A1_HE_1400", "TWC_Magazine_L14A1_Illum_1400",
	"TWC_Magazine_L14A1_HE_1500", "TWC_Magazine_L14A1_Illum_1500",
	"TWC_Magazine_L14A1_HE_1600", "TWC_Magazine_L14A1_Illum_1600",
	"TWC_Magazine_L14A1_HE_1700", "TWC_Magazine_L14A1_Illum_1700",
	"TWC_Magazine_L14A1_HE_1800", "TWC_Magazine_L14A1_Illum_1800",
	"TWC_Magazine_L14A1_HE_1900", "TWC_Magazine_L14A1_Illum_1900",
	"TWC_Magazine_L14A1_HE_2000", "TWC_Magazine_L14A1_Illum_2000",
	"TWC_Magazine_L14A1_HE_2100", "TWC_Magazine_L14A1_Illum_2100",
	"TWC_Magazine_L14A1_HE_2200", "TWC_Magazine_L14A1_Illum_2200",
	"TWC_Magazine_L14A1_HE_2300", "TWC_Magazine_L14A1_Illum_2300"
];