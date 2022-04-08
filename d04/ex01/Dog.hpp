#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    
    public:
        Dog();
        Dog(Dog const &rhs);
        ~Dog();

        Dog & operator=(Dog const &rhs);
        void makeSound() const;
        void printAddress() const;
	    void printBrainIdeas() const; 
    
    private:
        Brain *brain;

};

#endif