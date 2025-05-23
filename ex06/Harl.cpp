#include "Harl.hpp"
#include <iostream>
#include <ostream>
#include <string>

void	Harl::complain( std::string level )
{
	int lvl = -1;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4 ; i++)
	{
		if(level == levels[i])
		{
			lvl = i;
			break;
		}
	}
	switch(lvl)
	{
		case 0 :
			debug();
		case 1 :
			info();
		case 2 :
			warning();
		case 3 :
			error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}