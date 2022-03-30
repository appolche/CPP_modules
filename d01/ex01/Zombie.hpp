#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

    public:
        Zombie();
        Zombie(std::string nameValue);
        ~Zombie();
        void announce( void );
        void setName(std::string nameValue);

    private:
        std::string name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
