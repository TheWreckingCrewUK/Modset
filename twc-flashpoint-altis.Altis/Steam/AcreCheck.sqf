

_hasAcre = isClass (configfile >> "CfgWeapons" >> "ACRE_PRC117F");

if _hasAcre then {

}else{
    cutText ["", "BLACK", 0.001];
    [
        "<t size='1.2'>You do not have ACRE!</t><br/><t size='0.6'>You need to join our TS3" +
	" server: <t color='#ffe900'>ts.thewreckingcrew.co.uk</t></t>", 0, 0.22, 10000000, 0, 0, 2
    ] spawn bis_fnc_dynamictext;
    [
        "<t align='left'><t size='0.5'><t color='#d7d7d9'>Hi. This server requires you to use ACRE to play.<br/><t size='0.3'>ä<br/></t>Being on ACRE will allow you to talk to other<br/>players, and for other players to talk to you,<br/>including for communicating vital information.<br/><t size='0.3'>ä<br/></t>To join us on ACRE, simply launch TeamSpeak 3<br/>and connect to the server shown above.<br/><t size='0.3'>ä<br/></t>Once you have connected, There will be an instruction guide<br/>in the Public server lobby description.<br/>If you have any issues please poke a member and they will help. Thank you for your co-operation!</t>", 0.355, 0.361, 10000000, 0, 0, 3
    ] spawn bis_fnc_dynamictext;
	
};