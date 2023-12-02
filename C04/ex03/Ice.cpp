#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
   //std::cout<<"Ice Default constructor"<<std::endl;
}
Ice::~Ice(){
    //std::cout<<"Ice Default destructor"<<std::endl;
}
Ice::Ice(Ice const &oobj) : AMateria("ice"){
   /// std::cout<<"Ice copy constructor"<<std::endl;
    this->type = oobj.getType();
}
Ice &Ice::operator=(Ice const &oobj) {
   // std::cout<<"Ice copy assignment operator"<<std::endl;
    this->type =oobj.getType();
    return(*this);
}
AMateria* Ice::clone() const{
    AMateria *tmp = new Ice(*this);
    return(tmp);
}
void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}