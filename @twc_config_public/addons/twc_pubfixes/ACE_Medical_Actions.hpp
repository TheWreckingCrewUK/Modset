class ACE_Medical_Actions {
	class Advanced {
		class Bandage;
		class FieldDressing: Bandage {
		};
		
		class ElasticBandage: FieldDressing {
			treatmentTime = 20;
		};
		
		class QuikClot: FieldDressing {
			treatmentTime = 4;
		};
		
		class PackingBandage: FieldDressing {
			items[] = {{"ACE_packingBandage", "ACE_fieldDressing", "ACE_elasticBandage"}};
			displayName = "Pack Wound";
			displayNameProgress  = "Packing Wound...";
			condition = "((count((_this select 1) getvariable ['ACE_Medical_openWounds', []])) > 0)";
			treatmentTime = 13;
		};
	};
};