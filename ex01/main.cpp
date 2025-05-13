
#include "Zombie.hpp"

int	main()
{
	int horde_nb;
	std::string name;
	std::cout << "Enter the number of zombies: ";
	std::cin >> horde_nb;
	std::cout << "Enter the name of the zombies: ";
	std::cin >> name;

	Zombie *horde = zombieHorde(horde_nb, name);
	for (int i = 0; i < horde_nb ; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}