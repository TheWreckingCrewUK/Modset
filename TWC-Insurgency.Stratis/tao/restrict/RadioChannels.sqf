_frequency = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwFrequency;

//waitUntil{!isNull player};
//waitUntil{player == player};

_playerString = str player;
_playerID = getPlayerUID player;

[(call TFAR_fnc_activeSwRadio), "76.2"] call TFAR_fnc_setSwFrequency;

hint format["%1   %2",_frequency,_playerID];




