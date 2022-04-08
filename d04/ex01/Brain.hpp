#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    
    public:
        Brain();
        Brain(std::string anotherIdeas);
        Brain(Brain const &rhs);
        virtual ~Brain();

        Brain & operator=(Brain const &rhs);
        void printIdeas() const;

    protected:
        std::string ideas[100];   

};

#endif