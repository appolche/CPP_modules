#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    
    public:
        Cat();
        Cat(Cat const &rhs);
        ~Cat();

        Cat & operator=(Cat const &rhs);
        void makeSound() const;
        void printAddress() const;
	    void printBrainIdeas() const;

    private:
        Brain *brain;

};

#endif