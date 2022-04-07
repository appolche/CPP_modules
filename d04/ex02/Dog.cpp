#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog const &rhs) {
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = rhs.type;
    brain = new Brain();
    *brain = *rhs.brain;
}

Dog & Dog::operator=(Dog const &rhs) {
    this->type = rhs.type;
    brain = new Brain();
    *brain = *rhs.brain;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog default destructor called" << std::endl;
    delete brain;
}   

void Dog::makeSound() const {
    std::cout << "WOOF!" << std::endl;
}

void Dog::printAddress() const {
	std::cout << brain << std::endl;
}

void Dog::printBrainIdeas() const{
	brain->printIdeas();
}