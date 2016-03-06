_civilianUnit = _this select 0;
_killer = _this select 1;
_intelCache = _this select 2;

//nonQuestionableList = nonQuestionableList set [(count nonQuestionableList) , _civilianUnit];
//publicVariable "nonQuestionableList";

if (side group _killer == blufor) then {
	InsP_enemyMorale = InsP_enemyMorale - .5;
	publicVariable "InsP_enemyMorale";
};