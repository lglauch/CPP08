#include "Span.hpp"

int main(void){
	Span container(1000000);

	try{
		container.addNumber(1000);
		container.addNumber(10000);
		container.addNumber(100000);
	}
	catch (std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}

	try{
		std::cout << "Longest span: " << container.longestSpan() << std::endl;
	}
	catch(std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}
	
	try{
		std::cout << "Shortest span: " << container.shortestSpan() << std::endl;
	}
	catch(std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}

	std::vector<unsigned int> longContainer;

	for (unsigned int i = 0; i < 80000; i++)
		longContainer.push_back(i);

	try{
		container.addNumbers(longContainer.begin(), longContainer.end());
	}
	catch(std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "Longest span: " << container.longestSpan() << std::endl;
	}
	catch(std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}
	
	try{
		std::cout << "Shortest span: " << container.shortestSpan() << std::endl;
	}
	catch(std::out_of_range &e){
		std::cout << e.what() << std::endl;
	}

	// container.printContent();

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}