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

void	Span::addNumber(unsigned int x){
	if (max_size <= container.size())
		throw std::out_of_range("Container already full");
	container.push_back(x);
}

void	Span::printContent(void){
	for (std::vector<unsigned int>::const_iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << std::endl;
}

int Span::shortestSpan(void){
	if (container.size() < 2)
		throw std::out_of_range("Not enough elements in container");
	std::vector<unsigned int> sortedArray = container;
	sort(sortedArray.begin(), sortedArray.end());
	unsigned int shortest = UINT_MAX;
	for (unsigned int i = 1; i < sortedArray.size(); i++){
		unsigned int span = sortedArray[i] - sortedArray[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

int Span::longestSpan(void){
	if (container.size() < 2)
		throw std::out_of_range("Not enough elements in container");
	auto result = std::minmax_element(container.begin(), container.end());
	return *result.second - *result.first;
}

void Span::addNumbers(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end){
	if (std::distance(begin, end) + container.size() > max_size){
		throw std::out_of_range("Container already too full to add these rang of numbers");
	}
	container.insert(container.end(), begin, end);
}