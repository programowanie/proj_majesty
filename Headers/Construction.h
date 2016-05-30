
//! \brief Construction standing in the World

/*!
	Construction is either a Building owned by player or Lair of monsters
*/

class Construction
{
protected:
	//!   name of this Construction
	string name;
	//! how much hit points this Construction has
	float hpCurrent;
	//! how much hit points this Construction can have at max
	float hpMax;
	//!  list of Mobs that damaged this Mob and should be rewarded for killing it
	Mob *threats; 
	

	
};