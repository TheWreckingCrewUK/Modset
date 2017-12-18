// All the various weapons and other pieces of equipment (some force type specific)
#undef ADD_FACTION
#define ADD_FACTION faction = "TWC_Modern"

// Amount Per Section
#define MODERN_RIFLE 24
#define MODERN_RIFLE_T 4

#define MODERN_SHOTGUN_SLUG 4
#define MODERN_SHOTGUN_BUCK 4

#define MODERN_UGL_HE 6
#define MODERN_UGL_RED 2
#define MODERN_UGL_BLUE 2
#define MODERN_UGL_WHITE 2

#define MODERN_AUTORIFLE 4
#define MODERN_AUTORIFLE_T 2

#define MODERN_MECHA_AUTORIFLE 2
#define MODERN_MECHA_AUTORIFLE_T 1

#define MODERN_MARKSMAN 6
#define MODERN_MARKSMAN_T 2

#define MODERN_MACHINEGUNNER 2
#define MODERN_MACHINEGUNNER_T 1

// Modifiers to the total amount (used to alter different vehicle payloads)
#define MODERN_MASTIFF_MOD 2
#define MODERN_FOXHOUND_MOD 1
#define MODERN_WIMIK_MILAN_MOD 0.5
#define MODERN_SNATCH_MOD 0.5
#define MODERN_WIMIK_MOD 0.5
#define MODERN_LANDROVER_MOD 0.5

#define MODERN_WILDCAT_MOD 1

#include "modern_helicopter.hpp"
#include "modern_plane.hpp"
#include "modern_tracked.hpp"
#include "modern_wheeled.hpp"