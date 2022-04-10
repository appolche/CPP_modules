#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"


class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm(const std::string &target);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
    void execute(const Bureaucrat &executor) const;

private:
    std::string _target;
};

#endif