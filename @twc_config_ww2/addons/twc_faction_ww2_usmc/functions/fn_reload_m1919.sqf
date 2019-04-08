params ["_target","_player"];

//See what magazines the player has.
_mgammo = (magazineCargo _player) select {_x == 'fow_100Rnd_762x63' || _x == 'fow_50Rnd_762x63' || _x == 'fow_30Rnd_762x63'};

//Remove the first from the player and add it to the gun.
_player removeMagazine (_mgammo select 0);
[_target, [_mgammo select 0, [0]]] remoteExec ['addMagazineTurret', _target, false];