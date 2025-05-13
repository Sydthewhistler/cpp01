
#include <iostream>
#include <string>
int main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR(&str);
	std::string &stringREF = str;

	std::cout << "memory adress of string : " << &str << std::endl;
	std::cout << "memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory adress held by stringREF : " << &stringREF << std::endl;

	std::cout << "\nvalue of the string variable : " << str << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;

	return (0);
}