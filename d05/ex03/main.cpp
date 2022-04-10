#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

    try {
		Bureaucrat tom("Tom", 155);
	} catch (Bureaucrat::GradeTooHighException &ex) {
		std::cout << "Exception! " << ex.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &ex) {
		std::cout << "Exception! " << ex.what() << std::endl;  //this one should work
	} catch (std::exception &ex) {
		std::cout << "Exception! " << ex.what() << std::endl;
	}

    try {
		Bureaucrat nick("Nick", 0);
	} catch (Bureaucrat::GradeTooHighException &ex) {
		std::cout << "Exception! " << ex.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &ex) {
		std::cout << "Exception! " << ex.what() << std::endl;  //this one should work
	} catch (std::exception &ex) {
		std::cout << "Exception! " << ex.what() << std::endl;
	}

    
    Bureaucrat bob("Bob", 10);
    std::cout << bob << std::endl;
    std::cout << std::endl;

    // ShrubberyCreationForm shrubbery("Garden");
    // std::cout << shrubbery << std::endl;
    // bob.signForm(shrubbery);
    // bob.executeForm(shrubbery);

    // RobotomyRequestForm robotomy("Bender");
    // std::cout << robotomy << std::endl;
    // bob.signForm(robotomy);
    // bob.executeForm(robotomy);

    // PresidentialPardonForm presidential("Bureaucrat");
    // std::cout << presidential << std::endl;
    // bob.signForm(presidential);
    // bob.executeForm(presidential);


        Intern a;
        Form *shrubbery = a.makeForm("shrubbery request", "Garden");
        std::cout << *shrubbery << std::endl << std::endl;

        Form *robotomy = a.makeForm("robotonomy request", "Student");
        std::cout << *robotomy << std::endl << std::endl;

        Form *presidential = a.makeForm("presidential request", "Traitor");
        std::cout << *presidential << std::endl << std::endl;

        try {
            Form *fake = a.makeForm("Fake Form", "Fraud");
            (void) fake;
        }
        catch (std::exception &e) {
            std::cout << "Exception! " << e.what() << std::endl << std::endl;
        }

        bob.signForm(*shrubbery);
        bob.executeForm(*shrubbery);

        bob.signForm(*robotomy);
        bob.executeForm(*robotomy);

        bob.signForm(*presidential);
        bob.executeForm(*presidential);

        delete shrubbery;
        delete robotomy;
        delete presidential;


    return 0;
}