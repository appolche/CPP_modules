#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
: name("Default_name"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string & name, int grade) 
: name(name) {
	checkGrade(grade);
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) 
: name(rhs.name), grade(rhs.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
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
