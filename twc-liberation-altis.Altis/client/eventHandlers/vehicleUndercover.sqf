player addEventHandler ["getInMan",{
	if(headGear player == "" && faction (vehicle player) == "CIV_F")then{
		hint "You are now undercover";
		player setCaptive true;
	};
}];