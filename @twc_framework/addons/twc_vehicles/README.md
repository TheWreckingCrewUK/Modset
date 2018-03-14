# @twc_framework - twc_vehicles

## Features

 * external interact on boat to push back, even when occupied
 * internal interact for pilot to push back plane, only doable when stationary (slow push back ~10 feet)
 * able to drag ammobox crate around within base marker
 * internal actions for jump out left & jump out right on defined vehicles (classname list, usually helis)
 * inventory based ammo system, that vehicle classes can hook into to utilise
 * ammo transfer system for vehicles, including from vehicle to vehicle (even if occupied) and from crates
 * external action to get in for the back of the twc hercules (when ramp is open?) 
 
## Inventory Based Ammo
### How to add to Vehicle
The vehicle config will need the ammo, and the corresponding item defined. You will need to create images for them as well. Please stick to the class naming scheme. This can be found on the root README.md document.

An example can be found below:
``` { example } ```

After this, you will need to add the following to the vehicles init:
``` { code } ```

In the line above, you're defining the item first and the ammo it represents second. 