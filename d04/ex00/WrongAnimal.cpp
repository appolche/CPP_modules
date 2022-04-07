#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;

	type = "Wrong_animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &another) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;

	type = another.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &another) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;

	type = another.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << " it doesn't says anything " << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}