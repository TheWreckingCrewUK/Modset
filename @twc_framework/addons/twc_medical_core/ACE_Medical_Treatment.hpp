class ACE_Medical_Treatment {
		class IV {
			class BloodIV {
				volume = 1500;
			};
			
			class BloodIV_500: BloodIV {
				volume = 750;
			};
			
			class BloodIV_250: BloodIV {
				volume = 375;
			};
			
			class SalineIV: BloodIV {
				volume = 1250;
			};
			
			class SalineIV_500: SalineIV {
				volume = 625;
			};
			
			class SalineIV_250: SalineIV {
				volume = 300;
			};
		};
	};
};
