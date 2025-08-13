#include"PhoneBook.hpp"
#include<sstream>


int PhoneBook::ind = 0;
int PhoneBook::nb_contact = 0;
int PhoneBook::max_contact = 8;
size_t PhoneBook::l_col = 10;

PhoneBook:: PhoneBook(void)
{
	std::cout << std::endl << "Welcome to PhoneBook!" << std::endl << std::endl;
}

PhoneBook:: ~PhoneBook(void)
{
	std::cout << "Bye bye!" << std::endl;
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
	std::string tmp;

	ask(tmp, "First Name");
	contact[ind].setFirst_name(tmp);
	ask(tmp, "Last Name");
	contact[ind].setLast_name(tmp);
	ask(tmp, "Nickname");
	contact[ind].setNickname(tmp);
	ask(tmp, "Phone number");
	contact[ind].setPhone_number(tmp);
	ask(tmp, "Darkest secret");
	contact[ind].setDarkest_secret(tmp);
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
	<< std::setw(PhoneBook::l_col) << trunc(contact[i].getFirst_name()) << "|"
	<< std::setw(PhoneBook::l_col) << trunc(contact[i].getLast_name()) << "|"
	<< std::setw(PhoneBook::l_col) << trunc(contact[i].getNickname()) << std::endl;
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
		std::cout << "First Name : " << contact[index].getFirst_name() << std::endl
		<< "Last Name : " << contact[index].getLast_name() << std::endl
		<< "Nickame : " << contact[index].getNickname() << std::endl
		<< "Phone number : " << contact[index].getPhone_number() << std::endl
		<< "Darkest secret : " << contact[index].getDarkest_secret() << std::endl << std::endl;
	}
	return;
}

void PhoneBook::test(void)
{
contact[0].setFirst_name("Sylvain");
contact[0].setLast_name("Dubois");
contact[0].setNickname("morto");
contact[0].setPhone_number("07.35.64.45.06");
contact[0].setDarkest_secret("PD");

contact[1].setFirst_name("Loic");
contact[1].setLast_name("Dubois");
contact[1].setNickname("sdboisdu");
contact[1].setPhone_number("07.35.64.45.07");
contact[1].setDarkest_secret("de droite");

contact[2].setFirst_name("Anne");
contact[2].setLast_name("Brunet");
contact[2].setNickname("noum");
contact[2].setPhone_number("07.35.64.45.08");
contact[2].setDarkest_secret("alcolique");

contact[3].setFirst_name("Victoria");
contact[3].setLast_name("Morin");
contact[3].setNickname("vic");
contact[3].setPhone_number("07.35.64.45.09");
contact[3].setDarkest_secret("enceinte");

contact[4].setFirst_name("Cyril");
contact[4].setLast_name("Dubois");
contact[4].setNickname("dub");
contact[4].setPhone_number("07.35.64.45.10");
contact[4].setDarkest_secret("fume");

contact[5].setFirst_name("Brigitte");
contact[5].setLast_name("Dubois");
contact[5].setNickname("jacouille");
contact[5].setPhone_number("07.35.64.45.11");
contact[5].setDarkest_secret("pete");

contact[6].setFirst_name("Jean-michel");
contact[6].setLast_name("Dubois");
contact[6].setNickname("jean mi");
contact[6].setPhone_number("07.35.64.45.12");
contact[6].setDarkest_secret("bigleu");

contact[7].setFirst_name("Marcelle");
contact[7].setLast_name("Dubois");
contact[7].setNickname("mamy");
contact[7].setPhone_number("07.35.64.45.13");
contact[7].setDarkest_secret("morte");

	return;
}


