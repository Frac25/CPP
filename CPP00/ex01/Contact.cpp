#include"Contact.hpp"

Contact::Contact(void)
{
//	std::cout << "appel au constructeur de Contac" << std::endl;
}

Contact::~Contact(void)
{
//	std::cout << "appel au destructeur de Contac" << std::endl;
}

void Contact::setFirst_name(std::string first_name)
{
	_first_name = first_name;
}

std::string Contact::getFirst_name(void)
{
		return(_first_name);
}


void Contact::setLast_name(std::string last_name)
{
	_last_name = last_name;
}

std::string Contact::getLast_name(void)
{
		return(_last_name);
}


void Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

std::string Contact::getNickname(void)
{
		return(_nickname);
}


void Contact::setPhone_number(std::string phone_number)
{
	_phone_number = phone_number;
}

std::string Contact::getPhone_number(void)
{
		return(_phone_number);
}


void Contact::setDarkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

std::string Contact::getDarkest_secret(void)
{
		return(_darkest_secret);
}

