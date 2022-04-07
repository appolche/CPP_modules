#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &rhs) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = rhs;
}

Dog & Dog::operator=(Dog const &rhs) {
    this->type = rhs.type;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog default destructor called" << std::endl;
}   

void Dog::makeSound() const {
    std::cout << "WOOF!" << std::endl;
}
