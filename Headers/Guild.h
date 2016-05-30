
//! \brief Guild is building that serves as home and school for Heros

/*!
	Construction is either a Building owned by player or Lair of monsters
*/

class Guild : Construction
{
protected:
	
	
	//!  what kind of hero lives in this guild
	Hero *heroType; 
	//! brings new Hero to live, adds him to list of habitants of this Guild
	
	public:
	void Guild();
	void spawnHero();
	
};