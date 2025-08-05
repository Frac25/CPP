#include"map.hpp"
#include<iomanip>

int PhoneBook::ind = 0;
int PhoneBook::nb_contact = 0;
int PhoneBook::max_contact = 8;
size_t PhoneBook::l_col = 10;

PhoneBook:: PhoneBook(void)
{
	std::cout << std::endl << "Welcome to PhoneBook!" << std::endl << std::endl;
	return;
}

PhoneBook:: ~PhoneBook(void)
{
	std::cout << "Bye bye!" << std::endl;
	return;
}

std::string PhoneBook:: ask(std::string& contact_field, const std::string& field_name)
{
	std::string buf;

	while(buf.empty())
	{
		std::cout << field_name << " : ";
		std::getline(std::cin, buf);
	}
	contact_field = buf;
	buf = "";
//	std::cout << "field_name = " << contact_field << std::endl;
	return(buf);
}

void PhoneBook::add(void)
{
	ask(_contact[ind].first_name, "First Name");
	ask(_contact[ind].last_name, "Last Name");
	ask(_contact[ind].nickname, "Nickname");
	ask(_contact[ind].phone_number, "Phone number");
	ask(_contact[ind].darkest_secret, "Darkest secret");
	std::cout << std::endl;

	return;
}

void PhoneBook::test(void)
{
	_contact[0].first_name = "Sylvain";
	_contact[0].last_name = "Dubois";
	_contact[0].nickname = "morto";
	_contact[0].phone_number = "06.33.93.24.06";
	_contact[0].darkest_secret = "PD";
	_contact[1].first_name = "Loic";
	_contact[1].last_name = "Dubois";
	_contact[1].nickname = "sdboisdu";
	_contact[1].phone_number = "06.33.93.24.07";
	_contact[1].darkest_secret = "de droite";
	_contact[2].first_name = "Anne";
	_contact[2].last_name = "Brunet";
	_contact[2].nickname = "noum";
	_contact[2].phone_number = "06.33.93.24.08";
	_contact[2].darkest_secret = "alcolique";
	_contact[3].first_name = "Victoria";
	_contact[3].last_name = "Morin";
	_contact[3].nickname = "vic";
	_contact[3].phone_number = "06.33.93.24.09";
	_contact[3].darkest_secret = "enceinte";
	_contact[4].first_name = "Cyril";
	_contact[4].last_name = "Dubois";
	_contact[4].nickname = "dub";
	_contact[4].phone_number = "06.33.93.24.10";
	_contact[4].darkest_secret = "fume";
	_contact[5].first_name = "Brigitte";
	_contact[5].last_name = "Dubois";
	_contact[5].nickname = "jacouille";
	_contact[5].phone_number = "06.33.93.24.11";
	_contact[5].darkest_secret = "pete";
	_contact[6].first_name = "Jean-michel";
	_contact[6].last_name = "Dubois";
	_contact[6].nickname = "jean mi";
	_contact[6].phone_number = "06.33.93.24.12";
	_contact[6].darkest_secret = "bigleu";
	_contact[7].first_name = "Marcelle";
	_contact[7].last_name = "Dubois";
	_contact[7].nickname = "mamy";
	_contact[7].phone_number = "06.33.93.24.13";
	_contact[7].darkest_secret = "morte";
	return;
}

std::string PhoneBook::trunc(std::string s)
{
	if ( s.length() > PhoneBook::l_col)
	{
		return (s.substr(0,PhoneBook::l_col-1) + ".");
	}
	return(s);
}

void PhoneBook::search(void)
{
	int i = 0;
	std::string buf;

	std::cout << "nb_contact = " << nb_contact << std::endl;
	std::cout << std::endl << "     Index|First Name| Last Name|  Nickname" << std::endl;
	while(i < nb_contact)
	{
	std::cout << std::setw(PhoneBook::l_col)<< i << "|"
	<< std::setw(PhoneBook::l_col) << trunc(_contact[i].first_name) << "|"
	<< std::setw(PhoneBook::l_col) << trunc(_contact[i].last_name) << "|"
	<< std::setw(PhoneBook::l_col) << trunc(_contact[i].nickname) << std::endl;
	i++;
	}
	std::cout << std::endl;

	std::cout << "Index du contact a afficher : ";
	std::getline(std::cin, buf);
	if(buf.length() != 1 || std::isdigit(buf[0]) == 0)
		return;
	int index = std::stoi(buf);
	if(index >= 0  && index < PhoneBook::nb_contact)
	{
		std::cout << "First Name : " << _contact[index].first_name << std::endl
		<< "Last Name : " << _contact[index].last_name << std::endl
		<< "Nickame : " << _contact[index].nickname << std::endl
		<< "Phone number : " << _contact[index].phone_number << std::endl
		<< "Darkest secret : " << _contact[index].darkest_secret << std::endl << std::endl;
	}
	return;
}

Contact:: Contact(void)
{
//	std::cout << "appel au constructeur de Contac" << std::endl;
	return;
}

Contact:: ~Contact(void)
{
//	std::cout << "appel au destructeur de Contac" << std::endl;
	return;
}


