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
TWC | Item | Type (e.g. Medical) | Name | --- | ---
TWC | Weapon | Callibre | Weapon Name | Vehicle | ---
TWC | BaseClass | --- | Name | _F (if extending) | ---

> This is still a work in progress. Existing classes may not follow this, but effort is being made to update them when found.

If a part isn't applicable, say the category, it's skipped but the order is always maintained. For example, if I wanted to create an ammobox that was portable for a modern section, I'd name it the following: `TWC_AmmoBox_Modern_Section_Portable`

# Custom Events
Framework, and some custom configs raise events for mission makers to be able to hook into. Feel free to utilise them.

Event Tag | Parameters | Description | Locality
--- | --- | ---
"twc_framework_initComplete" | None | Mission settings have been applied | Local
"twc_framework_britishFlagRaised" | _flagObject, _caller | British flag pole raised on a flag | Global
"twc_item_delivered" | _position, _crateObject, _formerOwner, ["cargo" OR "slingload"] | Item has been delivered, self explanatory | Global
"twc_clicker_sounded" | _player | Player used a clicker to make a sound | Local
"twc_map_placed" | _caller | Player placed a map down on the ground | Global
"twc_box_replenish_finished" | _sourceBox, _newBox | A box has been replenished by a base box | Global
"twc_core_revealPlayer" | _player, _range | Something is revealing the player in the range specified to AI (e.g. whistle) | Global

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

# Terminology
* **COIN** - **Co**unter **In**surgency
