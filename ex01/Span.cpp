#include "Span.hpp"

Span::Span(unsigned int N) : max_size(N) {
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(const Span &old) : max_size(old.max_size) {
	container = old.container;
	std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span &old){
	if (this != &old){
		container = old.container;
		max_size = old.max_size;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

Span::~Span(void){
	std::cout << "Destructor called" << std::endl;
}

void	Span::addNumber(void){
	if (max_size <= container.size())
		throw std::out_of_range("Container already full");
	container.push_back(5);
}

void	Span::printContent(void){
	for (std::vector<unsigned int>::const_iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << std::endl;
}