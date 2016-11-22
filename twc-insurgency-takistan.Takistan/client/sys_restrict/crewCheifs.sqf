/*
*
* Written by [TWC] jayman
* gives crew cheifs a black screen if they log in without their pilot
* Stops idiots from Piloting as the crew chief
*/
//MP check so units work in editor
if(!isMultiplayer)exitWith{};
cutText ["", "Black", 0.001];
player forceWalk true;

if (player == helo2)then{

	while {!isPlayer helo2}do{
		[
			"<t size='1.2'>Crew Cheif</t><br/><t size='0.6'>You cannot Crew Cheif without your pilot. Perhaps switch to pilot?</t>", 0, 0.22, 5, 0, 0, 2
		] spawn bis_fnc_dynamictext;
		sleep 5;
	};
};

if (player == helo4)then{
	while {!isPlayer helo3}do{
		[
			"<t size='1.2'>Crew Cheif</t><br/><t size='0.6'>You cannot Crew Cheif without your pilot. Perhaps switch to pilot?</t>", 0, 0.22, 5, 0, 0, 2
		] spawn bis_fnc_dynamictext;
		sleep 5;
	};
};

cutText ["","Black IN",5];
player forceWalk false;