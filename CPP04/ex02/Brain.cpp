# include "Brain.hpp"

	const std::string BROWN = "\033[38;5;130m";
	const std::string RES = "\033[0m";

	Brain::Brain()
	{
		std::cout << BROWN << "Brain constructor called" << RES << std::endl;

		int i = 0;
		while(i < 100)
		{
			std::ostringstream oss;
			oss << "Idea number" << i ;
			Ideas[i] = oss.str();
			i++;
		}
	}

	Brain::~Brain()
	{
		std::cout << BROWN << "Brain destructor called" << RES << std::endl;
	}

	Brain::Brain(const Brain& copy)
	{
		std::cout << BROWN << "Brain copy constructor called" << RES << std::endl;

		int i = 0;

		while (i < 100)
		{
			Ideas[i] = copy.Ideas[i];
			i++;
		}
	}

	Brain& Brain::operator=(const Brain& copy)
	{
		std::cout << BROWN << "Brain operator= called" << RES << std::endl;

		int i = 0;
		if (this == &copy)
			return (*this);
		while (i < 100)
		{
			Ideas[i] = copy.Ideas[i];
			i++;
		}
		return (*this);
	}
