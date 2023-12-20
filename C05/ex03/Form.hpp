#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeSign;
        const int _gradeExec;
    public:
    Form();
    Form(std::string name, const int gradeToSign, const int gradeToExecute);
    Form(const Form &oobj);
    Form &operator=(const Form &oobj);
    virtual ~Form();
    //getters
    const std::string getName()const;
    bool getSigned()const;
    int getGradeToSign()const;
    int getGradeToExecute()const;

    //Exception classes
    class GradeTooHighExeption : public std::exception{
        public:
        virtual const char * what() const throw();
    };
    class GradeTooLowExeption : public std::exception{
        public:
        virtual const char * what() const throw();
    };
    class FormNotSignedException : public std::exception{
        public:
        virtual const char * what() const throw();
    };
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;
    
};
std :: ostream &operator<<(std :: ostream &os,const Form &oobj);
#endif