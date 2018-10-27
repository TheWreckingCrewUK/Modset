# TWC_Incoporeal
## Intro's
### Operations

TWC incorporeal handles the introduction music for an operation. There's two critera for the piece selected usually, firstly the era and then if it's a night op or not. These values are derived from the mission prep module. However, there's a special case too. If the mission has `TWC_Intro_Special` set to a CfgSounds entry on the `missionNamespace`, aka `missionNamespace getVariable ["TWC_Intro_Special", "christmas_2017_intro"]` then it will play that sound clip, instead of a music clip derived. The reason this is a sound clip and not a theme, is it's probably required to be heard for a cinematic etc. and the sound is garaunteed unless they've muted the game - where as music plays through the music channel, which is fine for them to mute.

### Public Stingers
Public also gains access to much shorter "stingers" - that's because once loaded in, you can generally move straight away without desync issues (mission isn't started with 30+ all present commonly, and people can join in/leave later). So there's much shorter 15 second stings, that just serve as a nice distinction between the game modes. Again, played via the music channel so players can mute that if they don't like it.

### Intro Camera for Operations
Work In Progress. Will automate the Christmas-style section reveal as part of the no-move start to an operation. Will display their class name (which should dictate their role), as well as the players name of their occupier. Allowing them to get better adjusted to their section, and having something a bit more aesthetically pleasing to observe during lag catch up.

## Outro's
TWC incorporeal also handles the TWC custom mission finished screen, that incorporates its own end screen UI, music and camera system. By default, when the mission end is triggered, it will cycle through the dead telling us about their circumstance, ending up if the mission was a success or not (better defined outcomes, too). The end screen UI based on kill tracker for ACEX better handles operation statistics for our playstyle. It gives a total at the bottom, but also awards vehicle kills to the full crew and lists that as a seperate vehicle section.

Outro also features a location module, that if placed by the mission maker will be part of the end screen. This can either be the default circle around the module (with camera properties defined by it, i.e. distance, fov etc.), but if it's sync'd with two markers, it will pan between them focusing on the module itself, allowing for a panning shot.

## Death Screen
TWC incorporeal also handles the death screen. The death screen informs the player of how they died, and gives them a moments reflection. The music that plays changes slightly depending on their circumstance. Attempts to fade them into spectate, as opposed to a hard shunt. This is used to pass data to the outro system, as well.

## Death Types
* Instantly Killed
* Bled Out
* Cardiac Arrest
* Medication Overdose (defer which one, too)
* Clinical Death (aka no heart beating, no breathing - no CPR performed to replace this)