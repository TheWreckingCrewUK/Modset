/* Starts the main server thead
* This is used for all time based events.
* obviusly we want to avoid this as much as possible
*/
enemyManpower = 10000;
publicVariable "enemyManpower";
enemyMoney = 100000;
publicVariable "enemyMoney";

friendlyManpower = 0;
publicVariable "friendlyManpower";
friendlyMoney = 10000;
publicVariable "friendlyMoney";

opforOpinion = 0;
publicVariable "opforOpinion";
bluforOpinion = 0;
publicVariable "bluforOpinion";

//Waits 5 minutes from mission start to begin
waitUntil {time > 300};

while{true}do{

	sleep 300;
};