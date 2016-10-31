execVM "client\zeus\zeus.sqf";
execVM "IgiLoad\IgiLoadInit.sqf";
if(isnil "commanderPresent")then{
	commanderPresent = 0;
	publicVariable "commanderPresent";
};