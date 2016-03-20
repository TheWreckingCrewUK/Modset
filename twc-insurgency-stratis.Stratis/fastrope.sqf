/*
FASTROPE-SCRIPT BY LuLeBe

////////////HOW TO IMPLEMENT////////////
1. Place Trigger with area 0 by 0
2. Set Trigger to Repeatedly
3. Set Condition to:
(vehicle player) isKindOf "Helicopter" AND player != (assignedDriver (vehicle player)) AND (getpos (vehicle player) select 2) > 3 AND (getpos (vehicle player) select 2) < 25 AND (speed (vehicle player)) < 5
4. Set on Activation to (Change "Fastrope" to what you want to have displayed in the Actionmenu, e.g. "Rope now!"):
aid_fastrope = player addAction ["Fastrope", "fastrope.sqf", [player]];
5. Set on Deactivation to:
player removeAction aid_fastrope;

////////////HOW TO USE IN-GAME////////////
Your Helicpoter must be slower than 5 km/h and in a height between 3m and 25m. Everone except for the Pilot can then fastrope using the action in the actionmenu.

////////////IMPORTANT////////////
Change the next two Values as you like.
_ms = Fastroping-speed in meters per second. Default is 4 m/s, taken from VBS2. Change to something like 8 for faster roping!
_d = distance between center of helicopter and center of fastroping solder when he starts fastroping. Use negative Values as the soldier should start roping below the heli!
*/

_ms = 4;
_d = -3;


//change nothing below here if you don't know what you're doing!


_s = _ms / 200;
_u = (_this select 0);
_v = (vehicle _u);
moveOut _u;
_u attachTo [_v, [0,0,_d]];
while {(getpos _u select 2) > 0 AND (speed _v) < 5} do {
	_u attachTo [_v, [0,0,_d]];
	_d = _d - _s;
	sleep 0.005;
};
detach _u;