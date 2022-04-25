#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class ValueNotFound : public std::exception {
	public:
		const char *what() const throw() {
			return "Value not found!";
		}
};

template <typename T>
typename T::iterator easyfind(T& array, int value) {

	typename T::iterator i = std::find(array.begin(), array.end(), value);

	if (i == array.end()) {
		throw ValueNotFound();
	}
	
	return i;
}

#endif
