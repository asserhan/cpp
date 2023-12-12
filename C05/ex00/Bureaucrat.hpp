#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP
#include <iostream>

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    ~Bureaucrat();
};
#endif