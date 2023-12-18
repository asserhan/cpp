#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("default",25,5),_target("default"){
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Presidential",25,5),_target(target){
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
void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if(this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if(executor.getGrade() < this->getGradeToExecute())
        throw AForm::GradeTooLowExeption();
    else{
       std :: cout << this->_target << " has been pardoned by Zaphod Beeblebrox"<< std::endl;
    }
}