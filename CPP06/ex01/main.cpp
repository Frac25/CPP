#include"Serializer.hpp"


int main(void)
{
	Data *data = new Data;
	data->name = "sylvain";
	data->age = 40;

	uintptr_t raw =  Serializer::serialize(data);
	Data *serialized =  Serializer::deserialize(raw);

	std :: cout << "data->name : " << data->name << std::endl;
	std :: cout << "data->age : " << data->age << std::endl;

	std :: cout << "serialized->name : " << serialized->name << std::endl;
	std :: cout << "serialized->age : " << serialized->age << std::endl;

	delete data;

	return(0);
}
