#include "Brain.hpp"
Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}
Brain::~Brain(){
    std::cout << "Brain default destructor called" << std::endl;
}
Brain::Brain(const Brain &oobj){
    std::cout << "Brain copy constructor called" << std::endl;
    (*this) = oobj;
}
Brain &Brain::operator=(const Brain &oobj){
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = oobj.ideas[i];
    return (*this);
}