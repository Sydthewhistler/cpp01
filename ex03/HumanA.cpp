#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA (std::string newName, Weapon &newWeapon) : m_name(newName), m_Weapon(newWeapon){}


void	HumanA::attack() const
{
	std::cout << m_name << " attacks with their " << m_Weapon.getType() << std::endl;
}