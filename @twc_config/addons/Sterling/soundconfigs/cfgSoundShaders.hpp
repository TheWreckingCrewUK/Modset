// see http://community.bistudio.com/wiki/Sound for more details

class CfgSoundShaders
{
	class Sterling_Closure_SoundShader
	{
		samples[] =
		{
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02", 1 }
		};
		volume = db-7;
		range = 5;
	};


// Standart shot ---------------------------------------------------------------------------------------------------------------------------

	class Sterling_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ "sterling\sounds\uzi_s1", 1 },
			{ "sterling\sounds\uzi_s1", 1 },
			{ "sterling\sounds\uzi_s1", 1 }
		};
		volume = db0; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 50; // maximum range in meters where sound is played
		rangeCurve = closeShotCurve; // curve class name (CfgSoundCurves) or specific curve definition (array of points)
		// note that curve is stretched to region <0;range>
	};

	class Sterling_midShot_SoundShader
	{
		samples[] =
		{
			{ "sterling\sounds\uzi_s2", 1 },
			{ "sterling\sounds\uzi_s2", 1 },
			{ "sterling\sounds\uzi_s2", 1 }
		};
		volume = db-2;
		range = 1800;
		rangeCurve[] =
		{
			{0, 0.2},
			{50, 1},
			{300, 0},
			{1800, 0}
		};
	};
	class Sterling_distShot_SoundShader
	{
		samples[] =
		{
			{ "sterling\sounds\uzi_s3", 1 },
			{ "sterling\sounds\uzi_s3", 1 },
			{ "sterling\sounds\uzi_s3", 1 }
		};
		volume = db0;
		range = 1800;
		rangeCurve[] =
		{
			{0, 0},
			{50, 0},
			{300, 1},
			{1800, 1}
		};
	};


// Reflection Tails ---------------------------------------------------------------------------------------------------------------------------

	class Sterling_tailInterior_SoundShader
	{
		samples[] = { { "sterling\sounds\uzi_s1", 1 } };
		volume = interior;
		range = 500;
		limitation = false; // this SoundShader will always be played if interior>0
	};

	class Sterling_tailTrees_SoundShader
	{
		samples[] = { { "sterling\sounds\uzi_s2", 1 } };
		volume = (1-interior/1.4)*trees/3;
		range = 1800;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};

	class Sterling_tailForest_SoundShader
	{
		samples[] = { { "sterling\sounds\uzi_s3", 1 } };
		volume = (1-interior/1.4)*forest/3;
		range = 1800;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};

	class Sterling_tailMeadows_SoundShader
	{
		samples[] = { { "sterling\sounds\uzi_s4", 1 } };
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1800;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};

	class Sterling_tailHouses_SoundShader
	{
		samples[] = { { "sterling\sounds\uzi_s1", 1 } };
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		limitation = true; // this SoundShader belongs to the group of limited SoundShaders
	};
};