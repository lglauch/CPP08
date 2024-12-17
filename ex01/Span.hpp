#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
		std::vector<unsigned int> container;
		unsigned int max_size;
	
	public:
		Span(unsigned int N);
		Span(const Span &old);
		Span& operator=(const Span &old);
		~Span();

		void printContent(void);
		
		void addNumber(unsigned int x);
		int shortestSpan(void);
		int longestSpan(void);
		void addNumbers(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end);
};