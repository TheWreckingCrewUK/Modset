
class CfgPatches
{
    #include "CfgPatches.cpp"
};

class CfgFunctions
{
    #include "CfgFunctions.cpp"
};

class CfgVehicles
{
    #include "CfgVehicles.cpp"
};

class nln_base_picture;
class nln_base_button;
class nln_base_edit;

#include "gui\adjust_fire_mission.cpp"

class RscTitles
{
    #include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
    class nln_adjust_fire_mission
    {
        clientInit = "call compile preprocessFileLineNumbers '\twc_notepad\sheet_adjust_fire_mission\XEH_clientPreInit.sqf';";
    };
};
