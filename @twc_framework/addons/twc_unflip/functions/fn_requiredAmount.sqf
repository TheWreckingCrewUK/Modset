params [["_vehicle", objNull, [objNull]]];

// Every 1.5t needs a man
((floor (getMass _vehicle / 1000)) max 1)