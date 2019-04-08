# TWC_UI
This small addon is for managing some custom client-side UI elements.

# Features
## Vehicle Bearings
Reintroduces vehicle bearing read outs for the appropriate slots. It is intended to be as low impact as possible. Currently only reads out the camera bearing (where you're looking, not vehicle hull).

Is configurable per vehicle config, defined in the ```TWC_bearingPositions``` array. Names are that of the vanilla engine, aka "driver", "gunner", "commander", "Turret", and "cargo".

For example, ```TWC_bearingPositions = {"driver", "commander", "gunner", "turret"};```

## Specator Compass Toggle
Adds support to toggle the compass in the spectator system. Hit 'K' to toggle. _Should make it a CBA setting in the future..._