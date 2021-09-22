/** Quick macro for showing deprecated functions being called in Single player testing **/
#define DEPRECATED(functionName) if !(TWC_Core_isServer) then { systemChat format ["%1 was used but is deprecated - please update, will be removed", functionName]; };
#define DEPRECATED_ALT(functionName, newFunctionName) if !(TWC_Core_isServer) then { systemChat format ["%1 was used but is deprecated, use %2 instead", functionName, newFunctionName]; };
