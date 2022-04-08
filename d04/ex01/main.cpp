#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	{
		std::cout << std::endl;
		std::cout << "SUBJ TESTING" << std::endl;
		//subj_test
		{
			const Animal* j = new Dog();
			std::cout << "-----" << std::endl;
			const Animal* i = new Cat();
			std::cout << "-----" << std::endl;
			delete j;//should not create a leak
			std::cout << "-----" << std::endl;
			delete i;
		}
		std::cout << std::endl;
		std::cout << "MY TESTS FOR ANIMALS ARRAY" << std::endl;
		//create an array of Animal objects
		Animal *animals[4]; 
		std::cout << "-----" << std::endl;
		//init Animals, half by Dogs, half by Cats
		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		//test animal for making appropriate sounds
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

	// test deep copies
	//cats
	std::cout << std::endl;
	std::cout << "DEEP COPIES TESTING" << std::endl;
	std::cout << "-----" << std::endl;
	Cat cat_1;
	std::cout << "-----" << std::endl;
	Cat cat_2 = cat_1;
	std::cout << "-----" << std::endl;
	std::cout << "Cat1's adress is: ";
	cat_1.printAddress();
	std::cout << "Cat2's adress is: ";
	cat_2.printAddress();

	//dogs
	std::cout << "-----" << std::endl;
	Dog dog_1;
	std::cout << "-----" << std::endl;
	Dog dog_2 = dog_1;
	std::cout << "-----" << std::endl;
	std::cout << "Dog1's adress is: ";
	dog_1.printAddress();
	std::cout << "Dog2's adress is: ";
	dog_2.printAddress();
	std::cout << "-----" << std::endl;

	// std::cout << "Cat1's Brain ideas are: ";
	// cat_1.printBrainIdeas();
	// std::cout << "-----" << std::endl;
	// std::cout << "Cat2's Brain ideas are: ";
	// cat_2.printBrainIdeas();


	// std::cout << std::endl;
	// std::cout << "-----" << std::endl;
	// std::cout << "Cat1's Brain ideas are: ";
	// cat_1.printBrainIdeas();
	// std::cout << "-----" << std::endl;
	// std::cout << "Cat2's Brain ideas are: ";
	// cat_2.printBrainIdeas();

	// std::cout << std::endl;

	// std::cout << std::endl;
	// std::cout << "-----" << std::endl;
	// std::cout << "Dog1's brain ideas are: ";
	// dog_1.printBrainIdeas();
	// std::cout << "-----" << std::endl;
	// std::cout << "Dog2's brain ideas are: ";
	// dog_2.printBrainIdeas();
}