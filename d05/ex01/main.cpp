#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {

	Form form;
	Form form1("Form1", 10, 12);
	//check overloaded <<
	std::cout << form << std::endl;
	std::cout << "----" << std::endl;
	std::cout << form1 << std::endl;
	std::cout << "----" << std::endl;

	//check Form getters 
	std::cout << form.getName() << std::endl;
	std::cout << form.getSigned() << std::endl;
	std::cout << form.getSignGrade() << std::endl;
	std::cout << form.getExecGrade() << std::endl;
	std::cout << "----" << std::endl;
	
	Bureaucrat bureaucrat("Tom", 1); 
	Bureaucrat bureaucrat1("Nick", 100); 
	//check form significations by bureaucrat
	bureaucrat1.signForm(form1);
	std::cout << bureaucrat1.getName() << "'s grade is " << bureaucrat1.getGrade() << ". Form's grade is " << form1.getSignGrade() << std::endl;
	std::cout << std::endl;
	bureaucrat.signForm(form1);
	std::cout << bureaucrat.getName() << "'s grade is " << bureaucrat.getGrade() << ". Form's grade is " << form1.getSignGrade() << std::endl;
}
