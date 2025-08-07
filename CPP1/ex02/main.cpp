#include<iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR =  &string;
	std::string& stringREF = string;

	std::cout << "Address of string: " << &string<< std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Address held by strinREF: " << &stringREF << std::endl;

	std::cout << "value of the string variable: " << string<< std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "vvalue pointed to by stringPTR: " << stringREF << std::endl;


	return(0);
}
