/*
* When player is initialized it will delete the players map if they are in the array
*
*/

_remove = 
[
	"ColdWar_Rifleman","ColdWar_Rifleman_SUIT","ColdWar_AT","ColdWar_AT_ASS","ColdWar_MG","ColdWar_MG_AS", 

	"WW2_British_Medic","WW2_British_Section_Commander","WW2_British_Rifleman","WW2_British_2IC","WW2_British_MG","WW2_British_MGASS"
];

if((typeOf player) in _remove)then{ 
	player unassignItem "itemMap"; 
	player removeItem "itemMap"; 
};

west setFriend [Independent, 0];