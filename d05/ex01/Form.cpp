#include "Form.hpp"

Form::Form() 
: _name("Default_form"), _signed(false), _signGrade(150), _execGrade(150) {}

Form::Form(const std::string & name, const int signGrade, const int execGrade) 
: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
	checkGrade(_signGrade);
    checkGrade(_execGrade);
}

Form::Form(Form const & rhs) 
: _name(rhs._name), _signed(rhs._signed), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade) {
	*this = rhs;
}

Form::~Form() {}

Form & Form::operator=(Form const & rhs) {
	this->_signed = rhs._signed;
	return *this;
}

std::string		Form::getName() const {
	return this->_name;
}

int		Form::getExecGrade() const {
	return this->_execGrade;
}

int		Form::getSignGrade() const {
	return this->_signGrade;
}

bool Form::getSigned() const {
    return this->_signed;
}

void Form::checkGrade(int grade) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

void Form::compareGrades(int bureaucrat_grade, int grade) {
	if (bureaucrat_grade > grade){
		throw GradeTooLowException();
	}
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
   	compareGrades(bureaucrat.getGrade(), this->_signGrade);
    this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "             FORM INFO                 " << std::endl;
    os << "Name                     : " << form.getName() << std::endl;
    os << "Signed                   : " << (form.getSigned() ? "Yes" : "No") << std::endl;
    os << "Required grade to sign   : " << form.getSignGrade() << std::endl;
    os << "Required grade to execute: " << form.getExecGrade();
    return os;
}