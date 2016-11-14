/*
* When player is initialized it will delete the players map if they are in the array
*
*/

_remove = ["ColdWar_Rifleman","ColdWar_Rifleman_SUIT","ColdWar_AT","ColdWar_AT_ASS","ColdWar_MG","ColdWar_MG_AS"];

if((typeOf player) in _remove)then{ 
	player unassignItem "itemMap"; 
	player removeItem "itemMap"; 
};