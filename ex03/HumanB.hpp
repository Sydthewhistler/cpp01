#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	public :

	HumanB(std::string newName);
	void	attack() const;
	void	setWeapon(Weapon &newWeapon);


	private :

	std::string m_name;
	Weapon *m_Weapon;
	

};


#endif