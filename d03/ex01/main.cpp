#include "ScavTrap.hpp"


int	main(void) {

	std::cout << "---" << std::endl;
	ClapTrap	clap("Clap");
	ScavTrap	scav("Scav");

	std::cout << "---" << std::endl;
	scav.printAttributes();

	std::cout << "---" << std::endl;
	clap.attack("Scav");
	scav.attack("Clap");
	std::cout << "---" << std::endl;

	scav.guardGate();
	std::cout << "---" << std::endl;

}