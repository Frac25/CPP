# include "iter.hpp"

void print_int(const int &i)
{
	std::cout << i << ", ";
}

void x2_fct(int &i)
{
	i = i * 2;
}

void print_str(const std::string & s)
{
	std::cout << s << ", ";
}

template<typename T>
void print_template(const T & s)
{
	std::cout << s << ", ";
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
	std::cout << "  TEST 1 : print_int"  <<std::endl;
	int a[5] = {0,1,2,3,4};
	iter(a, 5, print_int);
	std::cout << std::endl << std::endl;

	std::cout << "  TEST 2 : x2_fct"  <<std::endl;
	iter(a, 5, x2_fct);
	iter(a, 5, print_int);
	std::cout << std::endl << std::endl;

	std::cout << "  TEST 3 : const int"  <<std::endl;
	const int b[5] = {5,6,7,8,9};
	iter(b, 5, print_int);
	std::cout << std::endl << std::endl;


	std::cout << "  TEST 4 : print_str"  <<std::endl;
	std::string s[2] = {"ab", "cd"};
	iter(s, 2, print_str);
	std::cout << std::endl << std::endl;

	std::cout << "  TEST 5 : toupper_fct"  <<std::endl;
	iter(s, 2, toupper_fct);
	iter(s, 2, print_str);
	std::cout << std::endl << std::endl;

	std::cout << "  TEST 5 : print_template"  <<std::endl;
	iter(s, 2, print_template<std::string>);
	std::cout << std::endl << std::endl;


	return(0);
}
