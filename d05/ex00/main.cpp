#include "Bureaucrat.hpp"

int main() {
	{
		try {
			Bureaucrat("name", 151);
		} catch (Bureaucrat::GradeTooHighException &ex) {
			std::cout << ex.what() << std::endl;
		} catch (Bureaucrat::GradeTooLowException &ex) {
			std::cout << ex.what() << std::endl;  //this one should work
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "----" << std::endl;

	{
		try {
			Bureaucrat("name", 0);
		} catch (Bureaucrat::GradeTooHighException &ex) {
			std::cout << ex.what() << std::endl;  //this one should work
		} catch (Bureaucrat::GradeTooLowException &ex) {
			std::cout << ex.what() << std::endl; 
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "----" << std::endl;
	// Test increment/decrement + << operator
	{
		Bureaucrat tom ("Mr.Tom", 10);
		std::cout << tom.getName() << " " << tom.getGrade() << std::endl; //check if getters are working
		
		std::cout << std::endl;
		tom.increaseGrade();
		std::cout << tom << std::endl; //check if overloaded << is working
		tom.decreaseGrade();
		std::cout << tom << std::endl;

		try {
			for (int i = 0; i < 10; ++i){
				tom.increaseGrade();
			}
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
}
