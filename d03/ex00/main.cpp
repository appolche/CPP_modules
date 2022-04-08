#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	elvek("Elvek");
	ClapTrap	borya("Borya");
	
	std::cout << "---" << std::endl;
	
	elvek.attack("Borya");
	borya.takeDamage(elvek.getDamage());
	std::cout << "---" << std::endl;
	
	borya.attack("Elvek");
	elvek.takeDamage(borya.getDamage());
	std::cout << "---" << std::endl;
	
	for (; borya.getEnergy(); borya.attack("Elvek"))
	;
	std::cout << "---" << std::endl;

	borya.beRepaired(5);
	std::cout << "---" << std::endl;

	ClapTrap	mrsRevenge("Mrs.Revenge");
	mrsRevenge.attack("Elvek");
	elvek.takeDamage(9);
	std::cout << "---" << std::endl;

	elvek.beRepaired(5);
	std::cout << "---" << std::endl;

	elvek.attack("Mrs.Revenge");
	mrsRevenge.takeDamage(10);
	std::cout << "---" << std::endl;

	mrsRevenge.attack("Elvek");
	std::cout << "---" << std::endl;


}