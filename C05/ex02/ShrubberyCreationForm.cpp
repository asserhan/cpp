#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("default",145,137),_target("default"){
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery",145,137),_target(target){
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oobj):AForm(oobj){
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    (*this) = oobj;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &oobj){
    std::cout << "ShrubberyCreationForm copy assignment operator called " << std::endl;
    this->_target = oobj._target;
    return(*this);
}
ShrubberyCreationForm:: ~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}