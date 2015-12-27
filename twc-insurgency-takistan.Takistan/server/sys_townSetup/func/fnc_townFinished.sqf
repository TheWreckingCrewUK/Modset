/* Created by [TWC] jayman
*
*Is controlled by the fnc_townclear.sqf
*
*takes the _marker which is equal to the town name
*turns the marker blue if cache is not nearby and
*adds 1 to town captured
*reduces enemy morale by .25
*/

params ["_marker"];

_marker setmarkercolor "colorblue";
hint format["%1 Captured", _marker];

InsP_enemyMorale = InsP_enemyMorale + .25;
publicVariable "InsP_enemyMorale";

InsP_townCapture = InsP_townCapture + 1;
publicVariable "InsP_townCapture";