/*! \brief Item represents everything that might became possession of Hero, like weapon, potions and armors

*/

class Item
{
	protected:
	/*! 
	How rare is this - will be useful for rolling loot 
	Items of all tiers of rarity may be found as loot, tiers common to rare might be bought in stores.
	*/
	enum Rarity{
		poor, 		//!< items usually looted from normal monsters, like rusty swords and blunt axes
		common, 	//!< items made by regular craftsman, widely sell in stores
		uncommon, 	//!< items that are bit better, made by better craftsman
		rare, 		//!< items of outstanding quality, often enchanted or made by real master of his craft
		epic, 		//!< best quality item that might be made by nowadays mortal
		legendary	//!< things usually lying around and dragon's piles of treasures or in ancient tombs
		
	};
	//! sa Rarity
	Rarity rarity;
	//! name of this item
	string name;
	
	//! value of item, in most cases it's market price as well 
	float value;
	
	
};