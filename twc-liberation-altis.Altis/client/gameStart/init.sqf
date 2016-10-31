/*
* Written by [TWC] jayman
*
* Gives a black screen until the variable = 0
*/
if(commanderPresent == 1)exitWith{};
cutText ["", "Black", 0.001];
player forceWalk true;

while {commanderPresent == 0}do{
    [
        "<t size='1.2'>No Commander</t><br/><t size='0.6'>The commander must be present before you may begin.</t>", 0, 0.22, 5, 0, 0, 2
    ] spawn bis_fnc_dynamictext;
	sleep 5;
};
cutText ["","Black IN",5];
player forceWalk false;