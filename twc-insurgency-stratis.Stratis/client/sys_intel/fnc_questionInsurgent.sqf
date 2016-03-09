_randNumber = floor(random 2);
_removeQuestioning = cursorObject;//Cursorobject is a scripting command not a variable like sqf highlighting will make you believe.

if(floor InsP_enemyMorale <= -4) exitWith{hintSilent "You are destroying my country. You will have to kill me before I help you!"};

if (!alive _removeQuestioning) then {
	hintSilent "If you wish to interrogate Insurgents you must not kill them.";
}else{
	[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntelInsurgent;}, {}, "Interrogating Insurgent..."] call ace_common_fnc_progressBar;
};