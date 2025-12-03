#ifndef  SPAN_HPP
# define SPAN_HPP

#include<iostream>
#include<exception>
#include<vector>
//#include<algorithm>

class Span
{
	private :

	unsigned int _N;
	std::vector<int> _integers;

	public :

	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span & copy);
	Span & operator=(const Span & copy);

	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	class StorageFullException : public std::exception
	{
		public :
		virtual const char * what() const throw();
	};

	class NoNumberStoredException : public std::exception
	{
		public :
		virtual const char * what() const throw();
	};

};

#endif
