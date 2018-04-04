# twc_events

Event handlers in TWC Framework are implemented through CBA's Event System. They should be used to trigger or allow triggering of specific functionality. These are predominately re-engineered existing event chains to be of syntax/locality use, but may include own engineered vanilla solutions in the future.

All events are global, unless otherwise specified.

## Inventory
| Event Key          | Parameters | Description |
|--------------------|------------|-------------|
| twc_inventoryAdded | [_inventory, _item, _unit] | Fires when an item is placed into an inventory, detailing where, what and who |
| twc_inventoryRemoved | [_inventory, _item, _unit] | Fires when an item is removed from an inventory, detailing where, what and who |
| | | | |

_Please note, these will fire multiple times in quick succession if there's a high amount of inventory traffic_