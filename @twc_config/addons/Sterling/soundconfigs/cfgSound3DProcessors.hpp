// see http://community.bistudio.com/wiki/Sound for more details

class cfgSound3DProcessors
{
	class Sterling_Shot3DProcessingType
	{
		type = "panner"; // type od sound processor
		innerRange = 0; // below this range provessor is 100% applied
		range = 5; // above this range, sound behaves ase usual 3D sound - mono, 100% positional
		rangeCurve = LinearCurve; // transition curve used for interpolation between innerRange and range
	};
	class Sterling_ShotTail3DProcessingType
	{
		type = "panner";
		innerRange = 5;
		range = 160;
		rangeCurve = InverseSquare1Curve;
	};
};