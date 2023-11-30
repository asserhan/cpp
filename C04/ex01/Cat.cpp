#include "Cat.hpp"
#include "Brain.hpp"
Cat :: Cat(){
    std::cout<<"Cat Default constructor"<<std::endl;
    setType("Cat");
    this->brain = new Brain();
    
}
Cat ::~Cat(){
    std::cout<<"Cat Default destructor"<<std::endl;
    delete this->brain;
}
Cat :: Cat(const Cat &oobj){

    std::cout<<"Cat copy constructor"<<std::endl;
    (*this) = oobj;
}
Cat &Cat :: operator=(const Cat &oobj) {
    std::cout<<"Cat copy assignment operator"<<std::endl;
    this->type =oobj.type;
    this->brain = new Brain(*oobj.brain);
    return(*this);
}
void Cat :: makeSound()const{
    std::cout << "Cats Meaaaaaaaoows"<<std::endl;
}