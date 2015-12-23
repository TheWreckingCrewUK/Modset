/* Created by [TWC] jayman
*
*Is controlled by the fnc_townclear.sqf
*
*takes the _marker which is equal to the town name
*turns the marker blue if cache is not nearby and
*adds 1 to town captured
*reduces enemy morale by .5
*/

//_marker = _this select 0;

params ["_marker"];

format["'%1' setMarkerColor 'colorWEST'", _marker];
hint format["%1 Captured", _marker];

InsP_enemyMorale = InsP_enemyMorale + .5;
publicVariable "InsP_enemyMorale";

InsP_townCapture = InsP_townCapture + 1;
publicVariable "InsP_townCapture";