params["_removeQuestioning"];
_randNumber = floor(random 4);

if(floor InsP_civTrust <= -4) exitWith{hintSilent "You are destroying my country. You will have to kill me before I help you!"};

[10, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntel;}, {}, "Questioning civilian..."] call ace_common_fnc_progressBar;