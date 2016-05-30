//! \brief Members of this class may be damaged

/*!
	
*/

class Damageable
{
  	
public:
	//! how much hit points this has
	float hpCurrent;
	//! how much hit points this  can have at max
	float hpMax;
	//!  list of Mobs that damaged this Mob and should be rewarded for killing it
	Mob *threats; 
	//!  amount of experience that should be granted for killing this
	int expReward;
	//!  amount of gold that should be granted for killing this
	int goldReward;
	//!  amount of gold carrier by this
	int goldCarried;
	//!  how much damage this can resist each time it's attacked
	float armor;	
	
	//!give gold to mobs that killed this Mob, play death anim etc.
	void die(); 
	//! reduce hp by amount of pureDamage reduced by this armor or skills, returns true if this died
	bool takeDamage(float pureDamage);
};