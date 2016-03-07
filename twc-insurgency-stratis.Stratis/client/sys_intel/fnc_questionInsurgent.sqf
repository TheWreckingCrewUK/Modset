_randNumber = floor(random 2);
_removeQuestioning = cursorObject;//Cursor object is a scripting command not a variable like sqf highlighting will make you believe.

if (!alive _removeQuestioning) then {
	hintSilent "If you wish to interrogate Insurgents you must not kill them.";
}else{
	[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntelInsurgent;}, {}, "Interrogating Insurgent..."] call ace_common_fnc_progressBar;
};