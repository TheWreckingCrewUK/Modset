params["_force","_num"];

if(_num isEqualTo 1)then{
_owner = owner HC1;
	{
		_transfer = !(units _x isEqualTo []) && {!(_x getVariable ["twc_hcBlacklist",false])};
		if(_transfer)then{
			{
				if(!_force && {(owner _x) == _owner})exitWith{
					_transfer = false;
				};
				if(isPlayer _x)exitWith{
					_transfer = false;
				};
			}forEach (units _x);
		};
		if(_transfer)then{
			_x setGroupOwner HC1;
			if(isNil "twc_hc1Array")then{
				twc_hc1Array = [];
			};
			twc_hc1Array pushback _x;
		};
	}forEach allGroups;
};