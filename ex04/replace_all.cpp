
#include <string>

std::string replace_all(std::string line, std::string s1, std::string s2)
{
	std::string output_line;
	size_t pos = 0;
	size_t found;

	while((found = line.find(s1, pos)) != std::string::npos)
	{
		output_line += line.substr(pos, found - pos);
		output_line += s2;
		pos = found + s1.length();
	}
	output_line += line.substr(pos);
	return output_line;
}