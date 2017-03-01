params["_group"];

{
	if(leader _x != _x)then{
		_x enableSimulationGlobal true;
		_x hideObjectGlobal false;
	};
}forEach units _group;