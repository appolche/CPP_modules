#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;

	type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat &another) {
	std::cout << "WrongCat copy constructor called" << std::endl;

	type = another.type;
}

WrongCat &WrongCat::operator=(const WrongCat &another) {
	std::cout << "WrongCat assignment operator called" << std::endl;

	type = another.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong meow!" << std::endl;
}
