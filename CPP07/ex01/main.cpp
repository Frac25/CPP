# include "iter.hpp"

void fct1(int &i)
{
	i = i * 2;
}

void fct2(std::string &s)
{
	int i = 0;

	while(i < static_cast<int>(s.length()))
	{
		s[i] = std::toupper(s[i]);
		i++;
	}
}


int main(void)
{
	int a[5] = {0,1,2,3,4};
	::iter(a, 5, fct1);

	int i = 0;
	while (i < 5)
	{
		std::cout << a[i] << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::string s[] = {"ab", "cd"};
	::iter(s, 2, fct2);

	i = 0;
	while (i < 2)
	{
		std::cout << s[i] << std::endl;
		i++;
	}

		return(0);
}
