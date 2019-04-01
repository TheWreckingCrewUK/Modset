class ace_common_CompassControl;

class ace_spectator_display {
	class Controls {
		class compass: ace_common_CompassControl {
			idc = 162555;
			onLoad = "params ['_control']; private _display = ctrlParent _control; private _fnc_update = { params ['_display']; private _compassControl = _display getVariable 'ace_common_compassControl'; private _view = AGLToASL positionCameraToWorld [0, 0, 0] vectorFromTo AGLToASL positionCameraToWorld [0, 0, 1]; private _viewHorizontal = vectorNormalized (_view vectorCrossProduct [0, 0, 1]); private _dir = acos (_viewHorizontal select 0); if (_viewHorizontal select 1 > 0) then { _dir = 360 - _dir; }; _compassControl ctrlSetPosition [-(16 * (((safezoneW / safezoneH) min 1.2)/ 40)) * (_dir / 360),0]; _compassControl ctrlCommit 0; }; _display displayAddEventHandler ['MouseMoving',_fnc_update]; _display displayAddEventHandler ['MouseHolding',_fnc_update]; _display displayAddEventHandler ['KeyDown', {_this call twc_ui_fnc_handleSpectateCompass}];";
		};
	};
};