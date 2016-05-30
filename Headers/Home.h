//! \brief Members of this class may be entered and be inhabited 

/*!
	Interface for Constructions capable of giving shelter, like Monster's Lair, Peasant's hut or Hero's Guild or an Inn(or maybe some kind of vechicles as well)
*/
class Home 
{
protected:
	//!  list of Mobs that are currently inside this Home
	Mob *inside; 
	//!  list of Mobs that usually lives in this Home
	Mob *inhabitants; 
};