#include "Harl.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "Error : input must be of type ./harl <level>" << std::endl;
		return (-1);
	}
	if(std::string(av[1]) != "DEBUG" && std::string(av[1]) != "INFO" && std::string(av[1]) != "WARNING" && std::string(av[1]) != "ERROR")
	{
		std::cerr << "Error : this level does not exist. Avaible levels : DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (-1);
	}
	Harl harl;
	harl.complain(std::string(av[1]));
	return (0);
}