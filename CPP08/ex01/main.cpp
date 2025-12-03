#include"Span.hpp"

int main()
{


	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);


	std::cerr << "////////// test 1 : subject and storage full //////////" << std::endl;
	try
	{
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
		sp.addNumber(25);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;

	std::cerr << "////////// test 2 & 3 : NoNumberStoredException //////////" << std::endl;
	try
	{
		Span sp2 = Span(3);
		std::cout << "longestSpan : " << sp2.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span sp2 = Span(3);
		sp2.addNumber(6);
		std::cout << "shortestSpan : " << sp2.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;

	std::cerr << "////////// test 4 : 100000 entiers //////////" << std::endl;
	try
	{
		std::vector<int> v;
		int j = 100000;

		std::srand(time(NULL));
		for(int i = 0; i < j; i++)
		{
			v.push_back(rand() %(j * 100));
		}
		Span sp3 = Span(j);
		sp3.addNumber(v.begin(), v.end());

		std::cout << "shortestSpan : " << sp3.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp3.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cerr << std::endl;

	return(0);
}
