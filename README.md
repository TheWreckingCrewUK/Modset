# The Wrecking Crew
This repo contains our various unit configs (loadouts), and our frame work for public, operations and training.

You can find our group at: http://thewreckingcrew.eu - join us on TS, if you have any questions!

# Class Naming Scheme
We have a standardised naming scheme we strive for, to make item names predictable and organised. If you are adding an item, unit, magazine, ammobox, weapon or vehicle the scheme is as follows:

Tag | PBO/Type | Category | Item Name | Modifier | Misc
--- | --- | --- | --- | --- | ---
TWC | Magazine | --- | Callibre | Magazine Size | Ammo Type (if applicable), tracer is _T
TWC | AmmoBox | Era, Vehicle, or Other | Target of Resupply | Mobility (e.g. Portable) | ---
TWC | Vehicle | Era | Vehicle Name | Camoflauge | COIN (if applicable)
TWC | Item | --- | Name | --- | ---
TWC | Weapon | Callibre | Weapon Name | Vehicle | ---
TWC | BaseClass | --- | Name | _F (if extending) | ---

> This is still a work in progress. Existing classes may not follow this, but effort is being made to update them when found.

If a part isn't applicable, say the category, it's skipped but the order is always maintained. For example, if I wanted to create an ammobox that was portable for a modern section, I'd name it the following: `TWC_AmmoBox_Modern_Section_Portable`

# Factions

Here's a list of our custom factions, and their display names. Please try to stick to these as much as possible. We also do have sub-categories, which will be listed below.

Class Name | Display Name | WW2 Only
--- | --- | ---
TWC_General | TWC General Operation Units | No
TWC_Modern | TWC Modern Operation Units | No
TWC_Millennial | TWC Millennial Operation Units | No
TWC_ColdWar | TWC Cold War Operation Units | No
twc_faction_independent | TWC WW2 Operation Units | Yes
 |  | 
Iraqi_units | Iraqi Army Gulf War Units | No
ira_units | IRA Units | No
african_units | African Militia | No
TWC_Tak_Civ | Takistani Civilians | No
twc_usa_1970 | USA 1970 | No
Russian_Federation | Russian Federation | No

# Loadouts
Below is our loadouts, for all eras (including WW2) and force types if necessary. This includes counts, but may not be accurate as of the moment. This is their intended loadout in the future. Items in the backpacks are seperated, the rest is combined. If a backpack is lined out, they don't have one. 2iCs follow a 10% rule, but may break that on occasion. Subject to change. I've also duplicated entries, to show the section size. Fire Teams are seperated by a blank row.

> Medical supplies and auxiliary items to come. Specalist equipment for a mission are generally not included, e.g. demolition blocks.

## WW2
### Pre-Dunkirk Dismounted
Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | Thompson, Flare Gun | 6x Thompson Mags, 2x Frags | 6x White Smoke, 2x Red/Blue/Green/Yellow Smoke, 3x Flare Rounds of Various Colours
Rifleman | Lee Enfield | 8x Enfield Mags, 2x Frags | ---
Rifleman | Lee Enfield | 8x Enfield Mags, 2x Frags | ---
Bombadier | Lee Enfield | 8x Enfield Mags, 6x Frags | ---
Bombadier | Lee Enfield | 8x Enfield Mags, 6x Frags | ---
 |  |  |  
2iC | Lee Enfield | 8x Enfield Mags, 2x Frags | 10x Enfield Mags, 4x Bren Mags, 4x Frags, Extra Medical Supplies
Machine Gunner | Bren Gun | 6x Bren Mags | ---
Machine Gunner Assistant | Enfield | 8x Enfield Mags, 2x Frags |  8x Bren Mags

> Requires WW2 Repo.

### Post-Dunkirk Dismounted
Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | Sten, Flare Gun | 6x Sten Mags, 2x Frags | 6x White Smoke, 2x Red/Blue/Green/Yellow Smoke, 3x Flare Rounds of Various Colours
Rifleman | Lee Enfield | 8x Enfield Mags, 2x Frags | ---
Rifleman | Lee Enfield | 8x Enfield Mags, 2x Frags | ---
Rifleman | Lee Enfield | 8x Enfield Mags, 2x Frags | ---
Rifleman | Lee Enfield | 8x Enfield Mags, 2x Frags | ---
 |  |  |  
2iC | Lee Enfield | 8x Enfield Mags, 2x Frags | 10x Enfield Mags, 4x Bren Mags, 4x Frags, Extra Medical Supplies
Machine Gunner | Bren Gun | 6x Bren Mags | ---
Machine Gunner Assistant | Enfield | 8x Enfield Mags, 2x Frags |  8x Bren Mags

> Requires WW2 Repo.

##Cold War
###Section
Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | L1A1 SLR (Wooden stock), Binoculars | 5x 7.62mm 20rnd Mag, 2x 7.62mm 20rnd Tracer Mag, 2x M83 Smoke Grenade (White) | 3x M83 Smoke Grenade (White), 2x M18 Smoke Grenade (Red), 2x M18 Smoke Grenade (Blue)
Rifleman | L1A1 SLR (Wooden stock), L1A1 66mm Rocket HEAT | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x LAW 66 Rocket, 1x M83 Smoke Grenade (White) | 
Rifleman (SUIT) | L1A1 SLR (Wooden stock), L1A1 66mm Rocket HEAT | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x LAW 66 Rocket, 1x M83 Smoke Grenade (White) | 
AT Rifleman | L2A3 Sterling SMG, L14A1 | 7x 9mm 30rnd Sterling Mag (Ball), 1x FFV751 HEAT, 1x L109A2 Frag, 1x M83 Smoke Grenade (White) | 
Assistant AT Rifleman | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x M83 Smoke Grenade (White) | 1x FFV441 HE
2iC | L1A1 SLR (Wooden stock) | 5x 7.62mm 20rnd Mag, 2x 7.62mm 20rnd Tracer Mag, 2x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Tracer Belt
Machine Gunner | L7A2 GPMG | 2x 7.62mm 100rnd Belt, 1x 7.62mm 100rnd Tracer Belt, 1x M83 Smoke Grenade (White) | 
Assistant Machine Gunner | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 1x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Belt

###Section (Mechanised)
Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | L1A1 SLR (Wooden stock), Binoculars | 5x 7.62mm 20rnd Mag, 2x 7.62mm 20rnd Tracer Mag, 2x M83 Smoke Grenade (White) | 3x M83 Smoke Grenade (White), 2x M18 Smoke Grenade (Red), 2x M18 Smoke Grenade (Blue)
Rifleman | L1A1 SLR (Wooden stock), L1A1 66mm Rocket HEAT | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x LAW 66 Rocket, 1x M83 Smoke Grenade (White) | 
Rifleman (SUIT) | L1A1 SLR (Wooden stock), L1A1 66mm Rocket HEAT | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x LAW 66 Rocket, 1x M83 Smoke Grenade (White) | 
AT Rifleman | L2A3 Sterling SMG, L14A1 | 7x 9mm 30rnd Sterling Mag (Ball), 1x FFV751 HEAT, 1x L109A2 Frag, 1x M83 Smoke Grenade (White) | 
Assistant AT Rifleman | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x M83 Smoke Grenade (White) | 1x FFV441 HE
2iC | L1A1 SLR (Wooden stock) | 5x 7.62mm 20rnd Mag, 2x 7.62mm 20rnd Tracer Mag, 2x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Tracer Belt
Machine Gunner | L7A2 GPMG | 2x 7.62mm 100rnd Belt, 1x 7.62mm 100rnd Tracer Belt, 1x M83 Smoke Grenade (White) | 
Assistant Machine Gunner | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 1x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Belt
Vehicle Commander | L2A3 Sterling SMG | 3x 9mm 30rnd Sterling Mag (Ball), 2x M83 Smoke Grenade (White) | 
Vehicle Crew | L2A3 Sterling SMG | 3x 9mm 30rnd Sterling Mag (Ball), 2x M83 Smoke Grenade (White) | 

###Section (COIN)
Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | L1A1 SLR (Wooden stock), Binoculars | 5x 7.62mm 20rnd Mag, 2x 7.62mm 20rnd Tracer Mag, 2x M83 Smoke Grenade (White) | 3x M83 Smoke Grenade (White), 2x M18 Smoke Grenade (Red), 2x M18 Smoke Grenade (Blue)
Rifleman | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Tracer Belt
Rifleman (SUIT) | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Tracer Belt
Rifleman | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Tracer Belt
Rifleman | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 2x L109A2 Frag, 1x M83 Smoke Grenade (White) | 1x 7.62mm 100rnd Tracer Belt
2iC | L1A1 SLR (Wooden stock) | 5x 7.62mm 20rnd Mag, 2x 7.62mm 20rnd Tracer Mag, 2x M83 Smoke Grenade (White) | 3x 7.62mm 30rnd L4 Mag (Ball + Tracer)
Machine Gunner | L4 LMG | 10x 7.62mm 30rnd L4 Mag (Ball + Tracer), 1x M83 Smoke Grenade (White) | 10x 7.62mm 30rnd L4 Mag (Ball + Tracer)
Assistant Machine Gunner | L1A1 SLR (Wooden stock) | 7x 7.62mm 20rnd Mag, 1x M83 Smoke Grenade (White) | 6x 7.62mm 30rnd L4 Mag (Ball + Tracer)

## Millennial

> The quantities below have not been calculated, they are simply place holders for the moment.

### 90's Dismounted

Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | L85A1 with SUSAT | 6x STANAG Mags, 2x Frags | 6x White Smoke, 2x Red/Blue/Green/Yellow Smoke, AN/PRC-177
Rifleman | L85A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Rifleman AT | L85A1 with SUSAT, LAW 80 | 8x STANAG Mags, 2x Frags | ---
Gunner | L86A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---
 |  |  |  
2iC | L85A1 with SUSAT | 8x STANAG Mags, 2x Frags | 10x STANAG Mags, 4x Frags, 6x White Smoke, 2x Red/Green/Blue/Yellow Smoke, Extra Medical Supplies
Rifleman | L85A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Rifleman AT | L85A1 with SUSAT, LAW 80 | 8x STANAG Mags, 2x Frags | ---
Gunner | L86A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---

### 90's Mechanised

Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | L85A1 with SUSAT | 6x STANAG Mags, 2x Frags | 6x White Smoke, 2x Red/Blue/Green/Yellow Smoke, AN/PRC-177
Rifleman | L85A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Gunner | L86A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---
 |  |  |  
2iC | L85A1 with SUSAT | 8x STANAG Mags, 2x Frags | 10x STANAG Mags, 4x Frags, 6x White Smoke, 2x Red/Green/Blue/Yellow Smoke, Extra Medical Supplies
Rifleman | L85A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Gunner | L86A1 with SUSAT | 8x STANAG Mags, 2x Frags | ---

### 00's Dismounted

Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | L85A2 with SUSAT | 6x STANAG Mags, 2x Frags | 6x White Smoke, 2x Red/Blue/Green/Yellow Smoke, AN/PRC-177
Rifleman | L85A2 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Rifleman AT | L85A2 with SUSAT, ILAW AT4 | 8x STANAG Mags, 2x Frags | ---
Auto-Rifleman | L110A2 FN Minimi | 4x Minimi Box Mags, 2x Frags | ---
 |  |  |  
2iC | L85A2 with SUSAT | 8x STANAG Mags, 2x Frags | 10x STANAG Mags, 4x Frags, 6x White Smoke, 2x Red/Green/Blue/Yellow Smoke, Extra Medical Supplies
Rifleman | L85A2 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Rifleman AT | L85A2 with SUSAT, ILAW AT4 | 8x STANAG Mags, 2x Frags | ---
Marksman | L86A2 with SUSAT | 8x STANAG Mags, 2x Frags | ---

### 00's Mechanised

Role | Weapon(s) | Personal Gear | Backpack
--- | --- | --- | ---
Section Commander | L85A2 with SUSAT | 6x STANAG Mags, 2x Frags | 6x White Smoke, 2x Red/Blue/Green/Yellow Smoke, AN/PRC-177
Rifleman | L85A2 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Auto-Rifleman | L110A2 FN Minimi | 4x Minimi Box Mags, 2x Frags | ---
 |  |  |  
2iC | L85A2 with SUSAT | 8x STANAG Mags, 2x Frags | 10x STANAG Mags, 4x Frags, 6x White Smoke, 2x Red/Green/Blue/Yellow Smoke, Extra Medical Supplies
Rifleman | L85A2 with SUSAT | 8x STANAG Mags, 2x Frags | ---
Gunner | L86A2 with SUSAT | 8x STANAG Mags, 2x Frags | ---

### 00's COIN

> Todo

## Modern
### Dismounted

> Todo

### Mechanised

> Todo

### COIN

# Terminology
* **COIN** - **Co**unter **In**surgency
