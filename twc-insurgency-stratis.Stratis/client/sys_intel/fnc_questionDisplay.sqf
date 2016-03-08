_randNumber = floor(random 3);
_removeQuestioning = cursorObject;//Cursor object is a scripting command not a variable like sqf highlighting will make you believe.


if (!alive _removeQuestioning) then {
	hintSilent "You can not question the \ndead without a ouija board.";
}else{
	[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntel;}, {}, "Questioning civilian..."] call ace_common_fnc_progressBar;
};