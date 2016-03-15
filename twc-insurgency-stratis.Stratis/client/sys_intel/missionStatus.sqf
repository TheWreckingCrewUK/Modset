_trust = "";
if (floor InsP_enemyMorale <= -3) then {_trust = "<t color='#000000'>Hopeless</t>"};
if (floor InsP_enemyMorale == -2) then {_trust = "<t color='#ff0000'>Terrible</t>"};
if (floor InsP_enemyMorale == -1) then {_trust = "<t color='#ff9000'>Bad</t>"};
if (floor InsP_enemyMorale == 0) then {_trust = "<t color='#c3c3c3'>Average</t>"};
if (floor InsP_enemyMorale == 1) then {_trust = "<t color='#6eeb71'>Good</t>"};
if (floor InsP_enemyMorale == 2) then {_trust = "<t color='#00d005'>Strong</t>"};
if (floor InsP_enemyMorale >= 3) then {_trust = "<t color='#0060ff'>Incredible</t>"};

hint parseText format ["<t align='center'><t size='1.2' shadow='1' shadowColor='#000000' color='#ff0000'>Mission Status</t><br/><br/><t shadow='1' shadowColor='#000000'><t color='#d96600'>Cache(s)</t> Destroyed</t>: %1<br/><br/><t shadow='1' shadowColor='#000000'>Trust: %2</t><br/><t shadow='1' shadowColor='#000000'><t color='#d9d90c'>IEDs</t> Disarmed: %3<br/><t shadow='1' shadowColor='#000000'><t color='#0000ff'>AA Guns</t> Destroyed: %4</t><br/>", InsP_ammoCaches, _trust, InsP_iedDestroyed, InsP_aagDestroyed];