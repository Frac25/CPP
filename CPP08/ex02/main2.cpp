#include <iostream>
#include <list>

int main()
{
std::list<int> mstack;
mstack.push_back(4);
mstack.push_back(17);
std::cout << mstack.back() << std::endl;
mstack.pop_back();
std::cout << mstack.size() << std::endl << std::endl;

mstack.push_back(3);
mstack.push_back(5);
mstack.push_back(737);
//[...]
mstack.push_back(0);
std::list<int>::iterator it = mstack.begin();
std::list<int>::iterator ite = mstack.end();
++it;
--it;

std::cout << "stack :" << std::endl;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}

std::list<int> s(mstack);

std::cout << std::endl << "test rbegin rend :" << std::endl;
std::list<int>::reverse_iterator rit = mstack.rbegin();
std::list<int>::reverse_iterator rite = mstack.rend();

std::cout << "stack :" << std::endl;
while (rit != rite)
{
std::cout << *rit << std::endl;
++rit;
}

return 0;
}
