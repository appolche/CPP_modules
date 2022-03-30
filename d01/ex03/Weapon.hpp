#ifndef  WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

    public:
        Weapon();
        Weapon(std::string typeValue);
        ~Weapon();
        
        std::string getType() const;
        void setType(std::string typeValue);

    private:
        std::string type;

};

#endif
