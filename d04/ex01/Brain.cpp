#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i += 4) {
			ideas[i] = "run ";
			ideas[i + 1] = "eat ";
			ideas[i + 2] = "sleep ";
			ideas[i + 3] = "play ";
		}
}

Brain::Brain(Brain const &rhs) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
}

Brain & Brain::operator=(Brain const &rhs) {
    for (int i = 0; i < 100; i++)
		  ideas[i] = rhs.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain default destructor called" << std::endl;
}   

void Brain::printIdeas() const {
    for(int i = 0; i < 100; i++)
        std::cout << ideas[i] << std::endl;
}

