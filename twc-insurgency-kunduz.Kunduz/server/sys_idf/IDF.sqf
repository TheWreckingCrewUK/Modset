

{
//systemchat "1";
_x addEventHandler ["CuratorObjectPlaced", {

systemchat "placed";

if ((_this select 1) iskindof "StaticMortar") then {
if ((_this select 1) distance (getmarkerpos "respawn_west") < 3000) then {
(_this select 1) addeventhandler ["fired", 


{if (alarm == 3) then {execVM "server\sys_idf\IDF_Alarmfire.sqf"};}];

};
};

}

];

} forEach allCurators;