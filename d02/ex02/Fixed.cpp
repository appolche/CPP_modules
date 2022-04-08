#include "Fixed.hpp"

Fixed::Fixed() {

	// std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int const n) {

	// std::cout << "Int constructor called" << std::endl;
	this->value = n * (1 << this->nbits);
}

Fixed::Fixed(float const n) {

	// std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(n * (1 << this->nbits));
}

Fixed::Fixed(Fixed const & src) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {

	// std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	// std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & os, Fixed const & rhs) {

	os << rhs.toFloat();
	return os;
}

// comparison operators: операторы сравнения

bool Fixed::operator>(const Fixed &rhs) const {

	return value > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const {

	return value < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const {

	return value >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const {

	return value <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const {

	return value == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const {

	return value != rhs.getRawBits();
}

// arithmetic operators

Fixed Fixed::operator+(const Fixed &rhs) const {

	Fixed tmp;

	tmp.setRawBits(getRawBits() + rhs.getRawBits());
	return tmp;
}

Fixed Fixed::operator-(const Fixed &rhs) const {

	Fixed tmp;

	tmp.setRawBits(getRawBits() - rhs.getRawBits());
	return tmp;
}

Fixed Fixed::operator*(const Fixed &rhs) const {

	Fixed tmp;

	tmp.setRawBits(getRawBits() * rhs.getRawBits() / (1 << nbits));
	return tmp;
}

Fixed Fixed::operator/(const Fixed &rhs) const {

	Fixed tmp;

	tmp.setRawBits(getRawBits() * (1 << nbits) / rhs.getRawBits());
	return tmp;
}

// increment/decrement operators

// pre-increment
Fixed Fixed::operator++() {

	value++;
	return *this;
}

Fixed Fixed::operator--() {

	value--;
	return *this;
}

//post-increment
Fixed Fixed::operator++(int) {

	Fixed tmp(*this);
	
	value++;
	return tmp;
}

Fixed Fixed::operator--(int) {

	Fixed tmp(*this);

	value--;
	return tmp;
}

Fixed &Fixed::min(Fixed &f, Fixed &s) {

	if (f < s)
		return f;
	return s;
}

Fixed &Fixed::max(Fixed &f, Fixed &s) {

	if (f > s)
		return f;
	return s;
}

const Fixed &Fixed::min(const Fixed &f, const Fixed &s) {

	if (f < s)
		return f;
	return s;
}

const Fixed &Fixed::max(const Fixed &f, const Fixed &s) {

	if (f > s)
		return f;
	return s;
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

