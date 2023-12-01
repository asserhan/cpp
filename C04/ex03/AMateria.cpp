#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria") {
    std::cout<<"AMateria Default constructor"<<std::endl;
}
AMateria::AMateria(std::string const & type) : type(type) {
    std::cout<<"AMateria Default constructor"<<std::endl;
}
AMateria::~AMateria(){
    std::cout<<"AMateria Default destructor"<<std::endl;
}
AMateria::AMateria(const AMateria &oobj){
    std::cout<<"AMateria copy constructor"<<std::endl;
    (*this) = oobj;
}
AMateria &AMateria::operator=(const AMateria &oobj) {
    std::cout<<"AMateria copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
std::string const & AMateria::getType() const{
    return(this->type);
}

void AMateria::use(ICharacter& target){
    std::cout << " AMateria "<< this->type << " used "<< target.getName() << std::endl; 
}