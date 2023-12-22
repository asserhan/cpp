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
bool is_digit(std::string literal){
    for(size_t i=0;i<literal.length();i++)
    {
        if(!isdigit(literal[i]))
            return false;
    }
    return true;
}
void  ScalarConverter :: convert(std::string literal){
    std::string Special_Char[6] = {"-inf","+inf","nan","-inff","+inff","nanf"};
    
    int intValue = 0;
    float floatValue = 0.0f;
    double doubleValue = 0.0;
    if(literal.length() == 1 )
    {
        if(!isdigit(literal[0])){
            std::cout << "char : '"<<literal[0]<<"'"<<std::endl;
            std::cout << "int : "<<static_cast<int>(literal[0])<<std::endl;
            std::cout << "float : "<<static_cast<float>(literal[0])<<".0f"<<std::endl;
            std::cout << "double : "<<static_cast<double>(literal[0])<<".0"<<std::endl;
        }
        if(isdigit(literal[0])){
            intValue=std::stoi(literal);
            if(!isprint(intValue)){
                std::cout << "char : Non displayable"<<std::endl;
            }
            else
                std::cout << "char : '"<<static_cast<char>(intValue)<<"'"<<std::endl;
            std::cout << "int : "<<intValue<<std::endl;
            std::cout << "float : "<<static_cast<float>(intValue)<<".0f"<<std::endl;
            std::cout << "double : "<<static_cast<double>(intValue)<<".0"<<std::endl;

        }
    }else{
        if(literal.compare(Special_Char[2]) == 0 || literal.compare(Special_Char[5]) == 0){
            std::cout<<"char : impossible "<<std::endl;
            std::cout<<"int : impossible "<<std::endl;
            std::cout<<"float : nanf"<<std::endl;
            std::cout<<"double : nan"<<std::endl;
        }
        if(literal.compare(Special_Char[0])==0 || literal.compare(Special_Char[3])==0)
        {
            std::cout<<"char : impossible "<<std::endl;
            std::cout<<"int : impossible "<<std::endl;
            std::cout<<"float : -inff"<<std::endl;
            std::cout<<"double : -inf"<<std::endl;
        }
        if(literal.compare(Special_Char[1])==0 || literal.compare(Special_Char[4])==0)
        {
            std::cout<<"char : impossible "<<std::endl;
            std::cout<<"int : impossible "<<std::endl;
            std::cout<<"float : +inff"<<std::endl;
            std::cout<<"double : +inf"<<std::endl;
        }
        else{
            if(literal.find('.')!=std::string::npos)
            {
                if(literal[literal.length() - 1]== 'f'){
                    floatValue=stof(literal);
                    std::cout<<"char : '"<<static_cast<char>(floatValue)<<"'"<<std::endl;
                    std::cout<<"int : "<<static_cast<int>(floatValue)<<std::endl;
                    std::cout<<"float : "<<floatValue<<".0f"<<std::endl;
                    std::cout<<"double : "<<static_cast<double>(floatValue)<<".0"<<std::endl;
                }else{
                    doubleValue=stod(literal);
                    std::cout<<"char : '"<<static_cast<char>(doubleValue)<<"'"<<std::endl;
                    std::cout<<"int : "<<static_cast<int>(doubleValue)<<std::endl;
                    std::cout<<"float : "<<static_cast<float>(doubleValue)<<".0f"<<std::endl;
                    std::cout<<"double : "<<doubleValue<<".0"<<std::endl;
                }
            }
            else if(is_digit(literal)){
                intValue=stoi(literal);
                std::cout<<"char : '"<<static_cast<char>(intValue)<<"'"<<std::endl;
                std::cout<<"int : "<<intValue<<std::endl;
                std::cout<<"float :"<<static_cast<float>(intValue)<<".0f"<<std::endl;
                std::cout<<"double :"<<static_cast<double>(intValue)<<".0"<<std::endl;
            }
            else {
                std::cout<<"wrong input"<<std::endl;
            }
        }
       
    }
}

