#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
    
    public:
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(Bureaucrat const &rhs);
        ~Bureaucrat();

        Bureaucrat & operator=(Bureaucrat const &rhs);
        std::string	getName() const;
        int		    getGrade() const;
        void increaseGrade();
	    void decreaseGrade();

    private:
        const std::string name;
        int   grade;
        void checkGrade(int grade);


};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & rhs);

#endif