_index = player createDiarySubject ["RadarTower","Radar Tower"];
_index2 = player createDiarySubject ["CTI", "Capturing the Island"];
_index3 = player createDiarySubject ["Commander","Player Commander"];

player createDiaryRecord ["RadarTower", ["Radar Tower", "The radar towers will detect any blufor air units. You will know if the radar tower is locking on to you as your on board computer will sound an alarm while you are in the radius of the radar. If you stay in the radars range for too long the enemy may send something to intercept you. To avoid being detected try to fly low. The range is estimated with large red circles on your map."]];

player createDiaryRecord ["CTI", ["Capturing the Island", "To capture the island you must destroy the enemies Main HQ. Capturing Town/Inf/Mech objectives and causing damage to the enemy will make the Main HQ easier to attack."]];

player createDiaryRecord ["Commander", ["Player Commander", "The player commander is a player tasked with setting up a new Blufor base. They may place within 200 meters of the command boat and can move it as many times as they want. They are also the highest ranking player on the island and may act as a platoon commander for the sections."]];

player createDiaryRecord ["Commander", ["Base", "The player commander's base once set up will be the respawn point for Blufor. It will also allow them to spawn both ground and air vehicles. The commander needs to make sure they put it in a suitable location to spawn helicopters."]];

player createDiaryRecord ["Commander", ["Base Attacks", "Once the enemy detects your base that will be the main target of all counter attacks. Make sure to defend it or else you will lose the base. When the base is under attack players will temporarily be unable to spawn until either the counter attack fails and then the commander base will become availible again or if the counter attack succeedes the Molos airfield will open. If the Molos airfield is not captured then Blufor will be sent back to the LHD. Plan accordingly."]];