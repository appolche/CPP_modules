#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
: Form(), _target("") {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
: Form(copy), _target(copy._target) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
: Form("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    this->Form::operator=(rhs);
    this->_target = rhs._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
    canBeExecuted(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}