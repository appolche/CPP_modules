#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Default constructor called" << std::endl;
    // this->type = "Unknown_Animal";
}

Animal::Animal(Animal const &rhs) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = rhs;
}

Animal & Animal::operator=(Animal const &rhs) {
    this->type = rhs.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal default destructor called" << std::endl;
}   

// void Animal::makeSound() const {
//     std::cout << "Grrrr..." << std::endl;
// }

std::string Animal::getType() const {
    return this->type;
}

