#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack &another) {
			std::stack<T>::operator=(another);
		}
		~MutantStack() {}

		MutantStack &operator=(const MutantStack &another) {
			std::stack<T>::operator=(another);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return this->std::stack<T>::c.begin(); }
		iterator end() { return this->std::stack<T>::c.end(); }

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator cbegin() { return this->std::stack<T>::c.cbegin(); }
		const_iterator cend() { return this->std::stack<T>::c.cend(); }

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return this->std::stack<T>::c.rbegin(); }
		reverse_iterator rend() { return this->std::stack<T>::c.rend(); }

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator crbegin() { return this->std::stack<T>::c.crbegin(); }
		const_reverse_iterator crend() { return this->std::stack<T>::c.crend(); }

};

#endif
