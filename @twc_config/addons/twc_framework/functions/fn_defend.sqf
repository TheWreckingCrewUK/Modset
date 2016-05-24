/*
 * 
 * Defend Function
 *
 * Public: No
 */
Waituntil {time >= 30};

if (isServer || !(isServer or hasinterface)) then {
 params ["_unit", "_marker", ["_radius", 500]];
 
 if (getMarkerType _marker != "") then {
  [_unit, getmarkerpos _marker, _radius] call CBA_fnc_taskDefend;
 } else {
  /* Simple override, for if you want them to defend a position of non-marker, like a Units position
   * TODO: proper input checking and more conditionals. Does SQF not have an ELSE IF block?
   */
  [_unit, _marker, _radius] call CBA_fnc_taskDefend;
 };
};
