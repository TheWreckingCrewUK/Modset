waitUntil{!isNull player};
[player] join grpNull ;
player enableFatigue false;
player addEventHandler ["killed", {player setvariable ["HasBeenKilled",True,True]}];
execVM "Operation_Framework\acre\GiveRadio.sqf";
if (!hasInterface) exitWith {};

for "_i" from 1 to 6 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 6 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 6 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 6 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_tourniquet";

player linkItem "itemMap";

