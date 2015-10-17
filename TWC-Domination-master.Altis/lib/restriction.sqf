/******
 * File restriction.sqf
 * Description:
 *    Called in 'mission.sqm' to restrict vehicle use to pilot and co-pilot.
 * Params:
 *    0 - Object - The vehicle the restrictino is applied to.
 *    1 - String - The vehicle crew position.
 *    2 - Array - ? Array of names.
 *
 * The way this is used it would benefit from being registered as a function in
 * 'description.ext'.
 *
 * Authors: FakeMatty, Strider.
 */
private["_vehicle", "_position", "_names"];

_vehicle = _this select 0;
_position = _this select 1;
_names = _this select 2;

while { alive _vehicle } do {
	switch(_position) do {
		case "driver": {
			_driver = driver _vehicle;
			if(!(str _driver in _names)) then {
				_driver action ["getOut", _vehicle];
      };
		case "copilot": {
			_copilot = moveInTurret [_vehicle,[0]];
			if(!(str _copilot in _names)) then {
				_copilot action ["getOut", _copilot];
			};
      };
	};
	sleep 0.2;
};
