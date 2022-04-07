#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const &rhs) {
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = rhs.type;
    brain = new Brain();
	*brain = *rhs.brain;
}

Cat & Cat::operator=(Cat const &rhs) {
    this->type = rhs.type;
    brain = new Brain();
	*brain = *rhs.brain;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat default destructor called" << std::endl;
    delete brain;
}   

void Cat::makeSound() const {
    std::cout << "meow" << std::endl;
}

void Cat::printAddress() const {
	std::cout << brain << std::endl;
}

void Cat::printBrainIdeas() const {
	brain->printIdeas();
}
