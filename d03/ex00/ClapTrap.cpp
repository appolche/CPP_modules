#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

	std::cout << "ClapTrap Default constructor called" << std::endl;
	name = "Mr.ClapTrap";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string nameValue) 
		: name(nameValue) {

	std::cout << "ClapTrap Not_default constructor called" << std::endl;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & rhs) {

	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {

	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	return *this;
}

int ClapTrap::getDamage() const {
	
	return (this->attack_damage);
}

int ClapTrap::getEnergy() const {
	
	return (this->energy_points);
}

void ClapTrap::attack(const std::string& target) {
	
	if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << this->name << " attacks " << target <<std::endl;
		this->energy_points--;
	}
	else
		std::cout << this->name << " doesn't have enough energy or health for atack"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

	if (this->hit_points > 0) {
		std::cout << this->name << " gets " << amount << " points of damage" << std::endl;
		this->hit_points -= amount;
		if (this->hit_points <= 0) {
			this->hit_points = 0;
			std::cout << this->name << " died"<< std::endl;
		}
		else
			std::cout << this->name << " has " << this->hit_points << " hit_points left" << std::endl;
	}
	else
		std::cout << this->name << " is already dead"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << this->name << " repairs himself. Health increased by "<< amount << " points" <<std::endl;
		this->hit_points += amount;
		this->energy_points--;
	}
	else
		std::cout << this->name << " doesn't have enough energy or health for repairing. Probably he's already dead... Or maybe he's just tired of all this sh*t?"<<std::endl;
}

void ClapTrap::printAttributes() const {

	std::cout << "name: " << name << std::endl;
	std::cout << "hit_points: " << hit_points << std::endl;
	std::cout << "energy_points: " << energy_points << std::endl;
	std::cout << "attack_damage: " << attack_damage << std::endl;

}
