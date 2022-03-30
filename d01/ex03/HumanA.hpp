#ifndef  HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

    public:
        HumanA();
        HumanA(std::string nameValue, Weapon weaponType);
        ~HumanA();
        
        void attack();

    private:
        std::string name;
        std::string weapon;

};

#endif
