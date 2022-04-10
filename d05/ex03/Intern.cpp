#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & rhs) {
    *this = rhs;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & rhs) {
    (void) rhs;
	return *this;
}

Form *Intern::makeShrubbery(const std::string &form, const std::string &target) {
    std::cout << "Intern creates " << form << " form" << std::endl;
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomy(const std::string &form, const std::string &target) {
    std::cout << "Intern creates " << form << " form" <<  std::endl;
    return new RobotomyRequestForm(target);
}

Form *Intern::makePresidential(const std::string &form, const std::string &target) {
    std::cout << "Intern creates " << form << std::endl;
    return new PresidentialPardonForm(target);
}

typedef Form *(Intern:: *formFunc)(const std::string &, const std::string &);

Form * Intern::makeForm(std::string formName, std::string target) {

    formFunc makeForm_ptr[3] = {&Intern::makePresidential, &Intern::makeRobotomy, &Intern::makeShrubbery};

    std::string request[3] = {"presidential request", 
                            "robotonomy request", 
                            "shrubbery request"};

    for (int i = 0; i < 3; i++) {
        if (formName.compare(request[i]) == 0)
            return (this->*(makeForm_ptr[i]))(formName, target);
    }
    throw UnKnownFormException();
}

const char *Intern::UnKnownFormException::what() const throw() {
    return "Unknown Form Name!";
}