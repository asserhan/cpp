#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Bureaucrat;
class Form;
class Intern{
    public:
    Intern();
    Intern(const Intern &oobj);
    Intern &operator=(const Intern &oobj);
    ~Intern();
    Form *makeForm(std::string formName, std::string target);
    Form *CreateShrubberyCreationForm(std::string target);
    Form *CreateRobotomyRequestForm(std::string target);
    Form *CreatePresidentialPardonForm(std::string target);
};
#endif