_supply = "";


if (floor TWC_enemySupply <= -3) then {_supply = "<t color='#000000'>Very Good</t>"};
if (floor TWC_enemySupply == -2) then {_supply = "<t color='#ff0000'>Good</t>"};
if (floor TWC_enemySupply == -1) then {_supply = "<t color='#ff9000'>Above Average</t>"};
if (floor TWC_enemySupply == 0) then {_supply = "<t color='#c3c3c3'>Average</t>"};
if (floor TWC_enemySupply == 1) then {_supply = "<t color='#6eeb71'>Below Average</t>"};
if (floor TWC_enemySupply == 2) then {_supply = "<t color='#00d005'>Bad</t>"};
if (floor TWC_enemySupply >= 3) then {_supply = "<t color='#0060ff'>Very Bad</t>"};

hint parseText format ["<t align='center'><t size='1.2' shadow='1' shadowColor='#000000' color='#ff0000'>Mission Status</t><br/><br/><t shadow='1' shadowColor='#000000'><t color='#d96600'>Enemy Supply</t>: %1<br/>", _supply];