#include "Cure.hpp"

Cure::Cure() : AMateria("Cure"){
    std::cout<<"Cure Default constructor"<<std::endl;
}
Cure::~Cure(){
    std::cout<<"Cure Default destructor"<<std::endl;
}
Cure::Cure(const Cure &oobj){
    std::cout<<"Cure copy constructor"<<std::endl;
    (*this) = oobj;
}
Cure &Cure::operator=(const Cure &oobj) {
    std::cout<<"Cure copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
AMateria* Cure::clone() const{
    return(new Cure(*this));
}
void Cure::use(ICharacter& target){
    std::cout << "* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}