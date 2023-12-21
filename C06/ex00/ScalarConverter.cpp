#include "ScalarConverter.hpp"

ScalarConverter :: ScalarConverter(){
    std::cout<<"default constructor called"<<std::endl;
}
ScalarConverter :: ScalarConverter(const ScalarConverter &oobj){
    std::cout<<"copy constructor called"<<std::endl;
    (*this)=oobj;
}
ScalarConverter & ScalarConverter :: operator=(const ScalarConverter &oobj){
    std::cout<<"copy assignment operator called"<<std::endl;
    return(*this);
}