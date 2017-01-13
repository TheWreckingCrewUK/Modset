params["_removeQuestioning"];
_randNumber = floor(random 3 + -InsP_civTrust);
_randNumber = switch (_randNumber) do {
	case (_randNumber < 0) : {0};
	case (_randNumber > 6) : {6};
	default {_randNumber};
};
[_randNumber,_removeQuestioning] spawn InsP_fnc_possibleIntel;