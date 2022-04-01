#include "HumanA.hpp"

HumanA::HumanA(std::string nameValue, Weapon &weaponType) 
        : name(nameValue), weapon(weaponType) {}

HumanA::~HumanA() {}

void	HumanA::attack() {

	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

