//Adds extra eventHandlers for key presses
waituntil {!isnull (finddisplay 46)};
(findDisplay 46) displayAddEventHandler ["KeyDown", {
	if(str (_this select 1) == "22")then{
		_handle = createDialog "options_menu";
	};
}];