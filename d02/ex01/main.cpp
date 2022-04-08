#include "Fixed.hpp"

int main( void ) {

	std::cout << "\n1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Fixed a;

	std::cout << "\n2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Fixed const b( 10 );

	std::cout << "\n3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Fixed const c( 42.42f );

	std::cout << "\n4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Fixed const d( b );
	
	std::cout << "\n5 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	a = Fixed( 1234.4321f );

	std::cout << "\n6 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "\n7 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << "\n8 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	return 0;
}