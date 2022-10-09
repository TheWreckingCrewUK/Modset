
class CfgPatches {
    #include "CfgPatches.cpp"
};

class CfgFontFamilies {
    #include "CfgFontFamilies.cpp"
};

class Extended_PreInit_EventHandlers {
    class nln_ui_fonts {
        clientInit = "call compile preprocessFileLineNumbers '\twc_notepad\ui_fonts\XEH_clientPreInit.sqf';";
    };
};
