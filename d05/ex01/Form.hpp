#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    
    public:
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

        Form();
        Form(const std::string &_name, int _signGrade, int _execGrade);
        Form(Form const &rhs);
        ~Form();

        Form & operator=(Form const &rhs);
        //getters
        std::string	getName() const;
        int		getExecGrade() const;
        int		getSignGrade() const;
        bool    getSigned() const;
        //form signification by some bureaucrat
        void    beSigned(const Bureaucrat &bureaucrat);

    private:
        const std::string _name;
        bool  _signed;
        int   _signGrade;
        int   _execGrade; //do nothing in ex01
        void checkGrade(int grade);
        void compareGrades(int bureaucrat_grade, int grade);


};

std::ostream & operator<<(std::ostream &os, const Form &form);

#endif