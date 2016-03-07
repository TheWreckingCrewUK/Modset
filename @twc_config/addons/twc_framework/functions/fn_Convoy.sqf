// convoyDefend_init.sqf
// © MARCH 2010 - norrin

if (!isServer) exitWith {};

params ["_MarkerArray","_ConvoyArray"];

_convoyVclDestroyed = false;
_marker = _markerArray select 0;
_leadVcl = _convoyArray select 0;
_groups = [];
_b = 0;
_c = 0;
{
	_x setSpeedMode "LIMITED";
	_x setBehaviour "SAFE";
	_x doMove getMarkerPos _marker;
	[_x, _convoyArray, _c] spawn TWC_fnc_MaxSpeed;
	_c = _c + 1
 } forEach _convoyArray;

 _convoyVclDestroyed = false;

 
while {!_convoyVclDestroyed} do
{
  hintSilent format ["lead: %1 \ndestination: %2", _leadVcl, _marker];
  {if (!alive _x) then {_convoyVclDestroyed = true}}forEach _convoyArray;
  if (_leadVcl distance getMarkerPos _marker < 10 && _b < (count _markerArray - 1)) then 
  {	
		_b = _b + 1;
		_marker = _markerArray select _b;
		{_x doMove getMarkerPos _marker} forEach _convoyArray;
  };
  sleep 1;
};

{if (alive _x) then {_x doMove getPos _x}} forEach _convoyArray;

for [{ _loop = 0 },{ _loop < count  _convoyArray},{ _loop = _loop + 1}] do
{
  _vcl = _convoyArray select _loop;
  if (alive _vcl) then
  {
    _groups = _groups + [(group _vcl)];
    _crew = crew _vcl;
    waitUntil {speed _vcl < 2};
    for [{ _loop1 = 0 },{ _loop1 < count _crew},{ _loop1 = _loop1 + 1}] do
    {
      _unit = _crew select _loop1;
      if (_unit != gunner _vcl) then
      {
        _unit action ["GetOut", _vcl];
        sleep 0.2;
        [_unit] allowGetIn false;
      } else {
        _unit assignAsGunner _vcl;
      };
      sleep 0.1;
    };
  };
  sleep 0.1;
};
sleep 1;
{_x setBehaviour "COMBAT"} forEach _groups;
