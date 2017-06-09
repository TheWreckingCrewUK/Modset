//hint "Mission Status Placeholder";
/*
_trust = "";
_civtrust = "";

if (floor globalCivOpinion <= -3) then {_trust = "<t color='#000000'>Incredible</t>"};
if (floor globalCivOpinion == -2) then {_trust = "<t color='#ff0000'>Strong</t>"};
if (floor globalCivOpinion == -1) then {_trust = "<t color='#ff9000'>Good</t>"};
if (floor globalCivOpinion == 0) then {_trust = "<t color='#c3c3c3'>Average</t>"};
if (floor globalCivOpinion == 1) then {_trust = "<t color='#6eeb71'>Bad</t>"};
if (floor globalCivOpinion == 2) then {_trust = "<t color='#00d005'>Terrible</t>"};
if (floor globalCivOpinion >= 3) then {_trust = "<t color='#0060ff'>Hopeless</t>"};

if (floor InsP_civTrust <= -3) then {_civtrust = "<t color='#000000'>Hopeless</t>"};
if (floor InsP_civTrust == -2) then {_civtrust = "<t color='#ff0000'>Terrible</t>"};
if (floor InsP_civTrust == -1) then {_civtrust = "<t color='#ff9000'>Bad</t>"};
if (floor InsP_civTrust == 0) then {_civtrust = "<t color='#c3c3c3'>Average</t>"};
if (floor InsP_civTrust == 1) then {_civtrust = "<t color='#6eeb71'>Good</t>"};
if (floor InsP_civTrust == 2) then {_civtrust = "<t color='#00d005'>Strong</t>"};
if (floor InsP_civTrust >= 3) then {_civtrust = "<t color='#0060ff'>Incredible</t>"};

*/
hint parseText format ["<t align='center'><t size='1.2' shadow='1' shadowColor='#000000' color='#ff0000'>Mission Status</t><br/><br/><t shadow='1' shadowColor='#000000'><t color='#d96600'>Global Civ Opinion: %1<br/><br/>", str globalCivOpinion];