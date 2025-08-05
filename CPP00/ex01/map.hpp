#ifndef MAP_HPP
# define MAP_HPP

#include<iostream>
#include<string>

class Contact
{
	public :

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	Contact(void);
	~Contact(void);
};

class PhoneBook
{
	public :

	static int ind;
	static int nb_contact;
	static int max_contact;
	static size_t l_col;

	PhoneBook(void);
	~PhoneBook(void);

	void add(void);
	void search(void);
	std::string ask(std::string& contact_field, const std::string& field_name);
	std::string trunc(std::string s);
	void test(void);

	Contact _contact[8];

};
#endif
