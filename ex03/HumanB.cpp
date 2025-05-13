#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB (std::string newName) : m_name(newName), m_Weapon(NULL){}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->m_Weapon = &newWeapon;
}

void	HumanB::attack() const
{
	std::cout << m_name << " attacks with their " << m_Weapon->get_Type() << std::endl;
}