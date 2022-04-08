# include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "FragTrap Default constructor called" << std::endl;
	name = "Mr.FragTrap";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string nameValue)
					: ClapTrap(nameValue) {
	std::cout << "FragTrap Not_default constructor called" << std::endl;
	name = nameValue;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const & rhs) {

	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {

	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	name = rhs.name;
	hit_points = rhs.hit_points;
	energy_points = rhs.energy_points;
	attack_damage = rhs.attack_damage;
	return *this;
}

void FragTrap::attack(const std::string& target) {
	
	std::cout << "|FragTrap| ";
	ClapTrap::attack(target);
}

void FragTrap::highFivesGuys(void) {

	std::cout << "* ATTENTION It's time to give a High Five! *" << std::endl;
	std::cout << "* clap-clap-clap *" << std::endl;
}
