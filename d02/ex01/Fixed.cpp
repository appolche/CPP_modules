#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int const n) {

	std::cout << "Int constructor called" << std::endl;
	this->value = n * (1 << this->nbits); // n * 256
}

Fixed::Fixed(float const n) {

	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(n * (1 << this->nbits)); // округление флота (42.42f * 256)
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & os, Fixed const & rhs)
{
	os << rhs.toFloat();
	return os;
}

int		Fixed::getRawBits() const {

	return this->value;
}

void	Fixed::setRawBits(int const raw) {

	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << this->nbits);
}

int		Fixed::toInt(void) const
{
	return (int)(this->value >> this->nbits);
}

