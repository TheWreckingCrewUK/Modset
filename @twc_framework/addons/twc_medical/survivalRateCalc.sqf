/*
 *
 * Just a basic SQF file to be called from the debug menu, to calculate average time under CPR until rescuitation.
 * Assumes only one person is conducting CPR. Divide the total by the number of people doing CPR for a rough estimate.
 *
 * Displays both in system chat (as well as copies to clipboard for SP).
 *
 */
 
// let's establish some base values
 
// multi-dimensional array that'll hold for each blood volume level: [startingBloodVol, wasMedic, wasEpid, calculatedProbability, timesTilWoke]
_results = [];

_startingBloodVol = 1;

while (_startingBloodVol != 0) do {
	_diceRoll = floor(random 105);
	
	for "_i" from 0 to 1 do {
		if (_i == 0) then {
			for "_j" from 0 to 1 do {
				if (_j == 0) then {
					// medic & epi
					_result = [];
					_result pushBack _startingBloodVol;
					_result pushBack true;
					_result pushBack true;
					
					_calculatedProbability = 5; // five base chance for medic
					_calculatedProbability = _calculatedProbability + 5; // epi
					_calculatedProbability = _calculatedProbability - (10 - (10 * _startingBloodVol)); // blood loss
					_result pushBack _calculatedProbability;
					
					_timesTilWoke = 0;
					_unCon = true;
					while (_unCon) then {
						_timesTilWoke = _timesTilWoke + 1;
						if ( _calculatedProbability >= _diceRoll ) then {
							_unCon = false;
						};
						
						_diceRoll = floor(random 105);
					};
					
					_result pushBack _timesTilWoke;
					systemChat format [
						"Starting Blood Vol: %1, Medic: %2, Epi'd: %3, Chance: %4, Times For Woke: %5",
						_startingBloodVol
						true,
						true,
						_calculatedProbability,
						_timesTilWoke
					];
					_results pushBack _result;
				} else {
					// medic & no epi
					_result = [];
					_result pushBack _startingBloodVol;
					_result pushBack true;
					_result pushBack false;
					
					_calculatedProbability = 5; // five base chance for medic
					//_calculatedProbability = _calculatedProbability + 5; // epi
					_calculatedProbability = _calculatedProbability - (10 - (10 * _startingBloodVol)); // blood loss
					_result pushBack _calculatedProbability;
					
					_timesTilWoke = 0;
					_unCon = true;
					while (_unCon) then {
						_timesTilWoke = _timesTilWoke + 1;
						if ( _calculatedProbability >= _diceRoll ) then {
							_unCon = false;
						};
						
						_diceRoll = floor(random 105);
					};
					
					_result pushBack _timesTilWoke;
					systemChat format [
						"Starting Blood Vol: %1, Medic: %2, Epi'd: %3, Chance: %4, Times For Woke: %5",
						_startingBloodVol
						true,
						false,
						_calculatedProbability,
						_timesTilWoke
					];
					_results pushBack _result;
				};
			};
		} else {
			for "_j" from 0 to 1 do {
				if (_j == 0) then {
					// non-medic & epi
					_result = [];
					_result pushBack _startingBloodVol;
					_result pushBack false;
					_result pushBack true;
					
					_calculatedProbability = 2; // two base chance for non-medic
					_calculatedProbability = _calculatedProbability + 5; // epi
					_calculatedProbability = _calculatedProbability - (10 - (10 * _startingBloodVol)); // blood loss
					_result pushBack _calculatedProbability;
					
					_timesTilWoke = 0;
					_unCon = true;
					while (_unCon) then {
						_timesTilWoke = _timesTilWoke + 1;
						if ( _calculatedProbability >= _diceRoll ) then {
							_unCon = false;
						};
						
						_diceRoll = floor(random 105);
					};
					
					_result pushBack _timesTilWoke;
					systemChat format [
						"Starting Blood Vol: %1, Medic: %2, Epi'd: %3, Chance: %4, Times For Woke: %5",
						_startingBloodVol
						false,
						true,
						_calculatedProbability,
						_timesTilWoke
					];
					_results pushBack _result;
				} else {
					// non-medic & no epi
					_result = [];
					_result pushBack _startingBloodVol;
					_result pushBack false;
					_result pushBack false;
					
					_calculatedProbability = 2; // two base chance for non-medic
					//_calculatedProbability = _calculatedProbability + 5; // epi
					_calculatedProbability = _calculatedProbability - (10 - (10 * _startingBloodVol)); // blood loss
					_result pushBack _calculatedProbability;
					
					_timesTilWoke = 0;
					_unCon = true;
					while (_unCon) then {
						_timesTilWoke = _timesTilWoke + 1;
						if ( _calculatedProbability >= _diceRoll ) then {
							_unCon = false;
						};
						
						_diceRoll = floor(random 105);
					};
					
					_result pushBack _timesTilWoke;
					systemChat format [
						"Starting Blood Vol: %1, Medic: %2, Epi'd: %3, Chance: %4, Times For Woke: %5",
						_startingBloodVol
						false,
						false,
						_calculatedProbability,
						_timesTilWoke
					];
					_results pushBack _result;
				};
			};
		};
	};

	_startingBloodVol = _startingBloodVol - 0.05;
};