#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public :

	Zombie();
	void announce( void );
	void setName(std::string name);


	private:
	std::string m_name;


};

Zombie* zombieHorde( int N, std::string name );

#endif