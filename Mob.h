



//! \brief Living form moving and taking actions in the World

/*!
	Mob lives in world moving taking actions and interacting with another mobs and enviorment. Everybody from dire rat to king sitting in his throne room is a mob.
*/
class Mob
{
protected:
    //! Goals enum
    /*! This enum holds what's in mind of the Mob. */
	enum Goals {rest, /*!< Mob is tired or wounded and shall go home or to "sancturacy" to regain hp/mp or just to wait for something to happend */
	grind, /*!< Mob is going to do it's basic activity - advanturer hunts, peasant works in a field and tax colector collects taxes */
	explore, /*!< Mob is bored and is going to just walk around his home, it mind find something intrested, like treasure or death */
	upgrade /*!< Mob(rather only advanturers) has achieved enought wealth to upgrade it's equipment or maybe change class */
	};
	//!   name of this mob
	string name;		
	//! goal this Mob is trying to achieve, \sa Goals
	Goals goal;			
	float hpCurrent;
	float hpMax;
	float mpCurrent;
	float mpMax;
	//! how much this Mob has accumulated experience in it's life. Important for leveling up
	int exp;			
	//! Mob or Building this mob is going to
	Actor *target; 		
	//!  list of Mobs that damaged this Mob and should be rewarded for killing it
	Mob *threats; 
public:
	Mob();
	 //! reduce hp by amount of pureDamage reduced by Mob armor or skills, returns true if Mob died
	bool takeDamage(float pureDamage); 	
	//!give gold to mobs that killed you, play death anim etc.
	void die(); 						
	//! after achieving goal think what's your next goal(ie. if you completed quest either go rest if you are wounded or go to blacksmith to get better gear)
	Goal decideWhatNext(); 		
	//! choose Actor matching your goal(ie. if you are going to grind, find hostile Mob with low level and high reward, if you are going to upgrade find adequate shop, if rest - nearest inn)	
	Actor* chooseTarget();	
	//! interact with target(while you are close enough) - enter the building or hit an enemy	
	void interact();					

	
};
	

	