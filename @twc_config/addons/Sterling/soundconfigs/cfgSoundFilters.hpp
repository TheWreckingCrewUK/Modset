// see http://community.bistudio.com/wiki/Sound for more details

class cfgDistanceFilters
{
	class Sterling_ShotDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter"; // type of filter
		minCutoffFrequency = 300; // cutoff frequency is constantly falling with the distance to minCutoffFrequency value
		qFactor = 1; // https://en.wikipedia.org/wiki/Q_factor
		innerRange = 10; // below this range no filter is applied
		range = 2000; // above this range filter is static at minCutoffFrequency frequency
		powerFactor = 32; // parameter of function which describes relationship between distance and cutoff frequency, higher value means sooner attenuation of higher frequencies
	};

	class Sterling_ShotTailDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 300;
		qFactor = 1;
		innerRange = 10;
		range = 1500;
		powerFactor = 32;
	};
};