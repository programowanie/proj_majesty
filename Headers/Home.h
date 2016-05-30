//! \brief Interface for Constructions capable of giving shelter, like Monster's Lair, Peasant's hut or Hero's Guild or an Inn(or maybe some kind of vechicle)

/*!
	Members of this class may be entered and be inhabited 
*/
class Home 
{
protected:
	//!  list of Mobs that are currently inside this Home
	Mob *inside; 
	//!  list of Mobs usually lives in this Home
	Mob *inhabitants; 
};