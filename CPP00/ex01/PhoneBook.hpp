#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include<iostream>
#include<string>
#include<iomanip>
#include"Contact.hpp"

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
	void ask(std::string& contact_field, const std::string& field_name);
	void test(void);

	private :

	Contact contact[8];
};

std::string trunc(std::string s);

#endif
