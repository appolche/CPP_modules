#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {

    Animal a;
    Dog b;
    Cat c;
    std::cout << "------" << std::endl;

    std::cout << a.getType() << " says : ";
    a.makeSound();
    std::cout << b.getType() << " says : ";
    b.makeSound();
    std::cout << c.getType() << " says : ";
    c.makeSound();
    std::cout << "------" << std::endl;
    
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat_animal = new WrongCat();
    const WrongCat* wrong_cat = new WrongCat();
    std::cout << "------" << std::endl;

	std::cout << wrong_animal->getType() << " says : ";
	wrong_animal->makeSound();
	std::cout << wrong_cat_animal->getType() << " says : ";
	wrong_cat_animal->makeSound();
    std::cout << wrong_cat->getType() << " says : ";
	wrong_cat->makeSound();

	delete wrong_animal;
	delete wrong_cat;
    std::cout << "------" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "------" << std::endl;

    std::cout << meta->getType() << " says : ";
    meta->makeSound();
    std::cout << j->getType() << " says : ";
    j->makeSound();
    std::cout << i->getType() << " says : ";
    i->makeSound(); //will output the cat sound!
    std::cout << "------" << std::endl;

    delete meta;
    delete i;
    delete j;

    return 0;
}
