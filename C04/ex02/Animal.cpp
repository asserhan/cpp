#include "Animal.hpp"

Animal :: Animal(){
    std::cout<<"Animal Default constructor"<<std::endl;
}
Animal ::~Animal(){
    std::cout<<"Animal Default destructor"<<std::endl;
}
Animal :: Animal(const Animal &oobj){

    std::cout<<"Animal copy constructor"<<std::endl;
    (*this) = oobj;
}
Animal &Animal :: operator=(const Animal &oobj) {
    std::cout<<"Animal copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
std::string Animal :: getType()const{
    return(this->type);
}
void Animal :: setType(std ::string type){
    this->type = type;
}
