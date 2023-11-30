#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout<<"Ice Default constructor"<<std::endl;
}
Ice::~Ice(){
    std::cout<<"Ice Default destructor"<<std::endl;
}
Ice::Ice(const Ice &oobj){
    std::cout<<"Ice copy constructor"<<std::endl;
    (*this) = oobj;
}
Ice &Ice::operator=(const Ice &oobj) {
    std::cout<<"Ice copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
AMateria* Ice::clone() const{
    return(new Ice(*this));
}
void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}