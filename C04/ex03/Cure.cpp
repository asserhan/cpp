#include "Cure.hpp"

Cure::Cure() : AMateria("Cure"){
   std::cout<<"Cure Default constructor"<<std::endl;
}
Cure::~Cure(){
    std::cout<<"Cure Default destructor"<<std::endl;
}
Cure::Cure(Cure const &oobj) : AMateria("Cure"){
    std::cout<<"Cure copy constructor"<<std::endl;
    (*this) = oobj;
}
Cure &Cure::operator=(Cure const &oobj) {
    std::cout<<"Cure copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
AMateria* Cure::clone() const{
    AMateria *tmp = new Cure(*this);
    return(tmp);
}
void Cure::use(ICharacter& target){
    std::cout << "* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}