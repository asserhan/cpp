#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Bureaucrat;
class AForm;
class Intern{
    public:
    Intern();
    Intern(const Intern &oobj);
    Intern &operator=(const Intern &oobj);
    ~Intern();
    AForm *makeForm(std::string formName, std::string target);
    AForm *CreateShrubberyCreationForm(std::string target);
    AForm *CreateRobotomyRequestForm(std::string target);
    AForm *CreatePresidentialPardonForm(std::string target);
};
#endif