waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

call compile preprocessFileLineNumbers "twc_framework\functions.sqf";


RollUpAction = ["RollID","Roll Sleeves Up\Down","", {call TWC_fnc_RollShirt},{call TWC_fnc_HasUniformModern}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], RollUpAction] call ace_interact_menu_fnc_addActionToObject;