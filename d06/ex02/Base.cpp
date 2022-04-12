#include "Base.hpp"

Base::~Base() {}

Base* generate(void)
{
	std::srand(time(NULL));	
	int r = std::rand() % 3 + 1;
	Base* base;

	switch (r) {
		case 1:
			base = new A;
			std::cout << "Base with type A has been created!" << std::endl;
			break;
		case 2:
			base = new B;
			std::cout << "Base with type B has been created!" << std::endl;
			break;
		case 3:
			base = new C;
			std::cout << "Base with type C has been created!" << std::endl;
			break;
	}
	return (base);
}

void identify(Base* p)
{
	A* childA = dynamic_cast<A*>(p);
	if (childA != NULL)
		std::cout << "Identification from pointer: The type of the child is |A|" << std::endl;

	B* childB = dynamic_cast<B*>(p);
	if (childB != NULL)
		std::cout << "Identification from pointer: The type of the child is |B|" << std::endl;
	
	C* childC = dynamic_cast<C*>(p);
	if (childC != NULL)
		std::cout << "Identification from pointer: The type of the child is |C|" << std::endl;

}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Identification from reference: The type of the child is |A|" << std::endl;
	} catch (std::bad_cast &bc) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Identification from reference: The type of the child is |B|" << std::endl;
	} catch (std::bad_cast &bc) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Identification from reference: The type of the child is |C|" << std::endl; 
	} catch (std::bad_cast &bc) {}
}