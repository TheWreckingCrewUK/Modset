_randNumber = floor(random 7);
_removeQuestioning = getPos player nearestObject "LOP_Tak_Civ_Man_01";

if (!alive _removeQuestioning) then {
	hintSilent "You can not give it to a dead civillian.";
}else{
	[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_cangiveaid;}, {}, "Giving Civillian Humanitarian Aid box..."] call ace_common_fnc_progressBar;
};
