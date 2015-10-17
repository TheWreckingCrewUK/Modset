_repeatTasks=false;

AOlimit = 5;

if (count TaskArray > AOlimit)
	then {

_randomN=floor (random count TaskArray);
_randomScript=TaskArray select _randomN;

	_spawn = [format["%1",_randomScript]] spawn TWC_fnc_AO;;

	if (!_repeatTasks)
				then {

	TaskArray = TaskArray - [_randomScript];

					};
	}else{

 Hint "All AO's Complete Good Job!";
   sleep 20;
		endMission "End5";
		};