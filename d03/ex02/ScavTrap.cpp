# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	std::cout << "ScavTrap Default constructor called" << std::endl;
	name = "Mr.ScavTrap";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string nameValue) 
					: ClapTrap(nameValue) {

	std::cout << "ScavTrap Not_default constructor called" << std::endl;
	name = nameValue;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) {

	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {

	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	name = rhs.name;
	hit_points = rhs.hit_points;
	energy_points = rhs.energy_points;
	attack_damage = rhs.attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	
	std::cout << "|ScavTrap| ";
	ClapTrap::attack(target);
}

void ScavTrap::guardGate(){

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
