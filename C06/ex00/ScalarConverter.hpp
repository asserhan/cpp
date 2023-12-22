#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

class  ScalarConverter{
    private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &oobj);
    ScalarConverter &operator=(const ScalarConverter &oobj);
    public:
    ~ScalarConverter();
    static void convert(std ::string literal);
};
#endif