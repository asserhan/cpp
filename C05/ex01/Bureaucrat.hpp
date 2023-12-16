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
    Bureaucrat(const Bureaucrat &oobj);
    Bureaucrat &operator=(const Bureaucrat &oobj);
    ~Bureaucrat();
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
    //getters
    const std::string getName()const;
    int getGrade() const;
    void Increment();
    void Decrement();
};
std :: ostream &operator<<(std :: ostream &os,const Bureaucrat &oobj);
#endif