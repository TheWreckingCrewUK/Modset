params["_removeQuestioning"];
_randNumber = floor(random 3);

[5, [_randNumber, _removeQuestioning], {[_this select 0] spawn InsP_fnc_possibleIntel;}, {}, "Questioning civilian..."] call ace_common_fnc_progressBar;