#include "header.hpp"
#include <ostream>

int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cerr << "Usage: ./program filename s1 s2" << std::endl;
		return -1;
	}
	std::ifstream input_file(av[1]);
	if(!input_file)
	{
		std::cerr << "Error : can't open input file '" << av[1] << "'" << std::endl;
		return -1;
	}
	std::ofstream output_file(std::string(av[1]) + ".replace");
	if(!output_file)
	{
		std::cerr << "Error while creating output file" << av[1] << ".replace" << std::endl;
	}
	std::string input_line;
	std::string output_line;
	bool is_firstLine = true;
	while(std::getline(input_file, input_line))
	{
		output_line = replace_all(input_line, av[2], av[3]);
		if(!is_firstLine)
			output_file << "\n";
		else
			is_firstLine = false;
		output_file << output_line;
	}

	return (0);
}