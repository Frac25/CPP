# include <iostream>
#include <string>

int toupper_str (std::string s)
{
	size_t i = 0;

	while (i < s.length())
	{
		std::cout << (char)toupper(s[i]);
		i++;
	}

	return (0);
}


int main (int argc, char **argv)
{
	int i = 1;

	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while(i < argc)
		{
			toupper_str(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;

	return(0);
}
