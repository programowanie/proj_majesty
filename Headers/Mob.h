//! \brief Living form moving and taking actions in the World

/*!
	Mob lives in world moving taking actions and interacting with another mobs and enviorment. Everybody from dire rat to king sitting in his throne room is a mob.
*/
class Mob : Damageable
{
protected:
   
    /*! This enum holds what's in mind of the Mob. */
	enum Goals {rest, /*!< Mob is tired or wounded and shall go home or to "sancturacy" to regain hp/mp or just to wait for something to happend */
	grind, /*!< Mob is going to do it's basic activity - advanturer hunts, peasant works in a field and tax colector collects taxes */
	explore, /*!< Mob is bored and is going to just walk around his home, it mind find something intrested, like treasure or death */
	upgrade /*!< Mob (rather only Hero) has achieved enought wealth to upgrade it's equipment or maybe change class */
	};
	
	//!   name of this mob
	string name;		
	//! goal this Mob is trying to achieve, \sa Goals
	Goals goal;			
	//! how much hit points this Mob has
	float mpCurrent;
	//! how much mana points this Mob can have at max
	float mpMax;
	//! how much damage this deals per attack. Keeps minimum and maxium amount
	range damage;
	//! how much this Mob has accumulated experience in it's life. Important for leveling up
	int exp;			
	//! Mob or Construction this mob is going to
	Actor *target; 		
	//!  reference to this Mob home
	Construction *home;
public:
	Mob();
	
							
	//! after achieving goal think what's your next goal(ie. if you completed quest either go rest if you are wounded or go to blacksmith to get better gear)
	Goal decideWhatNext(); 		
	//! choose Actor matching your goal(ie. if you are going to grind, find hostile Mob with low level and high reward, if you are going to upgrade find adequate shop, if rest - nearest inn)	
	Actor* chooseTarget();	
	//! interact with target(while you are close enough) - enter the Construction or hit an enemy	
	void interact();

	//! enter Home	
	void enter(Home home);		
	//! exit Home
	void exit();		

	
};
	

	