#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	// CHECK IF IT WORKS AS STACK
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	// CHECK IF STACK NOW CAN ITER
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "STACK CONTAINS:" << std::endl;
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl << std::endl;

	{
		std::cout << "REVERSE ITERS" << std::endl;
		MutantStack<int>::reverse_iterator	it = mstack.rbegin();
		MutantStack<int>::reverse_iterator	ite = mstack.rend();
		for ( ; it != ite; it++) {
			// *it = 5;
			std::cout << *it << " ";
		}
		std::cout << std::endl << std::endl;
	}

	{
		std::cout << "CONST ITERS" << std::endl;
		MutantStack<int>::const_iterator	it = mstack.cbegin();
		MutantStack<int>::const_iterator	ite = mstack.cend();
		for ( ; it != ite; it++) {
			// *it = 5;
			std::cout << *it << " ";
		}
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "CONST REVERSE ITERS" << std::endl;
		MutantStack<int>::const_reverse_iterator	it = mstack.crbegin();
		MutantStack<int>::const_reverse_iterator	ite = mstack.crend();
		for ( ; it != ite; it++) {
			// *it = 5;
			std::cout << *it << " ";
		}
		std::cout << std::endl << std::endl;
	}
}