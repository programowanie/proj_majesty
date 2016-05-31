
//! \brief Guild is building that serves as home and school for Heros

/*!
	Construction is either a Building owned by player or Lair of monsters
*/

class Guild : Construction
{
protected:
	
	
	//!  what kind of hero lives in this guild
	Hero *heroType; 
	
	public:
	void Guild();
	//! brings new Hero to live, adds him to list of habitants of this Guild
	
	void spawnHero();
	
};