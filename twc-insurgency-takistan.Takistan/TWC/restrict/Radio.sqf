sleep 3;
/*

while {true} do{
if (local player) then {


                        if (call TFAR_fnc_isTeamSpeakPluginEnabled ) then {
                       cuttext ["", "BLACK IN", 0.001];
					   {["", 0, 0, 0, 0, 0, _x] spawn bis_fnc_dynamictext} forEach [1, 2, 3];

   }else{
	  cutText ["", "BLACK", 0.001];

    [
        "<t size='1.2'>You are not on Teamspeak or have your TFAR plug-in disabled!</t><br/><t size='0.6'>You need to connect to the Teamspeak with this IP:" +
	" <t color='#ffe900'>ts.thewreckingcrew.co.uk</t></t>", 0, -0.02, 10000000, 0, 0, 2
    ] spawn bis_fnc_dynamictext;
    [
        "<t align='left'><t size='0.5'><t color='#d7d7d9'>If you don't have your TFAR plug-in enabled.<br/><t size='0.3'>ä<br/></t>Please go to www.thewreckingcrew.co.uk<br/>,then go the forums\General Infomation\Installation.<br/>Then rejoin the game.<br/><t size='0.3'>ä<br/></t>If you are having issues please post in the technical issues section on www.thewreckingcrew.co.uk website!<br/>and connect to the server shown above.<br/><t size='0.3'>ä<br/><br><br/></t>If you are not connted to TS please go to wwww.TheWreckingCrew.co.uk<br/>and check out our install guide for Task Force Radio.<br/></t>", 0.355, 0.361, 10000000, 0, 0, 3
    ] spawn bis_fnc_dynamictext;};

};
sleep 15;
};



