# include "iter.hpp"

void print_fct(const int &i)
{
	std::cout << i << ", ";
}

void x2_fct(int &i)
{
	i = i * 2;
}

void print2_fct(const std::string & s)
{
	long unsigned int i = 0;

	while(i < s.length())
	{
		std::cout << s[i] << ", ";
		i++;
	}
}

void toupper_fct(std::string &s)
{
	long unsigned int i = 0;

	while(i < s.length())
	{
		s[i] = std::toupper(s[i]);
		i++;
	}
}

int main(void)
{
	//TEST 1
	int a[5] = {0,1,2,3,4};
	iter(a, 5, print_fct);
	std::cout << std::endl;

	//TEST 2
	iter(a, 5, x2_fct);
	iter(a, 5, print_fct);
	std::cout << std::endl;

	//TEST3
	std::string s[2] = {"ab", "cd"};
	iter(s, 2, print2_fct);
	std::cout << std::endl;

	//TEST4
	iter(s, 2, toupper_fct);
	iter(s, 2, print2_fct);
	std::cout << std::endl;

	return(0);
}
