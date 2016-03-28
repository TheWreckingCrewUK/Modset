/*
        Different Ammobox v 1.0
        by Demonized.
       
        1: place a marker named DMZ_DA anywhere you want the players to see their ammobox, all will see their box in same position.
        2: place this in init line of any unit.
                _null = this execVM "DMZ_DA.sqf";
        3: save this script as DMZ_DA.sqf and place it in your mission folder.
               
        For more classnames on ammoboxes or weapons and magazines go here:
                http://forums.bistudio.com/showthread.php?t=73241&page=2
				edited by FakeMatty
*/
 
_marker = "2crate";  // marker used to spawn.
_boxType = "Box_NATO_AmmoVeh_F";  // the type of ammobox used.
_timer = 240;  // time in seconds until box is refilled.
 
_weapons = [];
_magazines = [["ACE_1Rnd_82mm_Mo_HE",10],["ACE_1Rnd_82mm_Mo_Smoke", 5],["ACE_1Rnd_82mm_Mo_Illum",5]];
_items = [["ACE_RangeTable_82mm",1]];
_backpacks = [["CUP_B_M2_Gun_Bag",1],["CUP_B_M2_Tripod_Bag",1],["CUP_B_M2_MiniTripod_Bag",1],["ACE_NonSteerableParachute",1],["B_Mortar_01_support_F",1],["B_Mortar_01_weapon_F",1]];
 
_tmp_weapons = [];
_tmp_magazines = [];
_tmp_items = [];
_tmp_backpacks = [];
 

{
        _weapons set [count _weapons, _x];
} forEach _tmp_weapons;
 
{
        _magazines set [count _magazines, _x];
} forEach _tmp_magazines;
 
{
        _items set [count _items, _x];
} forEach _tmp_items;

{
        _backpacks set [count _backpacks, _x];
} forEach _tmp_backpacks;

 
// create and fill the box.
_box = _boxType createVehicleLocal (getMarkerPos _marker);
_box setPosATL (getMarkerPos _marker);
_box allowDamage false;
while {true} do {
        refill_box = false;
        // empty it.
        clearWeaponCargo _box;
        clearMagazineCargo _box;
        clearItemCargo _box;
		clearBackpackCargo _box;
       
        // add in all weapons.
        {_box addWeaponCargo [(_x select 0),(_x select 1)]} foreach _weapons;
       
        // add in all magazines.
        {_box addMagazineCargo [(_x select 0),(_x select 1)]} foreach _magazines;
       
        {_box addItemCargo [(_x select 0),(_x select 1)]} foreach _items;
		
		{_box addBackpackCargo [(_x select 0),(_x select 1)]} foreach _backpacks;
		
	
       
        // wait x amount of seconds then refill box.
        sleep _timer;
};