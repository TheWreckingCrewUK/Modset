params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if (isWeaponDeployed _gunner) exitwith {};

switch (stance _gunner) do
{
	case "STAND": 
	{
		if (local _gunner) then
		{
			if (cameraView == "GUNNER") then {_gunner switchCamera "INTERNAL"};
		};
		_gunner setUnconscious true; [{_this setUnconscious false}, _gunner, 1.5] call CBA_fnc_waitAndExecute;
		[_gunner, 0.05, "body", "backblast"] call ace_medical_fnc_addDamageToUnit;
		_vel = velocity _gunner;
		_dir = direction _gunner;
		_speed = 2;
		_gunner setVelocity [(_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_vel select 2)];
	};
	case "CROUCH": 
	{
		if (local _gunner) then
		{
			if (cameraView == "GUNNER") then {_gunner switchCamera "INTERNAL"};
		};
		_gunner setUnconscious true; [{_this setUnconscious false}, _gunner, 1.5] call CBA_fnc_waitAndExecute;
		[_gunner, 0.05, "body", "backblast"] call ace_medical_fnc_addDamageToUnit;
		_vel = velocity _gunner;
		_dir = direction _gunner;
		_speed = 2;
		_gunner setVelocity [(_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_vel select 2)];
	};
	default {};
};