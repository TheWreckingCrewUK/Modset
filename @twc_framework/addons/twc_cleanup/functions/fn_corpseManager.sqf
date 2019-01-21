// first check the current queue if it exceeds the size
_currentQueueSize = [TWC_Corpse_Queue] call CBA_fnc_hashSize;

if (_currentQueueSize >= TWC_Corpse_Queue_Max) then {
	// we've got too many bodies, what next?
	_checkHashPair = {
		_newQueueSize = [TWC_Corpse_Queue] call CBA_fnc_hashSize;
		// double check last iteration didn't bring it into normality
		if (_newQueueSize >= TWC_Corpse_Queue_Max) then {
			// been around long enough to delete
			if ((time - _key) > TWC_Corpse_Queue_MinTime) then {
				// delete it!
				deleteVehicle _value;
				[TWC_Corpse_Queue, _key] call CBA_fnc_hashRem;
			};
		};
	};
	
	[TWC_Corpse_Queue, _checkHashPair] call CBA_fnc_hashEachPair;
};

// recursive function, keep plodding on!
[TWC_cleanup_fnc_corpseManager, [], 15] call CBA_fnc_waitAndExecute;