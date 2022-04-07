#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	{
		{
			const Animal* j = new Dog();
			const Animal* i = new Cat();
			delete j;//should not create a leak
			delete i;
		}
		Animal *animals[4]; //array of Animal objects

		std::cout << "-----" << std::endl;

		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << "-----" << std::endl;
		for (int i = 0; i < 4; ++i) {
			std::cout << animals[i]->getType() << " says: ";
			animals[i]->makeSound();
		}
		std::cout << "-----" << std::endl;
		for (int i = 0; i < 4; ++i){
			delete animals[i];
		}
	}
	std::cout << "-----" << std::endl;
	Cat cat_1;
	Cat cat_2 = cat_1;

	std::cout << "Cat1's adress is: ";
	cat_1.printAddress();
	std::cout << "Cat2's adress is: ";
	cat_2.printAddress();

	std::cout << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << "Cat1's Brain ideas are: ";
	cat_1.printBrainIdeas();
	std::cout << "-----" << std::endl;
	std::cout << "Cat2's Brain ideas are: ";
	cat_2.printBrainIdeas();

	std::cout << std::endl;

	Dog dog_1;
	Dog dog_2 = dog_1;

	std::cout << "Dog1's adress is: ";
	dog_1.printAddress();
	std::cout << "Dog2's adress is: ";
	dog_2.printAddress();

	std::cout << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << "Dog1's brain ideas are: ";
	dog_1.printBrainIdeas();
	std::cout << "-----" << std::endl;
	std::cout << "Dog2's brain ideas are: ";
	dog_2.printBrainIdeas();
}