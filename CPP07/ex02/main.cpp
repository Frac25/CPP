#include"Array.hpp"

int main(void)
{
	Array<int> A(10);

	A[0] = 69;

	std::cout << " size A = " << A.size() << std::endl;
	std::cout << " A[0] = " << A[0] << std::endl;

	return(0);

}
