#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	public :

	HumanA (std::string newName, Weapon &newWeapon);
	void	attack() const;


	private :

	std::string m_name;
	Weapon &m_Weapon;
	

};



#endif