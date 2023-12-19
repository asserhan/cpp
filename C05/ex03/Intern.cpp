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
AForm *Intern::CreateShrubberyCreationForm(std::string target){
    return(new ShrubberyCreationForm(target));
}
AForm *Intern::CreateRobotomyRequestForm(std::string target){
    return(new RobotomyRequestForm(target));
}
AForm *Intern::CreatePresidentialPardonForm(std::string target){
    return(new PresidentialPardonForm(target));
}
AForm *Intern::makeForm(std::string formName, std::string target){
    typedef AForm* (Intern::*formPtr)(std::string target);
    formPtr createforms[3] = {&Intern::CreateShrubberyCreationForm, &Intern::CreateRobotomyRequestForm, &Intern::CreatePresidentialPardonForm};
    std::string forms[3] = {"shrubberycreation", "robotomyrequest", "presidentialpardon"};
    for(int i = 0; i < 3; i++){
        if(forms[i] == formName){
            std::cout << "Intern creates " << formName << std::endl;
            return((this->*createforms[i])(target));
        }
    }
    std::cout << "Intern can't create " << formName << std::endl;
    return(NULL);
}