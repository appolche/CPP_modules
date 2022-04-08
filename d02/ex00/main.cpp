#include "Fixed.hpp"

int main( void ) {
	
	std::cout << "\n1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Fixed a;

	std::cout << "\n2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Fixed b( a );

	std::cout << "\n3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Fixed c;
	std::cout << "\n4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	c = b;

	std::cout << "\n5 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	std::cout << "\n6 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	return 0;
}


