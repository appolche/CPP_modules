#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &rhs) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = rhs;
}

Cat & Cat::operator=(Cat const &rhs) {
    this->type = rhs.type;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat default destructor called" << std::endl;
}   

void Cat::makeSound() const {
    std::cout << "meow" << std::endl;
}
