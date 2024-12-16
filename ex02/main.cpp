#include "MutantStack.hpp"
#include <list>

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();

std::cout << "MutantStack contents:" << std::endl;
while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
// std::stack<int> s(mstack);

std::cout << std::endl;
std::cout << "List result" << std::endl;
std::cout << std::endl;

std::list<int> stack;
stack.push_back(5);
stack.push_back(17);
std::cout << stack.back() << std::endl;
stack.pop_back();
std::cout << stack.size() << std::endl;
stack.push_back(3);
stack.push_back(5);
stack.push_back(737);
stack.push_back(0);
std::list<int>::iterator it2 = stack.begin();
std::list<int>::iterator ite2 = stack.end();

std::cout << "List contents:" << std::endl;
while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

return 0;
}