// see http://community.bistudio.com/wiki/Sound for more details

class CfgSoundCurves
{

// amplitude attenuation curve definitions
// note that x value is scaled to range
	class Sterling_InverseSquareCurve
	{
	  points[] =
	  {
		{0.00, 1},
		{0.05, 0.615},
		{0.10, 0.4194},
		{0.15, 0.3015},
		{0.20, 0.225},
		{0.25, 0.1725},
		{0.30, 0.135},
		{0.35, 0.1072},
		{0.40, 0.0861},
		{0.45, 0.0697},
		{0.50, 0.0566},
		{0.60, 0.0375},
		{0.70, 0.0244},
		{0.80, 0.015},
		{0.90, 0.0081},
		{1.00, 0}
	  };
	};
};