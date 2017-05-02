params["_unit"];
_group = group _unit;
{
	_x setVariable ["NOAI",1,false];
	_x disableAI "path";
}forEach units _group;

waitUntil{groupOwner _group != 2};

{
	_x disableAI "path";
}forEach units _group;