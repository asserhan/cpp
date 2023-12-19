#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("default",72,45),_target("default"){
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("Robotomy",72,45),_target(target){
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oobj):Form(oobj){
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    (*this) = oobj;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &oobj){
    std::cout << "RobotomyRequestForm copy assignment operator called " << std::endl;
    this->_target = oobj._target;
    return(*this);
}
RobotomyRequestForm:: ~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if(this->getSigned() == false)
        throw Form::FormNotSignedException();
    else if(executor.getGrade() < this->getGradeToExecute())
        throw Form::GradeTooLowExeption();
    else{
        std::cout << "Meaaaaaaw "<< "RobotomyRequestForm is executed" << std::endl;
        if(rand() % 2 == 0)
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->_target << " has not been robotomized successfully" << std::endl;
    }
}
