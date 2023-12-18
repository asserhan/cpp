#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("default",72,45),_target("default"){
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Robotomy",72,45),_target(target){
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oobj):AForm(oobj){
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    (*this) = oobj;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &oobj){
    std::cout << "PresidentialPardonForm copy assignment operator called " << std::endl;
    this->_target = oobj._target;
    return(*this);
}
PresidentialPardonForm:: ~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}