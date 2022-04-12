#include "Base.hpp"
//приведение к дочернему типу, понижающее приведение
////dynamic cast = позволяет выполнять конвертацию указателя роидтельского класса в указатели дочернего

int main() {

	Base *base = generate();
	
	identify(base);
	identify(*base);
	
	delete base;
    return 0;
}
