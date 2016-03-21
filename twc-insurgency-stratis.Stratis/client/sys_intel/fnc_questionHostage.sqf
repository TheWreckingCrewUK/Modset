_randNumber = 0;
_removeQuestioning = cursorObject; //CursorObject is a scripting command not a variable like sqf highlighting will make you believe.
if (typeOf _removeQuestioning != "C_Man_hunter_1_F") then 
{
	_removeQuestioning = getPos player nearestObject "C_Man_hunter_1_F";
};


if (!alive _removeQuestioning) then {
	hintSilent "You can not question the \ndead without a ouija board.";
}else{
	[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntelHostage;}, {}, "Questioning civilian..."] call ace_common_fnc_progressBar;
};