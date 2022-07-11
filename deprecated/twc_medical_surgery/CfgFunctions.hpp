class CfgFunctions {
	class TWC_Medical_Surgery {
		tag = "twc_medical_surgery";
		class init {
			file = "twc_medical_surgery\functions";
			// Init
			class clientInit {};
			class serverInit {};
			
			// Generics
			class isInFieldTent {};

			// Field Surgery
			class canFieldSurgery {};
			class fieldSurgery {};
			class fieldSurgeryLocal {};
			class fieldSurgeryProgress {};
			class fieldSurgeryTime {};

			// Surgery
			class canSurgery {};
			class surgery {};
			class surgeryLocal {};
			class surgeryTime {};

			// Curator/Editor
			class curatorSetFieldTent {};
			class moduleAssignFieldTent {};
		};
	};
};