#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::HumanA(std::string nameValue, Weapon weaponType) {

    this->name = nameValue;
    this->weapon = weaponType.getType();
}

HumanA::~HumanA() {}

void	HumanA::attack() {

	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}

