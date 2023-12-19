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
    return(*this);
}