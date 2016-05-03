_obj = "Land_HBarrier_Big_F" createVehicle position player;
_obj attachTo [player];

player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; } ];

{
	detach _x
}forEach attachedObjects player;