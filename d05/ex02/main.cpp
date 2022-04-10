#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

    try {
		Bureaucrat tom("Tom", 155);
	} catch (Bureaucrat::GradeTooHighException &ex) {
		std::cout << ex.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &ex) {
		std::cout << ex.what() << std::endl;  //this one should work
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

    try {
		Bureaucrat nick("Nick", 0);
	} catch (Bureaucrat::GradeTooHighException &ex) {
		std::cout << ex.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &ex) {
		std::cout << ex.what() << std::endl;  //this one should work
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

    
    Bureaucrat bob("Bob", 10);
    std::cout << bob << std::endl;
    std::cout << std::endl;

    ShrubberyCreationForm shrubbery("Garden");
    std::cout << shrubbery << std::endl;
    bob.signForm(shrubbery);
    bob.executeForm(shrubbery);

    // RobotomyRequestForm robotomy("Bender");
    // std::cout << robotomy << std::endl;
    // bob.signForm(robotomy);
    // bob.executeForm(robotomy);

    // PresidentialPardonForm presidential("Bureaucrat");
    // std::cout << presidential << std::endl;
    // bob.signForm(presidential);
    // bob.executeForm(presidential);

    return 0;
}