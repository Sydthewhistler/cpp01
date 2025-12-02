#include "Weapon.hpp"

Weapon::Weapon(std::string newType) : type(newType){}
Weapon::Weapon() : type(){}

const std::string	&Weapon::getType() const
{
	return (type);
}

void		Weapon::setType(std::string new_type)
{
	type = new_type;
}