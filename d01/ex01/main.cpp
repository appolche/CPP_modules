#include "Zombie.hpp"

int main() {

	int N = 10;
	Zombie *zombie = zombieHorde(N, "zombierat");

	for(int i = 0; i < N; i++){
		std::cout << " Zombierat #" << i << " created" << std::endl;
		zombie[i].announce();
	}
	delete[] zombie;
	return (0);
}