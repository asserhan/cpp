#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP
#include <iostream>
#include <exception>

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    ~Bureaucrat();
    //Exception classes
    class GradeTooHighExeption : public std::exception{
        virtual const char * what() const throw(){
            return "Grade too Hight";
        }
    };
    class GradeTooLowExeption : public std::exception{
        virtual const char * what() const throw(){
            return "Grade Too low";
        }
    };
    const std::string getName()const;
    int getGrade() const;
};
#endif