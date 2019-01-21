_bbx = [_this select 0 select 0, _this select 1 select 0];
_bby = [_this select 0 select 1, _this select 1 select 1];
_bbz = [_this select 0 select 2, _this select 1 select 2];
_array = [];

{
	_y = _x;
	{
		_z = _x;
		{
			_array pushBack (_obj modelToWorld [_x,_y,_z]);
		} count _bbx;
	} count _bbz;
	reverse _bbz;
} count _bby;

_array pushBack (_array select 0);
_array pushBack (_array select 1);
_array