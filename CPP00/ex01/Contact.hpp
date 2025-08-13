#ifndef CONTACT_HPP
# define CONTACT_HPP

#include<iostream>

class Contact
{
	public :

	Contact(void);
	~Contact(void);

	void setFirst_name(std::string first_name);
	std::string getFirst_name(void);
	void setLast_name(std::string _last_name);
	std::string getLast_name(void);
	void setNickname(std::string _nickname);
	std::string getNickname(void);
	void setPhone_number(std::string _phone_number);
	std::string getPhone_number(void);
	void setDarkest_secret(std::string _darkest_secret);
	std::string getDarkest_secret(void);



	private :

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;



};

#endif
