#include "Zombie.hpp"

int main(){

	{
        std::cout << "stack_alloc_in_main" << std::endl;
		Zombie first("first");
		Zombie second("second");
		Zombie third("third");
		
		first.announce();
		second.announce();
		third.announce();
	}

	{
		std::cout << std::endl;
        std::cout << "heap_alloc_by_newZombie" << std::endl;
		Zombie *zombie1 = newZombie("zombie1");
        Zombie *zombie2 = newZombie("zombie2");
        Zombie *zombie3 = newZombie("zombie3");
        Zombie *zombie4 = newZombie("zombie4");
		zombie1->announce();
        zombie2->announce();
        zombie3->announce();
        zombie4->announce();
		delete zombie3;
        delete zombie2;
        delete zombie4;
        delete zombie1;
	}

	{
		std::cout << std::endl;
        std::cout << "stack_alloc_by_randomChump" << std::endl;
		randomChump("random zombie1");
        randomChump("random zombie2");
        randomChump("random zombie3");
        randomChump("random zombie4");
	}

	return (0);
}