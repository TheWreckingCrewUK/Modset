_bbx = [_this select 0 select 0, _this select 1 select 0];
_bby = [_this select 0 select 1, _this select 1 select 1];
_bbz = [_this select 0 select 2, _this select 1 select 2];
_arr = [];

0 = {
	_y = _x;
	0 = {
		_z = _x;
		0 = {
			0 = _arr pushBack (_obj modelToWorld [_x,_y,_z]);
		} count _bbx;
	} count _bbz;
	reverse _bbz;
} count _bby;

_arr pushBack (_arr select 0);
_arr pushBack (_arr select 1);
_arr