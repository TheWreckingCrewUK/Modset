/*
* Written by [TWC] jayman
*
* Gives a black screen to the armour crew until all 3 of them are in game
* This forces teamwork & is written in a simple way to move to other units
*/
//MP check so units work in editor
if(!isMultiplayer)exitWith{};
cutText ["", "Black", 0.001];
player forceWalk true;

while {!isPlayer tank1 || !isPlayer tank2 || !isPlayer tank3}do{
    [
        "<t size='1.2'>Armour Crew</t><br/><t size='0.6'>You need all 3 members of the Armour Crew to be in game before you can proceed.</t>", 0, 0.22, 5, 0, 0, 2
    ] spawn bis_fnc_dynamictext;
	sleep 5;
};
cutText ["","Black IN",5];
player forceWalk false;