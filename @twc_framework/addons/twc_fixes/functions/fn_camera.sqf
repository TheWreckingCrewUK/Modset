/*
    Author: Karel Moricky

    Description:
    Splendid config viewer

    Parameter(s):
    _this select 0: STRING - Parent display (when you need to run the viewer from editor)

    Returns:
    NOTHING
*/

#define DIK_ESCAPE          0x01
#define DIK_1               0x02
#define DIK_2               0x03
#define DIK_3               0x04
#define DIK_4               0x05
#define DIK_5               0x06
#define DIK_6               0x07
#define DIK_7               0x08
#define DIK_8               0x09
#define DIK_9               0x0A
#define DIK_0               0x0B
#define DIK_MINUS           0x0C    /* - on main keyboard */
#define DIK_EQUALS          0x0D
#define DIK_BACK            0x0E    /* backspace */
#define DIK_TAB             0x0F
#define DIK_Q               0x10
#define DIK_W               0x11
#define DIK_E               0x12
#define DIK_R               0x13
#define DIK_T               0x14
#define DIK_Y               0x15
#define DIK_U               0x16
#define DIK_I               0x17
#define DIK_O               0x18
#define DIK_P               0x19
#define DIK_LBRACKET        0x1A
#define DIK_RBRACKET        0x1B
#define DIK_RETURN          0x1C    /* Enter on main keyboard */
#define DIK_LCONTROL        0x1D
#define DIK_A               0x1E
#define DIK_S               0x1F
#define DIK_D               0x20
#define DIK_F               0x21
#define DIK_G               0x22
#define DIK_H               0x23
#define DIK_J               0x24
#define DIK_K               0x25
#define DIK_L               0x26
#define DIK_SEMICOLON       0x27
#define DIK_APOSTROPHE      0x28
#define DIK_GRAVE           0x29    /* accent grave */
#define DIK_LSHIFT          0x2A
#define DIK_BACKSLASH       0x2B
#define DIK_Z               0x2C
#define DIK_X               0x2D
#define DIK_C               0x2E
#define DIK_V               0x2F
#define DIK_B               0x30
#define DIK_N               0x31
#define DIK_M               0x32
#define DIK_COMMA           0x33
#define DIK_PERIOD          0x34    /* . on main keyboard */
#define DIK_SLASH           0x35    /* / on main keyboard */
#define DIK_RSHIFT          0x36
#define DIK_MULTIPLY        0x37    /* * on numeric keypad */
#define DIK_LMENU           0x38    /* left Alt */
#define DIK_SPACE           0x39
#define DIK_CAPITAL         0x3A
#define DIK_F1              0x3B
#define DIK_F2              0x3C
#define DIK_F3              0x3D
#define DIK_F4              0x3E
#define DIK_F5              0x3F
#define DIK_F6              0x40
#define DIK_F7              0x41
#define DIK_F8              0x42
#define DIK_F9              0x43
#define DIK_F10             0x44
#define DIK_NUMLOCK         0x45
#define DIK_SCROLL          0x46    /* Scroll Lock */
#define DIK_NUMPAD7         0x47
#define DIK_NUMPAD8         0x48
#define DIK_NUMPAD9         0x49
#define DIK_SUBTRACT        0x4A    /* - on numeric keypad */
#define DIK_NUMPAD4         0x4B
#define DIK_NUMPAD5         0x4C
#define DIK_NUMPAD6         0x4D
#define DIK_ADD             0x4E    /* + on numeric keypad */
#define DIK_NUMPAD1         0x4F
#define DIK_NUMPAD2         0x50
#define DIK_NUMPAD3         0x51
#define DIK_NUMPAD0         0x52
#define DIK_DECIMAL         0x53    /* . on numeric keypad */
#define DIK_OEM_102         0x56    /* < > | on UK/Germany keyboards */
#define DIK_F11             0x57
#define DIK_NUMPADENTER     0x9C    /* Enter on numeric keypad */

disableserialization;

//if (is3DEN) exitwith {["Cannot start the camera in Eden Editor workspace."] call bis_fnc_error;};

//--- Function called before display - create display and terminate
if (count _this <= 1) exitwith {

    //_cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
    //if !(isnull _cam) exitwith {};


    _displayMission = [] call (uinamespace getvariable "bis_fnc_displayMission");
    if (is3DEN) then {_displayMission = finddisplay 313;};
    _parent = if (isnull _displayMission) then {
        _displays = uinamespace getvariable ["GUI_displays",[]];
        _classes = uinamespace getvariable ["GUI_classes",[]];

        {
            if (isnull _x) then {
                _classes set [_foreachindex,-1];
            };
        } foreach _displays;
        _displays = _displays - [displaynull];
        _classes = _classes - [-1];

        if (count _displays > 0 && count _displays == count _classes) then {
            if ((_classes select (count _classes - 1)) == "RscDisplayDebug") then {
                //--- Debug console is open - use the display below it (otherwise you couldn't access the console while in the viewer)
                _displays select (count _displays - 2)
            } else {
                //--- Open the viewer from the last open display
                _displays select (count _displays - 1)
            };
        } else {

            //--- No displays are tracked - cannot open
            displaynull
        };
    } else {

        //--- Mission display is present - use it as parent
        _displayMission
    };
    _parent createdisplay "RscDisplayCamera";
};

disableserialization;
_mode = _this param [0,"Init",[displaynull,""]];
_this = _this param [1,[]];

switch _mode do {

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "Init": {
        BIS_fnc_camera_draw3D = addmissioneventhandler ["draw3d","with (uinamespace) do {['Draw3D',_this] call bis_fnc_camera;};"];

        //--- Calculate the current view position
        _dir = positionCameraToWorld [0,0,0] getdir positionCameraToWorld [0,0,1];
        _vectorDir = (agltoasl positionCameraToWorld [0,0,0]) vectorFromTo (agltoasl positionCameraToWorld [0,0,1]);
        _vectorDir = [_vectorDir,_dir] call BIS_fnc_rotateVector2D;
        _vectorDirY = _vectorDir select 1;
        if (_vectorDirY == 0) then {_vectorDirY = 0.01;};
        _pitch = atan ((_vectorDir select 2) / _vectorDirY);

        //--- Create camera
        _camPos = positionCameraToWorld [0,0,0];
        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam","camera" camcreate _camPos];
        _cam cameraeffect ["internal","back"];
        _cam campreparefov 0.75;
        _cam camcommitprepared 0;
        showcinemaborder false;
        cameraEffectEnableHUD true;
        vehicle cameraon switchcamera cameraview;

        _cam setdir _dir;
        [_cam,_pitch,0] call bis_fnc_setpitchbank;

        with missionnamespace do {
            if (isnil "BIS_fnc_camera_ppColor") then {
                BIS_fnc_camera_ppColor = ppEffectCreate ["colorCorrections", 1776];
                BIS_fnc_camera_ppColor ppEffectEnable true;
                BIS_fnc_camera_ppColor ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,1],[0.75,0.25,0,1]];
                BIS_fnc_camera_ppColor ppEffectCommit 0;
            };
        };

        //--- Declare variables
        missionnamespace setvariable ["BIS_fnc_camera_cam",_cam];
        missionnamespace setvariable ["BIS_fnc_camera_acctime",missionnamespace getvariable ["BIS_fnc_camera_acctime",acctime]];

        BIS_fnc_camera_LMB = false;
        BIS_fnc_camera_RMB = false;
        BIS_fnc_camera_keys = [];
        BIS_fnc_camera_LMBclick = [0,0];
        BIS_fnc_camera_RMBclick = [0,0];
        BIS_fnc_camera_pitchbank = [_pitch,0];//_cam call bis_fnc_getPitchBank;
        BIS_fnc_camera_fov = 0.75;
        BIS_fnc_camera_iconCamera = gettext (configfile >> "RscDisplayCamera" >> "iconCamera");
        BIS_fnc_camera_vision = 0;
        BIS_fnc_camera_visibleHUD = true;
        BIS_fnc_camera_cameraView = cameraview;

        cameraon switchcamera "internal";

        _DIKcodes = true call bis_fnc_keyCode;
        _DIKcount = (count _DIKcodes - 1);
        _DIKlast = _DIKcodes select _DIKcount;
        for "_k" from 0 to (_DIKlast - 1) do {
            BIS_fnc_camera_keys set [_k,false];
        };
        BIS_fnc_camera_keysCount = _DIKcount;

        _display = _this select 0;
        BIS_fnc_camera_display = _display;
        _display displayaddeventhandler ["keydown","with (uinamespace) do {['KeyDown',_this] call bis_fnc_camera;};"];
        _display displayaddeventhandler ["keyup","with (uinamespace) do {['KeyUp',_this] call bis_fnc_camera;};"];
        _display displayaddeventhandler ["mousebuttondown","with (uinamespace) do {['MouseButtonDown',_this] call bis_fnc_camera;};"];
        _display displayaddeventhandler ["mousebuttonup","with (uinamespace) do {['MouseButtonUp',_this] call bis_fnc_camera;};"];
        _display displayaddeventhandler ["mousezchanged","with (uinamespace) do {['MouseZChanged',_this] call bis_fnc_camera;};"];

        _ctrlMouseArea = _display displayctrl 3140;
        _ctrlMouseArea ctrladdeventhandler ["mousemoving","with (uinamespace) do {['Mouse',_this] call bis_fnc_camera;};"];
        _ctrlMouseArea ctrladdeventhandler ["mouseholding","with (uinamespace) do {['Mouse',_this] call bis_fnc_camera;};"];
        ctrlsetfocus _ctrlMouseArea;

        _ctrlMap = _display displayctrl 3141;
        _ctrlMap ctrlenable false;
        _ctrlMap ctrladdeventhandler ["draw","with (uinamespace) do {['MapDraw',_this] call bis_fnc_camera;};"];
        _ctrlMap ctrladdeventhandler ["mousebuttonclick","with (uinamespace) do {['MapClick',_this] call bis_fnc_camera;};"];

        _ctrlOverlay = _display displayctrl 3142;
        _ctrlOverlay ctrlenable false;

        _positions = profilenamespace getvariable ["BIS_fnc_camera_positions",[]];
        _positions resize 10;//13;
        profilenamespace setvariable ["BIS_fnc_camera_positions",_positions];
        _ctrlPositions = _display displayctrl 31422;
        _ctrlPositions ctrlsettext "1:\n2:\n3:\n4:\n5:\n6:\n7:\n8:\n9:\n0";

        _ctrlSliderFocus = _display displayctrl 31430;
        _ctrlSliderFocus ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderFocus',_this] call bis_fnc_camera;};"];
        _ctrlSliderFocus slidersetposition 0;
        ["SliderFocus",[_ctrlSliderFocus,sliderposition _ctrlSliderFocus]] call bis_fnc_camera;

        _ctrlSliderAperture = _display displayctrl 31432;
        _ctrlSliderAperture ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderAperture',_this] call bis_fnc_camera;};"];
        _ctrlSliderAperture slidersetrange [0,150];
        _ctrlSliderAperture slidersetposition 0;
        _ctrlSliderAperture ctrlsettooltip localize "str_a3_rscdisplaycamera_tooltipaperture";
        ["SliderAperture",[_ctrlSliderAperture,sliderposition _ctrlSliderAperture]] call bis_fnc_camera;

        _ctrlSliderDaytime = _display displayctrl 31434;
        _ctrlSliderDaytime slidersetrange [0,24 * 60];
        _ctrlSliderDaytime ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderDaytime',_this] call bis_fnc_camera;};"];
        _ctrlSliderDaytime slidersetposition (daytime * 60);
        ["SliderDaytime",[_ctrlSliderDaytime,sliderposition _ctrlSliderDaytime]] call bis_fnc_camera;

        _ctrlSliderOvercast = _display displayctrl 31436;
        _ctrlSliderOvercast slidersetrange [0,1];
        _ctrlSliderOvercast ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderOvercast',_this] call bis_fnc_camera;};"];
        _ctrlSliderOvercast slidersetposition overcast;
        ["SliderOvercast",[_ctrlSliderOvercast,sliderposition _ctrlSliderOvercast]] call bis_fnc_camera;

        _ctrlSliderAcctime = _display displayctrl 31438;
        _ctrlSliderAcctime slidersetrange [0,1];
        _ctrlSliderAcctime ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderAcctime',_this] call bis_fnc_camera;};"];
        _ctrlSliderAcctime slidersetposition 0;
        ["SliderAcctime",[_ctrlSliderAcctime,sliderposition _ctrlSliderAcctime]] call bis_fnc_camera;

        _ctrlSliderBrightness = _display displayctrl 31440;
        _ctrlSliderBrightness slidersetrange [0.5,1.5];
        _ctrlSliderBrightness ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderColor',[ctrlparent (_this select 0)]] call bis_fnc_camera;};"];
        _ctrlSliderBrightness slidersetposition 1;

        _ctrlSliderContrast = _display displayctrl 31442;
        _ctrlSliderContrast slidersetrange [-0.5,0.5];
        _ctrlSliderContrast ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderColor',[ctrlparent (_this select 0)]] call bis_fnc_camera;};"];
        _ctrlSliderContrast slidersetposition 0;

        _ctrlSliderSaturation = _display displayctrl 31444;
        _ctrlSliderSaturation slidersetrange [0,2];
        _ctrlSliderSaturation ctrladdeventhandler ["sliderposchanged","with (uinamespace) do {['SliderColor',[ctrlparent (_this select 0)]] call bis_fnc_camera;};"];
        _ctrlSliderSaturation slidersetposition 1;

        ["SliderColor",[_display]] call bis_fnc_camera;

        BIS_fnc_camera_showPositions = {
            disableserialization;
            _display = _this;
            _ctrlPositions = _display displayctrl 31422;
            _text = "";
            {
                _text = _text + str _foreachindex + ": ";
                if (isnil "_x") then {
                    _text = _text + format ["[ Ctrl + %1 ]",_foreachindex];
                } else {
                    _params = _positions select _foreachindex;
                    _text = _text + format [
                        "%1",
                        mapgridposition (_params select 1)
                        //[(_params select 5),"HH:MM:SS"] call bis_fnc_timetostring
                    ]
                };
                _text = _text + "\n";
            } foreach _positions;
            _ctrlPositions ctrlsettext _text;
        };
        _display call BIS_fnc_camera_showPositions;

        //--- Disable menu chromatic aberration
        [] call bis_fnc_guiEffectTiles;

        //--- Remove mission overlay
        _displayMission = [] call (uinamespace getvariable "bis_fnc_displayMission");
        _control = _displayMission displayctrl 11400;
        _control ctrlsetfade 1;
        _control ctrlcommit 0;

        //--- Remove overlays
        cuttext ["","plain"];
        titletext ["","plain"];

        // reset all unitplay layers
        {if (toLower _x find "bis_fnc_unitplay" isEqualTo 0) then {_x cutFadeOut 0}} forEach allCutLayers;

        clearradio;
        enableradio false;

        if (is3DEN) then {
            ["ShowInterface",false] spawn bis_fnc_3DENInterface;
            if (get3denactionstate "togglemap" > 0) then {do3DENAction "togglemap";};
        };
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "Mouse": {
        _display = ctrlparent (_this select 0);
        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
        _pitchbank = BIS_fnc_camera_pitchbank;
        _pitch = _pitchbank select 0;
        _bank = _pitchbank select 1;

        //--- Camera movement
        if (BIS_fnc_camera_LMB || BIS_fnc_camera_RMB) then {
            _mX = _this select 1;
            _mY = _this select 2;

            if (BIS_fnc_camera_LMB) then {

                _defX = BIS_fnc_camera_LMBclick select 0;
                _defY = BIS_fnc_camera_LMBclick select 1;

                _camZ = (getposatl _cam select 2) max 1 min 256;
                _dX = (_mX - _defX) * _camZ / 2;
                _dY = -(_mY - _defY) * _camZ / 2;

                _camPos = getposasl _cam;
                _camPos = [_camPos,_dY,direction _cam] call bis_fnc_relpos;
                _camPos = [_camPos,_dX,direction _cam + 90] call bis_fnc_relpos;
                _cam setposasl _camPos;
            //};
            //if (BIS_fnc_camera_RMB) then  {
            } else {

                _defX = BIS_fnc_camera_RMBclick select 0;
                _defY = BIS_fnc_camera_RMBclick select 1;

                _dX = (_mX - _defX) * 180 * BIS_fnc_camera_fov;
                _dY = -(_mY - _defY) * 180 * BIS_fnc_camera_fov;

                if (BIS_fnc_camera_keys select DIK_LCONTROL) then {
                    _bank = (_bank + _dX * 0.1) max -180 min +180;
                    BIS_fnc_camera_pitchbank set [1,_bank];
                } else {
                    _cam setdir (direction _cam + _dX);
                    _pitch = (_pitch + _dY) max -90 min +90;
                };
                [
                    _cam,
                    _pitch,
                    _bank
                ] call bis_fnc_setpitchbank;
                BIS_fnc_camera_RMBclick = [_mX,_defY];
            };

        };

        //--- Cursortarget
        _pos = screentoworld [0.5,0.5];
        _intersectCam = getposasl _cam;
        _intersectTarget = [_pos select 0,_pos select 1,getterrainheightasl _pos];
        _objects = lineIntersectswith [
            _intersectCam,
            _intersectTarget,
            objnull,
            objnull,
            true
        ];
        _ctrlFrame = _display displayctrl 31421;
        _object = objnull;
        if (count _objects > 0) then {
            _ctrlOverlay = _display displayctrl 3142;
            _object = _objects select (count _objects - 1);
            missionnamespace setvariable ["BIS_fnc_camera_target",_object];

            _objectBbox = boundingbox _object;
            _objectBboxZ = (abs((_objectBbox select 0) select 2) + abs((_objectBbox select 1) select 2)) / 2;
            _objectPos = worldtoscreen [position _object select 0,position _object select 1,(getposatl _object select 2) + _objectBboxZ / 2];
            if (count _objectPos > 0) then {
                //_objectSize = sizeof typeof _object;
                _objectSize =
                    abs((_objectBbox select 0) select 0) + abs((_objectBbox select 1) select 0)
                    max
                    abs((_objectBbox select 0) select 1) + abs((_objectBbox select 1) select 1)
                    max
                    abs((_objectBbox select 0) select 2) + abs((_objectBbox select 1) select 2);
                _objectDis = _cam distance _object;

                _ctrlFrameSize = (_objectSize / _objectDis / 2) max 0.1;
                _ctrlFrame ctrlsetposition [
                    (_objectPos select 0) - safezoneX - ((_ctrlFrameSize / 2) * 3/4),
                    (_objectPos select 1) - safezoneY - (_ctrlFrameSize / 2),
                    _ctrlFrameSize * 3/4,
                    _ctrlFrameSize
                ];
            } else {
                missionnamespace setvariable ["BIS_fnc_camera_target",objnull];
                _ctrlFrame ctrlsetposition [-10,-10,0,0];
            };
        } else {
            missionnamespace setvariable ["BIS_fnc_camera_target",objnull];
            _ctrlFrame ctrlsetposition [-10,-10,0,0];
        };
        _ctrlFrame ctrlcommit 0;

        _camDir = direction _cam;
        _cardinalDir = round (_camDir / 45);
        _cardinalDirText = [
            "str_move_n",
            "str_move_ne",
            "str_move_e",
            "str_move_se",
            "str_move_s",
            "str_move_sw",
            "str_move_w",
            "str_move_nw",
            "str_move_n"
        ] select _cardinalDir;
        _cardinalDirText = localize _cardinalDirText;

        //--- Debug text
        _ctrlDebug = _display displayctrl 31420;
        _ctrlDebug ctrlsettext format [
            "\n\nX = %1 m\nY = %2 m\nZ (ATL) = %3 m\nZ (ASL) %4 m\nFOV = %5\nDir = %6° (%7)\nPitch = %8°\nBank = %9°\nBIS_fnc_camera_target = %10\n",
            getposatl _cam select 0,
            getposatl _cam select 1,
            getposatl _cam select 2,
            getposasl _cam select 2,
            BIS_fnc_camera_fov,
            round _camDir,
            _cardinalDirText,
            round _pitch,
            round _bank,
            _object
        ];

        //--- Nelson's solution for key lag
        _camMove = {
            _dX = _this select 0;
            _dY = _this select 1;
            _dZ = _this select 2;
            _pos = getposasl _cam;
            _dir = (direction _cam) + _dX * 90;
            _camPos = [
                (_pos select 0) + ((sin _dir) * _coef * _dY),
                (_pos select 1) + ((cos _dir) * _coef * _dY),
                (_pos select 2) + _dZ * _coef
            ];
            _camPos set [2,(_camPos select 2) max (getterrainheightasl _camPos)];
            _cam setposasl _camPos;
        };
        _camRotate = {
            _dX = _this select 0;
            _dY = _this select 1;
            _pitchbank = _cam call bis_fnc_getpitchbank;
            _cam setdir (direction _cam + _dX);
            [
                _cam,
                (_pitchbank select 0) + _dY,
                0
            ] call bis_fnc_setpitchbank;
        };
        _getCameraKey = {
            private _return = false;
            if (_x <= BIS_fnc_camera_keysCount) then {
                _return = BIS_fnc_camera_keys select _x;
            };
            _return;
        };
        _isActive = {
            (actionKeys _this) findIf {{_x call _getCameraKey} >= 0};
        };

        _coef = 0.1;
        if ("cameraMoveTurbo1" call _isActive) then {_coef = _coef * 10;};
        if ("cameraMoveTurbo2" call _isActive) then {_coef = _coef * 100;};
        if (BIS_fnc_camera_keys select DIK_RSHIFT) then {_coef = _coef / 10;};

        if ("cameraMoveForward" call _isActive) then {[0,1,0] call _camMove;};
        if ("cameraMoveBackward" call _isActive) then {[0,-1,0] call _camMove;};
        if ("cameraMoveLeft" call _isActive) then {[-1,1,0] call _camMove;};
        if ("cameraMoveRight" call _isActive) then {[1,1,0] call _camMove;};

        if ("cameraMoveUp" call _isActive) then {[0,0,1] call _camMove;};
        if ("cameraMoveDown" call _isActive) then {[0,0,-1] call _camMove;};

        if ("cameraLookDown" call _isActive) then {[+0,-1] call _camRotate;};
        if ("cameraLookLeft" call _isActive) then {[-1,+0] call _camRotate;};
        if ("cameraLookRight" call _isActive) then {[+1,+0] call _camRotate;};
        if ("cameraLookUp" call _isActive) then {[+0,+1] call _camRotate;};
        if ("cameraZoomIn" call _isActive) then {
            BIS_fnc_camera_fov = (BIS_fnc_camera_fov - 0.01) max 0.01;
            _cam campreparefov BIS_fnc_camera_fov;
            _cam camcommitprepared 0;
        };
        if ("cameraZoomOut" call _isActive) then {
            BIS_fnc_camera_fov = (BIS_fnc_camera_fov + 0.01) min 1;
            _cam campreparefov BIS_fnc_camera_fov;
            _cam camcommitprepared 0;
        };
    };


    ///////////////////////////////////////////////////////////////////////////////////////////
    case "MouseButtonDown": {
        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
        _button = _this select 1;
        _mX = _this select 2;
        _mY = _this select 3;
        _shift = _this select 4;
        _ctrl = _this select 5;
        _alt = _this select 6;

        if (_button > 0) then {
            BIS_fnc_camera_RMB = true;
            BIS_fnc_camera_RMBclick = [_mX,_mY];
        } else {
            BIS_fnc_camera_LMB = true;
            BIS_fnc_camera_LMBclick = [_mX,_mY];
        };
        BIS_fnc_camera_pitchbank set [0,(_cam call bis_fnc_getpitchbank) select 0];
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "MouseButtonUp": {
        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
        _button = _this select 1;
        if (_button > 0) then {
            BIS_fnc_camera_RMB = false;
            BIS_fnc_camera_RMBclick = [0,0];
        } else {
            BIS_fnc_camera_LMB = false;
            BIS_fnc_camera_LMBclick = [0,0];
        };

        BIS_fnc_camera_pitchbank set [0,(_cam call bis_fnc_getpitchbank) select 0];
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "MouseZChanged": {
        _display = _this select 0;
        _ctrlMap = _display displayctrl 3141;
        if !(ctrlenabled _ctrlMap) then {

            _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
            _camVector = vectordir _cam;

            _dZ = (_this select 1) * 10;
            _vX = (_camVector select 0) * _dZ;
            _vY = (_camVector select 1) * _dZ;
            _vZ = (_camVector select 2) * _dZ;

            _camPos = getposasl _cam;
            _camPos = [
                (_camPos select 0) + _vX,
                (_camPos select 1) + _vY,
                (_camPos select 2) + _vZ
            ];
            _camPos set [2,(_camPos select 2) max (getterrainheightasl _camPos)];
            _cam setposasl _camPos;
        };
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "KeyDown": {
        //_this call bis_fnc_log;
        _display = _this select 0;
        _key = _this select 1;
        _shift = _this select 2;
        _ctrl = _this select 3;
        _alt = _this select 4;
        _return = false;

        BIS_fnc_camera_keys set [_key,true];

        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
        _camSave = {
            _positions = profilenamespace getvariable ["BIS_fnc_camera_positions",[]];
            if (_ctrl) then {
                _positions set [
                    _this,
                    _camParams
                ];
                profilenamespace setvariable ["BIS_fnc_camera_positions",_positions];
                saveprofilenamespace;

                _display call BIS_fnc_camera_showPositions;
            } else {
                _params = _positions select _this;
                if !(isnil "_params") then {
                    ["Paste",_params] call bis_fnc_camera;
                };
            };
            _return = true;
        };
        _camParams = [
            worldname,
            position _cam,
            direction _cam,
            BIS_fnc_camera_fov,
            BIS_fnc_camera_pitchbank,
            sliderposition (_display displayctrl 31430),
            sliderposition (_display displayctrl 31432),
            sliderposition (_display displayctrl 31434),
            sliderposition (_display displayctrl 31436),
            sliderposition (_display displayctrl 31438),
            sliderposition (_display displayctrl 31440),
            sliderposition (_display displayctrl 31442),
            sliderposition (_display displayctrl 31444)
        ];

        switch (true) do {

            case (_key == DIK_1): {1 call _camSave;};
            case (_key == DIK_2): {2 call _camSave;};
            case (_key == DIK_3): {3 call _camSave;};
            case (_key == DIK_4): {4 call _camSave;};
            case (_key == DIK_5): {5 call _camSave;};
            case (_key == DIK_6): {6 call _camSave;};
            case (_key == DIK_7): {7 call _camSave;};
            case (_key == DIK_8): {8 call _camSave;};
            case (_key == DIK_9): {9 call _camSave;};
            case (_key == DIK_0): {0 call _camSave;};

            case (_key == DIK_F1): {
                _display createdisplay "RscDisplayDebugPublic";
                _result = true;
            };

            case (_key in actionkeys "cameraReset"): {
                BIS_fnc_camera_pitchbank = [0,0];
                [0,0] call _camRotate;
                BIS_fnc_camera_fov = 0.7;
                _camPos = position _cam;
                _camDir = direction _cam;
                _cam cameraeffect ["terminate","back"];
                camdestroy _cam;
                _cam = "camera" camcreate _camPos;
                _cam cameraeffect ["internal","back"];
                _cam setdir _camDir;
                missionnamespace setvariable ["BIS_fnc_camera_cam",_cam];
            };

            case (_key in actionkeys "showMap"): {
                _ctrlMouseArea = _display displayctrl 3140;
                _ctrlMap = _display displayctrl 3141;
                if (ctrlenabled _ctrlMap) then {
                    _ctrlMouseArea ctrlenable true;
                    _ctrlMap ctrlenable false;
                    ctrlsetfocus _ctrlMap;
                    _ctrlMap ctrlsetposition [-10,-10,0.8 * safezoneW,0.8 * safezoneH];
                    _ctrlMap ctrlcommit 0;
                } else {
                    _ctrlMouseArea ctrlenable false;
                    _ctrlMap ctrlenable true;
                    ctrlsetfocus _ctrlMap;
                    _ctrlMapPos = [
                        safezoneX + 0.1 * safezoneW,
                        safezoneY + 0.1 * safezoneH,
                        0.8 * safezoneW,
                        0.8 * safezoneH
                    ];
                    _ctrlMap ctrlsetposition _ctrlMapPos;
                    _ctrlMap ctrlcommit 0;
                    _ctrlMap ctrlmapanimadd [0,0.1,position _cam];
                    ctrlmapanimcommit _ctrlMap;
                    {player reveal [_x,4]} foreach allunits;
                };
            };

            case (_key in actionkeys "cameraInterface"): {
                _return = true;
                _ctrlOverlays = [_display displayctrl 3142,_display displayctrl 3143];
                if (BIS_fnc_camera_visibleHUD) then {
                    {_x ctrlsetfade 1;} foreach _ctrlOverlays;
                    (_display displayctrl 3142) ctrlenable false;
                    cameraEffectEnableHUD false;
                } else {
                    {_x ctrlsetfade 0;} foreach _ctrlOverlays;
                    (_display displayctrl 3142) ctrlenable true;
                    cameraEffectEnableHUD true;
                };
                BIS_fnc_camera_visibleHUD = !BIS_fnc_camera_visibleHUD;
                {_x ctrlcommit 0.1} foreach _ctrlOverlays;
            };

            case (_key == DIK_X): {
                if (_ctrl) then {
                    [
                        "Paste",
                        _camParams
                    ] spawn {
                        copytoclipboard format ["%1 call bis_fnc_camera;",_this];
                    };
                };
            };
            case (_key == DIK_C): {
                if (_ctrl) then {
                    _camParams spawn {
                        copytoclipboard format ["%1",_this];
                    };
                };
            };
            case (_key == DIK_V): {
                if (_ctrl) then {
                    _clipboard = call compile copyfromclipboard;
                    if (typename _clipboard == typename []) then {
                        _clipboard = [_clipboard] param [0,[],[[]],[13]];
                        if (count _clipboard == 13) then {
                            ["Paste",_clipboard] call bis_fnc_camera;
                        } else {
                            ["Wrong format of camera params (""%1"")",copyfromclipboard] call bis_fnc_error;
                        };
                    };
                };
            };

            case (_key in actionkeys "cameraVisionMode"): {
                BIS_fnc_camera_vision = BIS_fnc_camera_vision + 1;
                _vision = BIS_fnc_camera_vision % 4;
                switch (_vision) do {
                    case 0: {
                        camusenvg false;
                        false SetCamUseTi 0;
                    };
                    case 1: {
                        camusenvg true;
                        false SetCamUseTi 0;
                    };
                    case 2: {
                        camusenvg false;
                        true SetCamUseTi 0;
                    };
                    case 3: {
                        camusenvg false;
                        true SetCamUseTi 1;
                    };
                };
            };

            case (_key == DIK_P): {
                if (_ctrl) then {
                    screenshot format (["SplendidCamera\%1_['%2',%3,%4,%5,%6,%7,%8,%9,%10,%11].png",profilename] + _camParams);
                };
            };

            case (_key == DIK_SPACE): {
                _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
                _vehicle = vehicle player;
                _surfaces = lineIntersectsSurfaces [getposasl _cam,AGLtoASL screentoworld [0.5,0.5]];
                _worldPos = if (count _surfaces > 0) then {ASLtoAGL (_surfaces select 0 select 0)} else {screentoworld [0.5,0.5]};

                _alt = if (_vehicle != player) then {getposatl _vehicle select 2} else {_worldPos select 2}; //--- Keep altitude when in vehicle
                _vehicle setposatl [_worldPos select 0,_worldPos select 1,_alt];
                _vehicle setvelocity [0,0,0];
            };

            case (_key == DIK_ESCAPE): {

                _displayType = if (ismultiplayer) then {"RscDisplayMPInterrupt"} else {"RscDisplayInterrupt"};
                _displayPause = _display createdisplay _displayType;

                //--- Abort menu doesn't work on its own, script it
                _ctrlAbort = _displayPause displayctrl 104;
                _ctrlAbort ctrlshow false;
                _ctrlAbortNew = _displayPause ctrlcreate ["RscButtonMenuCancel",2];
                _ctrlAbortNew ctrlsetposition ctrlposition _ctrlAbort;
                _ctrlAbortNew ctrlcommit 0;
                if (isnull cameraon) then {
                    _ctrlAbortNew ctrlsettext ctrltext _ctrlAbort;
                } else {
                    _ctrlAbortNew ctrlsettext format ["%1 (%2)",localize "STR_DISP_CLOSE",localize "STR_a3_rscdisplaycamera_header"];
                };
                _ctrlAbortNew ctrladdeventhandler [
                    "buttonclick",
                    {
                        (ctrlparent (_this select 0)) closedisplay 2;
                        (finddisplay 314) closedisplay 2;

                        //--- Exit the scenario when no player is present
                        if (isnull cameraon) then {([] call bis_fnc_displayMission) closedisplay 2;};
                    }
                ];

                BIS_fnc_camera_RMB = false;
                BIS_fnc_camera_LMB = false;
                BIS_fnc_camera_RMBclick = [0,0];
                BIS_fnc_camera_LMBclick = [0,0];

                _return = true;
            };
            default {};
        };
        _return
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "KeyUp": {
        BIS_fnc_camera_keys set [_this select 1,false];
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "Draw3D": {
        if (BIS_fnc_camera_visibleHUD) then {
            _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
            _locations = nearestlocations [position _cam,["nameVillage","nameCity","nameCityCapital"],2000];
            {
                _pos = locationposition _x;
                _pos set [2,0];
                drawicon3d [
                    "#(argb,8,8,3)color(0,0,0,0)",
                    [1,1,1,1],
                    _pos,
                    0,
                    0,
                    0,
                    text _x,
                    1
                ];
            } foreach _locations;
        };
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "MapDraw": {
        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
        _ctrlMap = _this select 0;
        _ctrlMap drawIcon [
            BIS_fnc_camera_iconCamera,
            [0,1,1,1],
            position _cam,
            32,
            32,
            direction _cam,
            "",
            1
        ];
        //[texture, color, position, width, height, angle, text, shadow]
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "MapClick": {
        _ctrlMap = _this select 0;
        _button = _this select 1;
        _posX = _this select 2;
        _posY = _this select 3;
        if (_button == 0) then {
            _worldPos = _ctrlMap ctrlmapscreentoworld [_posX,_posY];
            _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
            _cam setpos [
                _worldPos select 0,
                _worldPos select 1,
                getposatl _cam select 2
            ];
        };
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderFocus": {
        private ["_display"];
        _display = ctrlparent (_this select 0);
        _value = _this select 1;
        _value = _value^2;
        _focus = 1;
        _text = str (round (_value * 1000) / 1000) + " m";
        if (_value == 0) then {_value = -1; _text = localize "STR_WI_ZEROING_AUTO";};
        if (_value == 100) then {_value = -1; _focus = -1; _text = "DISABLED";};

        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
        _cam campreparefocus [_value,_focus];
        _cam camcommitprepared 0;

        _ctrlValue = _display displayctrl 31431;
        _ctrlValue ctrlsettext _text;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderAperture": {
        private ["_display"];
        _display = ctrlparent (_this select 0);
        _value = _this select 1;
        //_value = _value^2;
        _text = str (round (_value * 100) / 100);
        if (_value == 0) then {_value = -1; _text = localize "STR_WI_ZEROING_AUTO";};

        setaperture _value;

        _ctrlValue = _display displayctrl 31433;
        _ctrlValue ctrlsettext _text;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderDaytime": {
        private ["_display"];
        _display = ctrlparent (_this select 0);
        _value = _this select 1;
        _text = [_value / 60,"HH:MM:SS"] call bis_fnc_timetostring;

        0 setovercast (sliderposition (_display displayctrl 31436));

        _date = date;
        _date set [3,0];
        _date set [4,_value];
        setdate _date;

        _ctrlValue = _display displayctrl 31435;
        _ctrlValue ctrlsettext _text;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderOvercast": {
        private ["_display"];
        _display = ctrlparent (_this select 0);
        _value = _this select 1;
        _text = str (round (_value * 100) / 100);

        _fogparams = fogparams;
        0 setovercast _value;
        forceweatherchange;
        0 setfog _fogparams; //--- Reapply fog because forceWeatherChange resets it

        _ctrlValue = _display displayctrl 31437;
        _ctrlValue ctrlsettext _text;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderAcctime": {
        private ["_display"];
        _display = ctrlparent (_this select 0);
        _value = _this select 1;
        _text = str (round (_value * 100) / 100);

        setacctime _value;

        _ctrlValue = _display displayctrl 31439;
        _ctrlValue ctrlsettext _text;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderColor": {
        private ["_display"];
        _display = _this select 0;

        _valueBrightness = _this param [1,sliderposition (_display displayctrl 31440)];
        _valueContrast = _this param [2,sliderposition (_display displayctrl 31442)];
        _valueSaturation = _this param [3,sliderposition (_display displayctrl 31444)];

        with missionnamespace do {
            BIS_fnc_camera_ppColor ppEffectAdjust [1,_valueBrightness,_valueContrast,[1,1,1,0],[1,1,1,_valueSaturation],[0.75,0.25,0,1]];
            BIS_fnc_camera_ppColor ppEffectCommit 0;
        };

        (_display displayctrl 31441) ctrlsettext str (round (_valueBrightness * 100) / 100);
        (_display displayctrl 31443) ctrlsettext str (round (_valueContrast * 100) / 100);
        (_display displayctrl 31445) ctrlsettext str (round (_valueSaturation * 100) / 100);
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderContrast": {
        private ["_display"];
        _display = ctrlparent (_this select 0);
        _value = _this select 1;
        _text = str (round (_value * 100) / 100);

        //setacctime _value;

        _ctrlValue = _display displayctrl 31443;
        _ctrlValue ctrlsettext _text;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "SliderSaturation": {
        private ["_display"];
        _display = ctrlparent (_this select 0);
        _value = _this select 1;
        _text = str (round (_value * 100) / 100);

        //setacctime _value;

        _ctrlValue = _display displayctrl 31445;
        _ctrlValue ctrlsettext _text;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "Paste": {
        _this spawn {
            disableserialization;
            [] call bis_fnc_camera;
            waituntil {!isnull (uinamespace getvariable ["BIS_fnc_camera_display",displaynull])};
            with uinamespace do {
                _worldname =	_this param [0,"",[""]];
                if (_worldname != worldname) exitwith {["Camera params are for world ""%1"", you're currently on ""%2""",_worldname,worldname] call bis_fnc_error;};
                _pos =		_this param [1,position player,[[]],[3]];
                _dir =		_this param [2,direction player,[0]];
                _fov =		_this param [3,BIS_fnc_camera_fov,[0]];
                _pitchbank =	_this param [4,[0,0],[[]],[2]];
                _focus =	_this param [5,0,[0]];
                _aperture =	_this param [6,0,[0]];
                _daytime =	_this param [7,daytime * 60,[0]];
                _overcast =	_this param [8,overcast,[0]];
                _acctime =	_this param [9,0,[0]];
                _brightness =	_this param [10,1,[0]];
                _contrast =	_this param [11,0,[0]];
                _saturation =	_this param [12,1,[0]];

                _pitch =	_pitchbank param [0,0,[0]];
                _bank =		_pitchbank param [1,0,[0]];

                _display = uinamespace getvariable ["BIS_fnc_camera_display",displaynull];
                _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
                _cam setpos _pos;
                _cam setdir _dir;
                BIS_fnc_camera_fov = _fov;
                [
                    _cam,
                    _pitch,
                    _bank
                ] call bis_fnc_setpitchbank;

                _cam campreparefov BIS_fnc_camera_fov;
                _cam camcommitprepared 0;
                BIS_fnc_camera_pitchbank = _pitchbank;
                (_display displayctrl 31430) slidersetposition _focus;
                (_display displayctrl 31432) slidersetposition _aperture;
                (_display displayctrl 31434) slidersetposition _daytime ;
                (_display displayctrl 31436) slidersetposition _overcast;
                (_display displayctrl 31438) slidersetposition _acctime;
                (_display displayctrl 31440) slidersetposition _brightness;
                (_display displayctrl 31442) slidersetposition _contrast;
                (_display displayctrl 31444) slidersetposition _saturation;
                ["SliderFocus",		[(_display displayctrl 31430),_focus]] call bis_fnc_camera;
                ["SliderAperture",	[(_display displayctrl 31432),_aperture]] call bis_fnc_camera;
                ["SliderDaytime",	[(_display displayctrl 31434),_daytime]] call bis_fnc_camera;
                ["SliderOvercast",	[(_display displayctrl 31436),_overcast]] call bis_fnc_camera;
                ["SliderAcctime",	[(_display displayctrl 31438),_acctime]] call bis_fnc_camera;
                ["SliderColor",		[_display]] call bis_fnc_camera;
            };
        };
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "InitDummy": {
        _worldname =	_this param [0,"",[""]];
        if (_worldname != worldname) exitwith {["Camera params are for world ""%1"", you're currently on ""%2""",_worldname,worldname] call bis_fnc_error;};
        _pos =		_this param [1,position player,[[]],[3]];
        _dir =		_this param [2,direction player,[0]];
        _fov =		_this param [3,0.7,[0]];
        _pitchbank =	_this param [4,[0,0],[[]],[2]];
        _focus =	_this param [5,0,[0]];
        _aperture =	_this param [6,0,[0]];
        _daytime =	_this param [7,daytime * 60,[0]];
        _overcast =	_this param [8,overcast,[0]];
        _acctime =	_this param [9,0,[0]];
        _brightness =	_this param [10,1,[0]];
        _contrast =	_this param [11,0,[0]];
        _saturation =	_this param [12,1,[0]];

        _pitch =	_pitchbank param [0,0,[0]];
        _bank =		_pitchbank param [1,0,[0]];

        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam","camera" camcreate _pos];
        _cam cameraeffect ["internal","back"];
        _cam campreparefov _fov;
        _cam camcommitprepared 0;
        showcinemaborder false;
        missionnamespace setvariable ["BIS_fnc_camera_cam",_cam];

        if (isnil "BIS_fnc_camera_ppColor") then {
            BIS_fnc_camera_ppColor = ppEffectCreate ["colorCorrections", 1776];
            BIS_fnc_camera_ppColor ppEffectEnable true;
            BIS_fnc_camera_ppColor ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,1],[0.75,0.25,0,1]];
            BIS_fnc_camera_ppColor ppEffectCommit 0;
        };

        _cam setdir _dir;
        ([_cam] + _pitchbank) call bis_fnc_setpitchbank;
        ["SliderFocus",		[controlnull,_focus]] call bis_fnc_camera;
        ["SliderAperture",	[controlnull,_aperture]] call bis_fnc_camera;
        ["SliderDaytime",	[controlnull,_daytime]] call bis_fnc_camera;
        ["SliderOvercast",	[controlnull,_overcast]] call bis_fnc_camera;
        ["SliderAcctime",	[controlnull,_acctime]] call bis_fnc_camera;
        ["SliderColor",		[displaynull,_brightness,_contrast,_saturation]] call bis_fnc_camera;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "ExitDummy": {
        _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
        _cam cameraeffect ["terminate","back"];
        camdestroy _cam;

        ppeffectdestroy (missionnamespace getvariable ["BIS_fnc_camera_ppColor",-1]);
        BIS_fnc_camera_ppColor = nil;
    };

    ///////////////////////////////////////////////////////////////////////////////////////////
    case "Exit": {
        setacctime (missionnamespace getvariable ["BIS_fnc_camera_acctime",1]);
        setaperture -1;
        enableradio true;
        showChat true;

        with missionnamespace do {
            _cam = missionnamespace getvariable ["BIS_fnc_camera_cam",objnull];
            _cam cameraeffect ["terminate","back"];

            if (is3DEN) then {
                get3DENCamera setpos position _cam;
                get3DENCamera setvectordirandup [vectordir _cam,vectorup _cam];
                get3DENCamera cameraeffect ["internal","back"];
                ["ShowInterface",true] call bis_fnc_3DENInterface;
            };

            camdestroy _cam;
            ppeffectdestroy BIS_fnc_camera_ppColor;

            BIS_fnc_camera_cam = nil;
            BIS_fnc_camera_target = nil;
            BIS_fnc_camera_acctime = nil;
            BIS_fnc_camera_ppColor = nil;
        };

        cameraon switchcamera BIS_fnc_camera_cameraView;

        BIS_fnc_camera_display = nil;
        BIS_fnc_camera_LMB = nil;
        BIS_fnc_camera_RMB = nil;
        BIS_fnc_camera_keys = nil;
        BIS_fnc_camera_keysCount = nil;
        BIS_fnc_camera_LMBclick = nil;
        BIS_fnc_camera_RMBclick = nil;
        BIS_fnc_camera_pitchbank = nil;
        BIS_fnc_camera_fov = nil;
        BIS_fnc_camera_iconCamera = nil;
        BIS_fnc_camera_vision = nil;
        BIS_fnc_camera_visibleHUD = nil;
        BIS_fnc_camera_cameraView = nil;

        removemissioneventhandler ["draw3d",BIS_fnc_camera_draw3D];
        BIS_fnc_camera_draw3D = nil;

        camusenvg false;
        false SetCamUseTi 0;

        if ((productVersion select 4) == "Development") then {
            _displayMission = [] call (uinamespace getvariable "bis_fnc_displayMission");
            _control = _displayMission displayctrl 11400;
            _control ctrlsetfade 0;
            _control ctrlcommit 0;
        };
    };
};