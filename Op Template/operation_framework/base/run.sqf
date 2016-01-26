waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

while { alive player } do {
	if (Player distance getmarkerpos "base" <125) then {
			player forceWalk true;	
		} else {
			player forceWalk false;
		};
	sleep .503;
};