#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
class Weapon
{

	public :

	Weapon();
	Weapon(std::string newType);
	std::string	get_Type() const;
	void		setType(std::string new_type);


	private :

		std::string type;




};


#endif