#include "Serializer.hpp"

Serializer :: Serializer(){
    std::cout << "Default constructor called"<<std::endl;
}
Serializer :: Serializer(const Serializer &oobj){
    std::cout << "Copy constructor called"<< std::endl;
    (*this)=oobj;
}
Serializer & Serializer :: operator=(const Serializer &oobj){
    std::cout << "Copy assignment operator called"<<std::endl;
    (void)oobj;
    return(*this);
}
Serializer ::  ~Serializer(){
    std::cout <<"Default destructor called"<<std::endl;
}
uintptr_t Serializer :: serialize(Data *ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}
Data * Serializer :: deserialize(uintptr_t raw){
    return(reinterpret_cast<Data *>(raw));
}