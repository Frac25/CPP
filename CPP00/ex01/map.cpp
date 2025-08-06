# include <iostream>
# include"PhoneBook.hpp"

std::string trunc(std::string s)
{
	if ( s.length() > PhoneBook::l_col)
	{
		return (s.substr(0,PhoneBook::l_col-1) + ".");
	}
	return(s);
}

int main (void)
{
	std::string err_msg = "tapez ADD SEARCH ou EXIT :";
	std::string buf;
	PhoneBook _repertoir;


	while(1)
	{
		std::cout << err_msg;
		std::getline(std::cin, buf);

		if (buf == "EXIT")
		{
			return(0);
		}
		else if (buf == "ADD")
		{
			std::cout << std::endl << "ADD, index " << _repertoir.ind << std::endl;
			_repertoir.add();
			_repertoir.ind = (_repertoir.ind + 1)%_repertoir.max_contact;
			if(_repertoir.nb_contact < _repertoir.max_contact)
				_repertoir.nb_contact++;
		}
		else if (buf == "TEST")
		{
			_repertoir.nb_contact = 8;
			_repertoir.test();
			_repertoir.ind = 0;
		}
		else if (buf == "SEARCH")
		{
			_repertoir.search();
		}
	}

	return(0);
}
