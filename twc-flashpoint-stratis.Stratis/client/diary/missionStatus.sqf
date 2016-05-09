_supply = "";


if (floor TWC_enemySupply <= -3) then {_supply = "<t color='#9e1c1c'>Very Good</t>"};
if (floor TWC_enemySupply == -2) then {_supply = "<t color='#ff4719'>Good</t>"};
if (floor TWC_enemySupply == -1) then {_supply = "<t color='#e3ff00'>Above Average</t>"};
if (floor TWC_enemySupply == 0) then {_supply = "<t color='#e5eaec'>Average</t>"};
if (floor TWC_enemySupply == 1) then {_supply = "<t color='#a8d1ff'>Below Average</t>"};
if (floor TWC_enemySupply == 2) then {_supply = "<t color='#005682'>Bad</t>"};
if (floor TWC_enemySupply >= 3) then {_supply = "<t color='#4c8647'>Very Bad</t>"};

hint parseText format ["<t align='center'><t size='1.2' shadow='1' shadowColor='#000000' color='#ff0000'>Mission Status</t><br/><br/><t shadow='1' shadowColor='#000000'><t color='#d96600'>Enemy Supply</t>: %1<br/><t shadow='1' shadowColor='#000000'><t color='#d96600'>Remaining Sites</t>: %2<br/>", _supply, count remainingArray];