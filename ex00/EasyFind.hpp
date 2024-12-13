#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

template<typename T>
typename T::iterator easyfind(T &container, int x){
	typename T::iterator iter = std::find(container.begin(), container.end(), x);
	if (iter == container.end())
		throw std::logic_error("No occurence found!");
	return iter;
}