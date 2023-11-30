#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class   Animal{
    protected:
    std::string type;
    public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &oobj);
    Animal &operator=(const Animal &oobj);
    std::string getType()const;
    void setType(std ::string type);
    virtual void makeSound()const=0;

};
#endif