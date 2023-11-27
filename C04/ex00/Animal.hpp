#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class   Animal{
    protected:
    std::string type;
    public:
    Animal();
    ~Animal();
    Animal(const Animal &oobj);
    Animal &operator=(const Animal &oobj);
    std::string getType()const;
};
#endif