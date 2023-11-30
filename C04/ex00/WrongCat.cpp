#include "WrongCat.hpp"

WrongCat :: WrongCat(){
    std::cout<<"Wrong Cat Default constructor"<<std::endl;
    setType("WrongCat");
    
}
WrongCat ::~WrongCat(){
    std::cout<<"Wrong Cat Default destructor"<<std::endl;
}
WrongCat :: WrongCat(const WrongCat &oobj){

    std::cout<<"Wrong Cat copy constructor"<<std::endl;
    (*this) = oobj;
}
WrongCat &WrongCat :: operator=(const WrongCat &oobj) {
    std::cout<<"Wrong Cat copy assignment operator"<<std::endl;
    this->type =oobj.type;
    return(*this);
}
void WrongCat :: makeSound()const{
    std::cout << "Wrong Cats Meaaaaaaaoows"<<std::endl;
}