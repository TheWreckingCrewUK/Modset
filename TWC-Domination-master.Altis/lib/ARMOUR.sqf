if (local player) then {

_unit = _this select 1;

if (_unit == p34) then {
   if (alive p35 && alive p36) then {
    p34 setpos getmarkerpos "armourspawn";
	p34 allowdamage true;
   }else{
   systemchat "You need a full armour crew to go to the armour crew spawn."
   }
};



if (_unit == p35) then {
   if (alive p34 && alive p36) then {
    p35 setpos getmarkerpos "armourspawn";
	p35 allowdamage true;
   }else{
   systemchat "You need a full armour crew to go to the armour crew spawn."
   }
};




if (_unit == p36) then {
   if (alive p34 && alive p35) then {
    p36 setpos getmarkerpos "armourspawn";
	p36 allowdamage true;
   }else{
   systemchat "You need a full armour crew to go to the armour crew spawn."
   }
};
};



