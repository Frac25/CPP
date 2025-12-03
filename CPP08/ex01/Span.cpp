#include"Span.hpp"

Span::Span() : _N(0)
{

}

Span::Span(unsigned int N) : _N(N)
{

}

Span::~Span()
{

}

Span::Span(const Span & copy) : _N(copy._N), _integers(copy._integers)
{

}

Span & Span::operator=(const Span & copy)
{
	if (this != &copy)
	{
		_N = copy._N;
		_integers = copy._integers;
	}

	return (*this);
}

void Span::addNumber(int n)
{
	if (_integers.size() >= _N)
		throw (StorageFullException());
	_integers.push_back(n);

}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_integers.size() >= _N)
		throw (StorageFullException());
	_integers.insert(_integers.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
	if(_integers.size() <= 1)
		throw (NoNumberStoredException());

	std::vector<int> tmp = _integers;
	std::sort(tmp.begin(), tmp.end());

	int short_tmp = tmp[1] - tmp[0];
	int next_tmp;
	unsigned int i = 2;

	while ( i < _N)
	{
		next_tmp = tmp[i] - tmp[i-1];
		if (next_tmp < short_tmp)
			short_tmp = next_tmp;
		i++;
	}
	return (short_tmp);
}

unsigned int Span::longestSpan()
{
	if(_integers.size() <= 1)
		throw (NoNumberStoredException());
	std::vector<int> tmp = _integers;
	std::sort(tmp.begin(), tmp.end());

	return(tmp[tmp.size() - 1] - tmp[0]);
}


const char * Span::StorageFullException::what() const throw()
{
	return("Storage is full");
}

const char * Span::NoNumberStoredException::what() const throw()
{
	return("Not enought numbers stored");
}

