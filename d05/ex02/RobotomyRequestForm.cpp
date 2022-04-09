#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
: Form(), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
: Form("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) 
: Form(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    this->Form::operator=(rhs);
    this->_target = rhs._target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    canBeExecuted(executor);
    std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}