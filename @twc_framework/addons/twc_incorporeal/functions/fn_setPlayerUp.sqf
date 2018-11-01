/** Run once player object is initalized. **/

[player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
enableRadio false;
player disableConversation true;

if (!isNil "ForwardBasePos" && !(player getVariable ["twc_ignoreForwardBase", false])) then {
	player setPos ForwardBasePos;
	["ForwardBasePos"] spawn {twc_fnc_reconnected};
} else {
	["NormalBase"] spawn {twc_fnc_reconnected};
};

if !((goggles player) in approvedFacewear) then {
	removeGoggles player;
};

if !(player getVariable ["twc_keepMap", false]) then {
	player unassignItem "itemMap"; 
	player removeItem "itemMap"; 
};

1 enableChannel false;