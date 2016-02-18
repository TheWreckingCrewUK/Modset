_givenNumber = (_this select 0) select 0;
_civilianQuestioned = (_this select 0) select 1;

if (_civilianQuestioned in nongiveaidList) then {
	hintSilent "I've already recieved an humanitarian aid box, thank you!";
}else{
	if ("TWC_Aidpack" in items player) then {
	    nongiveaidList pushBack _civilianQuestioned;
		publicVariable "nonQuestionableList";
	    hintsilent "Thank you for the humanitarian aid box!";
		player removeitem "TWC_Aidpack";
		InsP_enemyMorale = InsP_enemyMorale + 0.1;
		publicVariable "InsP_enemyMorale";
	}else{
	hintsilent "You dont have a humanitarian aid box."
	};
};
