#include "EasyFind.hpp"
#include <vector>


int main(void){
	std::vector<int> container = {23, 5, 456, 0, 23, 1, 100};
	try{
	std::vector<int>::iterator value = easyfind(container, 0);
	std::cout << "Return value: " << *value << std::endl;
	}
	catch (std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}
}