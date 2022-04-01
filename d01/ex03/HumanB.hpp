#ifndef  HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

    public:
        HumanB();
        HumanB(std::string nameValue);
        ~HumanB();
        
        void attack();
        void setWeapon(Weapon &weaponValue);

    private:
        std::string name;
        Weapon *weapon;

};

#endif
