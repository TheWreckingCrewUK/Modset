params ["_target"];

#define ALL_RANKS ["PRIVATE", "CORPORAL", "SERGEANT", "LIEUTENANT", "CAPTAIN", "MAJOR", "COLONEL"]

private _icon = ACE_nametags_factionRanks getVariable (_target getVariable ["ace_nametages_faction", faction _target]);

if (!isNil "_icon") then {
	_icon = _icon param [ALL_RANKS find rank _target, ""];
} else {
	_icon = format ["\A3\Ui_f\data\GUI\Cfg\Ranks\%1_gs.paa", rank _target];
};

_icon