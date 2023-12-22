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
    (void)oobj;
    return(*this);
}
ScalarConverter:: ~ScalarConverter(){
    std::cout<<"default destructor called"<<std::endl;
}
void  ScalarConverter :: convert(std::string literal){
    //std::string Special_Char[6] = {"-inf","+inf","nan","-inff","+inff","nanf"};
    // char charValue = '\0';
    // int intValue = 0;
    // float floatValue = 0.0f;
    // double doubleValue = 0.0;
    if(literal.length() == 1 )
    {
        if(!isprint(literal[0]))
            std::cout << "char : Non displayable"<<std::endl;
        else
            std::cout << "char : '"<<literal[0]<<"'"<<std::endl;
        std::cout << "int : "<<static_cast<int>(literal[0])<<std::endl;
        std::cout << "float : "<<static_cast<float>(literal[0])<<".0f"<<std::endl;
        std::cout << "double : "<<static_cast<double>(literal[0])<<".0"<<std::endl;
        }
}

