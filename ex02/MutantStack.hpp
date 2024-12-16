#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>{

	public:
		MutantStack();
		MutantStack(const MutantStack &old);
		MutantStack& operator=(const MutantStack &old);
		~MutantStack();

		typedef typename std::stack<T>::container_type container;
		typedef typename container::iterator iterator;
		typedef typename container::const_iterator const_iterator;

		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;

};

# include "MutantStack.tpp"

#endif