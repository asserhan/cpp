#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>


class  ScalarConverter{
   private:
    ScalarConverter();

    public:
    ScalarConverter(const ScalarConverter &oobj);
    ScalarConverter &operator=(const ScalarConverter &oobj);
    ~ScalarConverter();
    static void convert(std ::string literal);
};
#endif