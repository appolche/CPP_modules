#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

// NOW CLASS FORM IS AN ABSRACT CLASS
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
        // extra exception, to check that the form is signed and that the grade of the buro attempting to execute the form is high enough.
        class IsNotSignedException : public std::exception {
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
        //checkers
        void    checkGrade(int grade) const;
        void    compareGrades(int bureaucrat_grade, int grade) const;
        //form signification by some bureaucrat
        void    beSigned(const Bureaucrat &bureaucrat);
        //makes class abstract, func that subj requires to execute the form’s action of the concrete inherit classes
        virtual void execute(Bureaucrat const &executor) const = 0;

    protected:
            void canBeExecuted(const Bureaucrat &executor) const;

    private:
        const std::string _name;
        bool  _signed;
        int   _signGrade;
        int   _execGrade; //do nothing in ex01


};

std::ostream & operator<<(std::ostream &os, const Form &form);

#endif