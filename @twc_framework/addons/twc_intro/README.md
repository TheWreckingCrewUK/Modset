# TWC_Intro
## Themes

TWC Intro handles the introduction music for an operation. There's two critera for the piece selected usually, firstly the era and then if it's a night op or not. These values are derived from the mission prep module. However, there's a special case too. If the mission has `TWC_Intro_Special` set to a CfgSounds entry on the `missionNamespace`, aka `missionNamespace getVariable ["TWC_Intro_Special", "christmas_2017_intro"]` then it will play that sound clip, instead of a music clip derived. The reason this is a sound clip and not a theme, is it's probably required to be heard for a cinematic etc. and the sound is garaunteed unless they've muted the game - where as music plays through the music channel, which is fine for them to mute.

## Camera Script
Work In Progress. Will automate the Christmas section reveal as part of the no-move start to an operation. Will display their class name (which should dictate their role), as well as the players name of their occupier.