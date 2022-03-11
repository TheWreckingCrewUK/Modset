# TWC_Camera
## Intro's
TWC camera handles the introduction music for an operation, as well as the camera and information. There's two critera for the piece selected usually, firstly the era and then if it's a night op or not. These values are derived from the mission prep module. However, there's a special case too. If the mission has `TWC_Intro_Special` set to a CfgSounds entry on the `missionNamespace`, aka `missionNamespace getVariable ["TWC_Intro_Special", "christmas_2017_intro"]` then it will play that sound clip, instead of a music clip derived. The reason this is a sound clip and not a theme, is it's probably required to be heard for a cinematic etc. and the sound is garaunteed unless they've muted the game - where as music plays through the music channel, which is fine for them to mute.

### Intro Camera for Operations
#### Start of the Operation
Pans the camera over the players at the start of the operation, informing them of the group composition and callsigns (if set by ops manager correctly).

#### Join in Progress (JIPs)
If the operation has already started (give or take 30~ seconds), then it'll play a blackscreen static camera in order to not divulge operational information or behave weirdly.

Also informs them of pinging zeus to get TP'd back.

## Outro's
A work in progress idea. Idea is to pan over the dead and alive, and any custom set locations by the mission maker. To give a more 'cinematic' feel end to the operation and provide some closure. It's a big job, so it'll probably not happen for some time (if ever).