#include "WrongAnimal.hpp"

WrongAnimal :: WrongAnimal(){
    std::cout<<"Wrong Animal Default constructor"<<std::endl;
    setType("WrongAnimal");
}
WrongAnimal ::~WrongAnimal(){
    std::cout<<"Wrong Animal Default destructor"<<std::endl;
}
WrongAnimal :: WrongAnimal(const WrongAnimal &oobj){

    std::cout<<"Wrong Animal copy constructor"<<std::endl;
    (*this) = oobj;
}
WrongAnimal &WrongAnimal :: operator=(const WrongAnimal &oobj) {
    std::cout<<"Wrong Animal copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
std::string WrongAnimal :: getType()const{
    return(this->type);
}
void WrongAnimal :: setType(std ::string type){
    this->type = type;
}
void   WrongAnimal :: makeSound()const{
    std::cout <<"Wrong Animal sound"<<std::endl;
}