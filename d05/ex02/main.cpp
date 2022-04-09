#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bob("Bob", 1);
    std::cout << bob << std::endl;

    // ShrubberyCreationForm shrubbery("Garden");
    // std::cout << shrubbery << std::endl;
    // bob.signForm(shrubbery);
    // bob.executeForm(shrubbery);

    // RobotomyRequestForm robotomy("Student");
    // std::cout << robotomy << std::endl;
    // bob.signForm(robotomy);
    // bob.executeForm(robotomy);

    PresidentialPardonForm presidential("Traitor");
    std::cout << presidential << std::endl;
    bob.signForm(presidential);
    bob.executeForm(presidential);

    return 0;
}