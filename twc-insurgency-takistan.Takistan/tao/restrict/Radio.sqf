sleep 5;

if (player == p6) then {
//_frequency = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwFrequency;
systemChat format "freq";
};

if (INSP_playerSTR == "p1") then {
    player setVariable ["radioPresets", ["Alpha"]];
};
if (INSP_playerSTR in ["p2","p3","p4","p5","p6","p7","p8"]) then {
    player setVariable ["radioPresets", ["Alpha"]];

if (radiopresets = alpha) then {
hint "hello";
};


/*
cutText ["", "BLACK", 0.001];
    cutText ["", "BLACK", 0.001];
    [
        "<t size='1.2'>You are not in the Correct Radio Channel!</t><br/><t size='0.6'>You need to go on to the correct radio channel." +
	" server: <t color='#ffe900'>81.19.212.152:10074</t></t>", 0, -0.02, 10000000, 0, 0, 2
    ] spawn bis_fnc_dynamictext;
    [
        "<t align='left'><t size='0.5'><t color='#d7d7d9'>You do this by pressing 2 on your numpad.<br/><t size='0.3'>ä<br/></t>or by pressing CRTL + P on your key board<br/>,then pressing the preset channel button on the bottom right of the radio up once.<br/>Once on the correct radio channel this message will disappear.<br/><t size='0.3'>ä<br/></t>If you are having issues please post in the technical issues section on www.thewreckingcrew.com website!<br/>and connect to the server shown above.<br/><t size='0.3'>ä<br/><br><br/></t>If you are not connted to TS please go to wwww.TheWreckingCrew.co.uk<br/>and check out our install guide for both Teamspeak 3 and Task Force Radio.<br/></t>", 0.355, 0.361, 10000000, 0, 0, 3
    ] spawn bis_fnc_dynamictext;};





	titleCut ["", "BLACK IN", 5];
	"dynamicBlur" ppEffectEnable true;   
	"dynamicBlur" ppEffectAdjust [6];   
	"dynamicBlur" ppEffectCommit 0;     
	"dynamicBlur" ppEffectAdjust [0.0];  
	"dynamicBlur" ppEffectCommit 5; 













				
	/*					cutText ["", "BLACK", 0.001];
    cutText ["", "BLACK", 0.001];
    [
        "<t size='1.2'>You are not in the Correct Radio Channel!</t><br/><t size='0.6'>You need to go on to the correct radio channel." +
	" server: <t color='#ffe900'>81.19.212.152:10074</t></t>", 0, -0.02, 10000000, 0, 0, 2
    ] spawn bis_fnc_dynamictext;
    [
        "<t align='left'><t size='0.5'><t color='#d7d7d9'>You do this by pressing 2 on your numpad.<br/><t size='0.3'>ä<br/></t>or by pressing CRTL + P on your key board<br/>,then pressing the preset channel button on the bottom right of the radio up once.<br/>Once on the correct radio channel this message will disappear.<br/><t size='0.3'>ä<br/></t>If you are having issues please post in the technical issues section on www.thewreckingcrew.com website!<br/>and connect to the server shown above.<br/><t size='0.3'>ä<br/><br><br/></t>If you are not connted to TS please go to wwww.TheWreckingCrew.co.uk<br/>and check out our install guide for both Teamspeak 3 and Task Force Radio.<br/></t>", 0.355, 0.361, 10000000, 0, 0, 3
    ] spawn bis_fnc_dynamictext;
                         
 