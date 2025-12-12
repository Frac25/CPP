#include"Array.hpp"

int main(void)
{
	try
	{
		Array<int> A(10);

		A[0] = 42;
		std::cout << " size A = " << A.size() << std::endl;
		std::cout << " A[0] = " << A[0] << std::endl;
		std::cout << " A[9] = " << A[9] << std::endl;
		std::cout << " A[12] = " << A[12] << std::endl;
	}

	catch (std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Array<int> A(12);

		A[2] = 2;
		std::cout << " size A = " << A.size() << std::endl;
		std::cout << " A[2] = " << A[2] << std::endl;
		A[12] = 21;
	}

	catch (std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	return(0);
}
