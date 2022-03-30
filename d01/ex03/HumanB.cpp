#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string nameValue) {

    this->name = nameValue;
}

HumanB::~HumanB() {}

void	HumanB::attack() {

	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weaponValue) {

	this->weapon = weaponValue;
}

