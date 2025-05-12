#include "Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(std::string new_name) : name(new_name){}

Zombie::~Zombie()
{
	std::cout << name << " died" << std::endl;
}


void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
