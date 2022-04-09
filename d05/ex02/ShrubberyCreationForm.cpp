#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
: Form(), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) 
: Form(copy), _target(copy._target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: Form("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    this->Form::operator=(rhs);
    this->_target = rhs._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const{

    canBeExecuted(executor);
    std::ifstream src("ascii-tree", std::ios::binary);
    std::ofstream dst(this->_target + "_shrubbery", std::ios::binary);
    dst << src.rdbuf();
    src.close();
    dst.close();
}
