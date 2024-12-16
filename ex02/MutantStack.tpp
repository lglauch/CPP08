#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack(){
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &old){
	if (this != &old)
		this->c = old.c;
	std::cout << "Copy constructor called" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &old){
	if (this != &old)
		this->c = old.c;
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(){
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(){
	return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end(){
	return std::stack<T>::c.end();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::begin() const {
	return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::end() const {
	return std::stack<T>::c.end();
}