#ifndef INTERN_HPP
# define INTERN_HPP

#include <exception>
#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Form;

class Intern {
    
    public:

        class UnKnownFormException : public std::exception {
            public:
                const char *what() const throw();
        };

        Intern();
        Intern(Intern const &rhs);
        ~Intern();

        Intern & operator=(Intern const &rhs);

        Form *makeForm(std::string formName, std::string target);
        
        Form *makePresidential(const std::string &form, const std::string &target);
        Form *makeRobotomy(const std::string &form, const std::string &target);
        Form *makeShrubbery(const std::string &form, const std::string &target);
};


#endif