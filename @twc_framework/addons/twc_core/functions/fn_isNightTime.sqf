_lightLevel = (sunOrMoon * sunOrMoon * (1 - overcast * 0.25) + (moonIntensity / 5) * (1 - overcast)) min 1;

if (_lightLevel > 0.5) exitWith { true; };

false;