#include "Span.hpp"

int main(void){
	unsigned int n = 8;
	Span container(n);

	try{
		container.addNumber();
		container.addNumber();
		container.addNumber();
		container.addNumber();
		container.addNumber();
		container.addNumber();
		container.addNumber();
		container.addNumber();
		// container.addNumber();
	}
	catch (std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}
	container.printContent();
}