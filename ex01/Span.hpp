#pragma once

#include <iostream>
#include <vector>

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
		
		void addNumber(void);
		void
};