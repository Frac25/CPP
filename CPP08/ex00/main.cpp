#include"easyfind.hpp"
#include<algorithm>
#include<vector>
#include<list>
#include<deque>


int main(void)
{
	std::cout << "TEST 1 : container = std::vector<int>" << std::endl;
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i*2);
	}

	try
	{
		std::cout << *easyfind(v, 8) << std::endl;
		std::cout << *easyfind(v, 11) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "TEST 2 : container = std::list<int>" << std::endl;
	std::list<int> l;

	for (int i = 0; i < 10; i++)
	{
		l.push_back(i*2);
	}

	try
	{
		std::cout << *easyfind(l, 8) << std::endl;
		std::cout << *easyfind(l, 11) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		std::cout << std::endl << "TEST 3 : container = std::deque<int>" << std::endl;
	std::deque<int> d;

	for (int i = 0; i < 10; i++)
	{
		d.push_back(i*2);
	}

	try
	{
		std::cout << *easyfind(d, 8) << std::endl;
		std::cout << *easyfind(d, 11) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return(0);
}
