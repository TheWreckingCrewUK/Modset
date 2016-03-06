
_repeatTasks=false;

MakerArray = ["agiaCenter","tempestCenter","girnaCenter4","connorCenter","cephasCenter","d2Center","maxwellCenter3","oldOutpostCenter3","b7Center","b5Center","kaminoAttack2","b3Center","b1Center","rogainCenter","killFarmAttack1"];

Defenselimit = 14;
countermk1=0;
if (!countermk1 == 14) 
	then {
	
_randomN=floor (random count MakerArray);
_randomScript= MakerArray select randomN;
_spawndefending = [_pos, EAST, (configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Rifle_Squad"] call BIS_fnc_spawnGroup;
[_spawndefending,getmarkerpos _randomScript, 100] call CBA_fnc_taskDefend;
countermk1 = countermk1 + 1;	
	
	};
		
		

		
		
		