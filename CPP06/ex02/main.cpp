#include"Base.hpp"

Base * generate(void)
{
	int i;
	Base *base;

	i = rand() %3;

	switch(i)
	{
		case 0 :
		base = new A;
		break;
		case 1 :
		base = new B;
		break;
		case 2 :
		base = new C;
		break;
	}

	return(base);
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if(dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if(dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}

	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}

	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}


}

int main(void)
{

	srand(time(NULL));

	Base* base_ptr = generate();
	Base& base_add = *base_ptr;

	identify(base_ptr);
	identify(base_add);

	delete(base_ptr);
	return(0);
}
