_randNumber = floor(random 4);
_removeQuestioning = cursorObject; //CursorObject is a scripting command not a variable like sqf highlighting will make you believe.
if (typeOf _removeQuestioning != "C_Man_1") then 
{
	_removeQuestioning = getPos player nearestObject "C_Man_1";
};

if(floor InsP_civTrust <= -4) exitWith{hintSilent "You are destroying my country. You will have to kill me before I help you!"};

if (!alive _removeQuestioning) then {
	hintSilent "You can not question the \ndead without a ouija board.";
}else{
	[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntel;}, {}, "Questioning civilian..."] call ace_common_fnc_progressBar;
};