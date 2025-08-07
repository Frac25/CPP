#include<iostream>

class Weapon
{
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon(void);
		std::string& getType(void);
		void setType(std::string type);

	private :
		std::string _type;

};