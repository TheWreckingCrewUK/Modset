//execVM "operation_framework/caching/caching.sqf"
  
addMissionEventHandler ["HandleDisconnect", {_this execVM "operation_framework\op_Template\miscErrorFixes\Disconnets.sqf"}];