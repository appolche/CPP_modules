#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string typeValue) {

    this->type = typeValue;
}

Weapon::~Weapon() {}


std::string Weapon::getType() const {

	return (this->type);
}

void	Weapon::setType(std::string typeValue) {

	this->type = typeValue;
}

