#include "Cat.hpp"

Cat :: Cat(){
    std::cout<<"Cat Default constructor"<<std::endl;
    setType("Cat");
    
}
Cat ::~Cat(){
    std::cout<<"Cat Default destructor"<<std::endl;
}
Cat :: Cat(const Cat &oobj){

    std::cout<<"Cat copy constructor"<<std::endl;
    (*this) = oobj;
}
Cat &Cat :: operator=(const Cat &oobj) {
    std::cout<<"Cat copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
void Cat :: makeSound()const{
    std::cout << "Cats Meaaaaaaaoows"<<std::endl;
}