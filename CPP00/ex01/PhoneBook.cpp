#include"PhoneBook.hpp"
#include<sstream>


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

void PhoneBook:: ask(std::string& contact_field, const std::string& field_name)
{
	std::string buf;

	while(buf.empty())
	{
		std::cout << field_name << " : ";
		std::getline(std::cin, buf);
	}
	contact_field = buf;
	buf = "";
	return;
}

void PhoneBook::add(void)
{
	ask(contact[ind].first_name, "First Name");
	ask(contact[ind].last_name, "Last Name");
	ask(contact[ind].nickname, "Nickname");
	ask(contact[ind].phone_number, "Phone number");
	ask(contact[ind].darkest_secret, "Darkest secret");
	std::cout << std::endl;

	return;
}

void PhoneBook::search(void)
{
	int i = 0;
	int index;
	std::string buf;

	std::cout << std::endl << "     Index|First Name| Last Name|  Nickname" << std::endl;
	while(i < nb_contact)
	{
	std::cout << std::setw(PhoneBook::l_col)<< i << "|"
	<< std::setw(PhoneBook::l_col) << trunc(contact[i].first_name) << "|"
	<< std::setw(PhoneBook::l_col) << trunc(contact[i].last_name) << "|"
	<< std::setw(PhoneBook::l_col) << trunc(contact[i].nickname) << std::endl;
	i++;
	}
	std::cout << std::endl;

	std::cout << "Index du contact a afficher : ";
	std::getline(std::cin, buf);
	if(buf.length() != 1 || std::isdigit(buf[0]) == 0)
	{
		std::cout << std::endl;
		return;
	}

	std::istringstream iss(buf);
	iss >> index;
	if(index >= 0  && index < PhoneBook::nb_contact)
	{
		std::cout << "First Name : " << contact[index].first_name << std::endl
		<< "Last Name : " << contact[index].last_name << std::endl
		<< "Nickame : " << contact[index].nickname << std::endl
		<< "Phone number : " << contact[index].phone_number << std::endl
		<< "Darkest secret : " << contact[index].darkest_secret << std::endl << std::endl;
	}
	return;
}

void PhoneBook::test(void)
{
	contact[0].first_name = "Sylvain";
	contact[0].last_name = "Dubois";
	contact[0].nickname = "morto";
	contact[0].phone_number = "07.35.64.45.06";
	contact[0].darkest_secret = "PD";
	contact[1].first_name = "Loic";
	contact[1].last_name = "Dubois";
	contact[1].nickname = "sdboisdu";
	contact[1].phone_number = "07.35.64.45.07";
	contact[1].darkest_secret = "de droite";
	contact[2].first_name = "Anne";
	contact[2].last_name = "Brunet";
	contact[2].nickname = "noum";
	contact[2].phone_number = "07.35.64.45.08";
	contact[2].darkest_secret = "alcolique";
	contact[3].first_name = "Victoria";
	contact[3].last_name = "Morin";
	contact[3].nickname = "vic";
	contact[3].phone_number = "07.35.64.45.09";
	contact[3].darkest_secret = "enceinte";
	contact[4].first_name = "Cyril";
	contact[4].last_name = "Dubois";
	contact[4].nickname = "dub";
	contact[4].phone_number = "07.35.64.45.10";
	contact[4].darkest_secret = "fume";
	contact[5].first_name = "Brigitte";
	contact[5].last_name = "Dubois";
	contact[5].nickname = "jacouille";
	contact[5].phone_number = "07.35.64.45.11";
	contact[5].darkest_secret = "pete";
	contact[6].first_name = "Jean-michel";
	contact[6].last_name = "Dubois";
	contact[6].nickname = "jean mi";
	contact[6].phone_number = "07.35.64.45.12";
	contact[6].darkest_secret = "bigleu";
	contact[7].first_name = "Marcelle";
	contact[7].last_name = "Dubois";
	contact[7].nickname = "mamy";
	contact[7].phone_number = "07.35.64.45.13";
	contact[7].darkest_secret = "morte";
	return;
}


