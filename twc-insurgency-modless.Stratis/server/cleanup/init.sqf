//Uses an exec since we need a new thread to do this. or else the server will stop and do nothing but this:

execVM "server\cleanup\deadbodies.sqf";