#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main(void) {
{
	ClapTrap	clap;
}
	std::cout << "---" << std::endl;
	ClapTrap	clap("Clap");
	std::cout << "---" << std::endl;
	ScavTrap	scav("Scav");
	std::cout << "---" << std::endl;
	FragTrap	frag("Frag");

	std::cout << "---" << std::endl;
	clap.printAttributes();
	std::cout << "---" << std::endl;
	scav.printAttributes();
	std::cout << "---" << std::endl;
	frag.printAttributes();

	std::cout << "---" << std::endl;
	clap.attack("Scav");
	scav.attack("Clap");
	frag.attack("Scav");
	std::cout << "---" << std::endl;

	scav.guardGate();
	frag.highFivesGuys();
	std::cout << "---" << std::endl;

}