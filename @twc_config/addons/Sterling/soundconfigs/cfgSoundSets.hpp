// see http://community.bistudio.com/wiki/Sound for more details

class CfgSoundSets
{
	class Sterling_Shot_SoundSet
	{
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			Sterling_Closure_SoundShader,
			Sterling_closeShot_SoundShader,
			Sterling_midShot_SoundShader,
			Sterling_distShot_SoundShader
		};

		volumeFactor = 1.6; // volume multiplicator factor
		volumeCurve = Sterling_InverseSquareCurve; // amplitude attenuation curve, can be class name or array of points (CfgSoundCurves)
		sound3DProcessingType = Sterling_Shot3DProcessingType; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = Sterling_ShotDistanceFreqAttenuationFilter; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
		spatial = true; // is sound considered as positional
		doppler = false; // doppler effect simulation
		loop = false;
	};

class Sterling_Tail_SoundSet
	{
		soundShaders[] =
		{
			Sterling_tailInterior_SoundShader,
			Sterling_tailTrees_SoundShader,
			Sterling_tailForest_SoundShader,
			Sterling_tailMeadows_SoundShader,
			Sterling_tailHouses_SoundShader
		};

		soundShadersLimit = 2;
		// engine will play only soundShadersLimit number of SoundShaders with highest volume value (including calculation of rangeCurve) from the group of SoundShaders which has limitation parameter set to true plus all the others

		volumeFactor = 1;
		volumeCurve = Sterling_InverseSquareCurve;
		frequencyRandomizerMin = 0.01; // parameters for randomization of frequency to avoid flanging effect when the same sounds are playing in high rate
		frequencyRandomizer = 0.05;
		sound3DProcessingType = Sterling_ShotTail3DProcessingType;
		distanceFilter = Sterling_ShotTailDistanceFreqAttenuationFilter;
		spatial = true;
		doppler = false;
		loop = false;
	};
};