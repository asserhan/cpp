#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeSign;
        const int _gradeExec;
    public:
    AForm();
    AForm(std::string name, const int gradeToSign, const int gradeToExecute);
    AForm(const AForm &oobj);
    AForm &operator=(const AForm &oobj);
    ~AForm();
    //getters
    const std::string getName()const;
    bool getSigned()const;
    int getGradeToSign()const;
    int getGradeToExecute()const;

    //Exception classes
    class GradeTooHighExeption : public std::exception{
        public:
        virtual const char * what() const throw(){
            return "Grade too Hight";
        }
    };
    class GradeTooLowExeption : public std::exception{
        public:
        virtual const char * what() const throw(){
            return "Grade Too low";
        }
    };
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;
    
};
std :: ostream &operator<<(std :: ostream &os,const AForm &oobj);
#endif