#include "Dog.hpp"

Dog :: Dog(){
    std::cout<<"Dog Default constructor"<<std::endl;
    setType("Dog");
}
Dog ::~Dog(){
    std::cout<<"Dog Default destructor"<<std::endl;
}
Dog :: Dog(const Dog &oobj){

    std::cout<<"Dog copy constructor"<<std::endl;
    (*this) = oobj;
}
Dog &Dog :: operator=(const Dog &oobj) {
    std::cout<<"Dog copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
void Dog :: makeSound()const{
    std::cout << "Dogs bark "<<std::endl;
}