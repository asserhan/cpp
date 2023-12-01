#include "AMateria.hpp"

AMateria::AMateria() : type("default") {
    std::cout<<"AMateria Default constructor"<<std::endl;
}
AMateria::AMateria(std::string const & type) : type(type) {
    std::cout<<"AMateria "<< this->type << " is created " << std::endl;
}
AMateria::~AMateria(){
    std::cout<<"AMateria "<< this->type << " is destroyed " << std::endl;
}
AMateria::AMateria(AMateria const &oobj){
    std::cout<<"AMateria copy constructor"<<std::endl;
    (*this) = oobj;
}
AMateria &AMateria::operator=(AMateria const &oobj) {
    std::cout<<"AMateria copy assignment operator"<<std::endl;
    this->type =oobj.getType();
    return(*this);
}
std::string const & AMateria::getType() const{
    return(this->type);
}

void AMateria::use(ICharacter& target){
    std::cout << " AMateria "<< this->type << " used against "<< target.getName() << std::endl; 
}
