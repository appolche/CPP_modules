#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
			: name("Default_name"), grade(150) {
	// std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) 
			: name(name) {
	checkGrade(grade);
	this->grade = grade;
	// std::cout << "Not default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) 
			: name(rhs.name), grade(rhs.grade) {
	// std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->grade = rhs.grade;
	return *this;
}

std::string		Bureaucrat::getName() const {
	return this->name;
}

int		Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::increaseGrade() {
	checkGrade(grade - 1);
	grade -= 1;
}

void Bureaucrat::decreaseGrade() {
	checkGrade(grade + 1);
	grade += 1;
}

void Bureaucrat::checkGrade(int grade) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::signForm(Form &form) const {
    try {
        form.beSigned(*this);
    	std::cout << this->name << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const Form &form) const {
    try {
        form.execute(*this);
    	std::cout << this->name << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & rhs) {
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}
