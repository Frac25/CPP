#ifndef  SERIALIZER_HPP
# define SERIALIZER_HPP

#include<iostream>
#include<string>
#include<algorithm>
#include<stdint.h>

struct Data
{
	std::string name;
	int age;
};

class Serializer
{
	private :
		Serializer();
		~Serializer();
		Serializer(const Serializer& copy);
		Serializer& operator=(const Serializer& copy);

	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif
