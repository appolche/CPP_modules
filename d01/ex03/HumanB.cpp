#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string nameValue) 
	: name(nameValue) {}

HumanB::~HumanB() {}

void	HumanB::attack() {
	//this->weapon->getType() - weapon это указатель, поэтому ->
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weaponValue) { //ссылка

	this->weapon = &weaponValue; //адрес
}

