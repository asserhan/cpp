#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}
Bureaucrat:: Bureaucrat(std::string name,int grade) : _name(name){
    std::cout << "Bureaucrat constructor called" << std::endl;
   if(grade < 1)
        throw Bureaucrat:: GradeTooHighExeption();
    else if(grade > 150)
        throw Bureaucrat :: GradeTooLowExeption();
    else 
        _grade = grade ;
}
const std::string  Bureaucrat :: getName()const{
    return(this->_name);
}
int Bureaucrat :: getGrade()const{
    return(this->_grade);
}
void Bureaucrat :: Increment(){
    if(this->_grade == 1)
        throw Bureaucrat :: GradeTooHighExeption();
    else
        this->_grade--;
}
void Bureaucrat :: Decrement(){
    if(this->_grade == 150)
        throw Bureaucrat :: GradeTooLowExeption();
    else
        this->_grade++;
}
