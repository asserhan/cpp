#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &oobj);
    Bureaucrat &operator=(const Bureaucrat &oobj);
    ~Bureaucrat();
    //Exception classes
    class GradeTooHighExeption : public std::exception{
        public:
        virtual const char * what() const throw();
    };
    class GradeTooLowExeption : public std::exception{
        public:
        virtual const char * what() const throw();
    };
    //getters
    const std::string getName()const;
    int getGrade() const;
    void Increment();
    void Decrement();
    void signForm(Form &form);
    void executeForm(Form const &form);
};
std :: ostream &operator<<(std :: ostream &os,const Bureaucrat &oobj);
#endif