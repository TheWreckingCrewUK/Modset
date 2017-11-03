	class CUP_O_TK_INS_Soldier_TL;
	class CUP_O_TK_INS_Soldier;
	class CUP_O_TK_INS_Soldier_AT;
	class CUP_O_TK_INS_Soldier_MG;
	
	class twc_greek_Soldier_TL: CUP_O_TK_INS_Soldier_TL
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] call twc_fnc_setUniform;};";
		};
	};
	class twc_greek_Soldier: CUP_O_TK_INS_Soldier
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] call twc_fnc_setUniform;};";
		};
	};
	class twc_greek_Soldier_AT: CUP_O_TK_INS_Soldier_AT
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] call twc_fnc_setUniform;};";
		};
	};
	class twc_greek_Soldier_MG: CUP_O_TK_INS_Soldier_MG
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] call twc_fnc_setUniform;};";
		};
	};