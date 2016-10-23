waitUntil{!isNull player};
if (!hasInterface) exitWith {};
execVM "Operation_Framework\acre\GiveRadio.sqf";

/*/////////////////////////////////////////////////////////
//                         Base                           /
//                         Setup                          /
/////////////////////////////////////////////////////////*/

[] execVM "operation_framework\base\safezone.sqf";
//[] execVM "operation_framework\base\run.sqf";

