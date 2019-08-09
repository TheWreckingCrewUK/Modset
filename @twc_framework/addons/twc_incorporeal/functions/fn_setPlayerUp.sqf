/** Run once player object is initalized. **/

[player, currentWeapon player, currentMuzzle player] call TWC_fnc_silentSafety;
enableRadio false;
player disableConversation true;
player action ["WeaponOnBack", player];

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