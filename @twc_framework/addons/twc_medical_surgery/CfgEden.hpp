class ctrlToolbox;

class Cfg3DEN {
	class Attributes {
		class Default;
		class Title: Default {
			class Controls {
				class Title;
			};
		};
	};

	class Object {
		class AttributeCategories {
			class TWC_attributes {
				class Attributes {
					class TWC_isFieldTent {
						property = "TWC_isFieldTent";
						value = 0;
						control = "Checkbox";
						displayName = "Set as Medical Field Tent";
						tooltip = "Sets the facility as a medical field tent, disabling staff features";
						expression = "_this setVariable ['TWC_Medical_isFieldTent', _value, true]; _this setVariable ['ace_medical_isMedicalFacility', _value, true];";
						typeName = "BOOL";
						condition = "(1 - objectBrain) * (1 - objectVehicle)";
						defaultValue = "false";
					};
				};
			};
		};
	};
};
