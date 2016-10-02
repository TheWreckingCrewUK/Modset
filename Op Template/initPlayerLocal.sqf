waitUntil{!isNull player};
execVM "Operation_Framework\acre\GiveRadio.sqf";
if (!hasInterface) exitWith {};

player linkItem "itemMap";
player addItem "ACRE_PRC343";

