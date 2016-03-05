_randNumber = floor(random 2);
_removeQuestioning = getPos player nearestObject "C_man_1";

if (!alive _removeQuestioning) then {
	hintSilent "You can not question the \ndead without a ouija board.";
}else{
	[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntel;}, {}, "Questioning civilian..."] call ace_common_fnc_progressBar;
};
