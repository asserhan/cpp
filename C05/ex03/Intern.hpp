#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;
class AForm;
class Intern{
    public:
    Intern();
    Intern(const Intern &oobj);
    Intern &operator=(const Intern &oobj);
    ~Intern();
    AForm *makeForm(std::string formName, std::string target);
};
#endif