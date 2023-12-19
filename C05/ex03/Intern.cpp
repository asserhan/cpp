#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor called" << std::endl;
}
Intern :: Intern(const Intern &oobj){
    std::cout << "Intern copy constructor called" << std::endl;
    (*this) = oobj;
}
Intern &Intern::operator=(const Intern &oobj){
    std::cout << "Intern copy assignment operator called " << std::endl;
    (void)oobj;
    return(*this);
}
Intern:: ~Intern(){
    std::cout << "Intern destructor called" << std::endl;
}
Form *Intern::CreateShrubberyCreationForm(std::string target){
    return(new ShrubberyCreationForm(target));
}
Form *Intern::CreateRobotomyRequestForm(std::string target){
    return(new RobotomyRequestForm(target));
}
Form *Intern::CreatePresidentialPardonForm(std::string target){
    return(new PresidentialPardonForm(target));
}
Form *Intern::makeForm(std::string formName, std::string target){
    typedef Form* (Intern::*formPtr)(std::string target);
    formPtr createforms[3] = {&Intern::CreateShrubberyCreationForm, &Intern::CreateRobotomyRequestForm, &Intern::CreatePresidentialPardonForm};
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for(int i = 0; i < 3; i++){
        if(forms[i] == formName){
            std::cout << "Intern creates " << formName << std::endl;
            return((this->*createforms[i])(target));
        }
    }
    std::cout << "Intern can't create " << formName << std::endl;
    return(NULL);
}