params [["_box", objNull, [objNull]]];

if (isNull _box) exitWith {};

_returnArray = [];

// types: artillery, launcher, medical, section, other
_returnArray pushBack ["artillery", (_box getVariable ["TWC_Replenish_artillery", -1])];
_returnArray pushBack ["launcher", (_box getVariable ["TWC_Replenish_launcher", -1])];
_returnArray pushBack ["medical", (_box getVariable ["TWC_Replenish_medical", -1])];
_returnArray pushBack ["section", (_box getVariable ["TWC_Replenish_section", -1])];
_returnArray pushBack ["other", (_box getVariable ["TWC_Replenish_other", -1])];

_returnArray