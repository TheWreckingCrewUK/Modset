addMissionEventHandler ["EntityKilled",{
	params["_killed","_killer","_instigator"];
	if(side _killed == Civilian && side _killer == West)then{
		format["%1 killed a civillian", name _killer] remoteExecCall ["hint",0];
		globalCivOpinion = globalCivOpinion - 1;
		publicVariable "globalCivOpinion";
	};
}];