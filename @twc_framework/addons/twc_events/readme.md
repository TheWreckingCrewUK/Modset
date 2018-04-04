# twc_events

Event handlers in TWC Events are implemented through CBA's Event System. They should be used to trigger or allow triggering of specific functionality. These are predominately re-engineered existing event chains to be of syntax/locality use, but may inclued own engineered vanilla solutions in the future.

All events are global, unless otherwise specified.

## Inventory
| Event Key          | Parameters | Locality | Description |
|--------------------|------------|----------|-------------|
| twc_inventoryAdded | [_inventory, _item, _unit] | Global | Fires when an item is placed into an inventory, detailing where, what and who |
| twc_inventoryRemoved | [_inventory, _item, _unit] | Global | Fires when an item is removed from an inventory, detailing where, what and who |
| | | | |

_Please note, these will fire multiple times in quick succession if there's a high amount of movement_