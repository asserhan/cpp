#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class   WrongAnimal{
    protected:
    std::string type;
    public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &oobj);
    WrongAnimal &operator=(const WrongAnimal &oobj);
    std::string getType()const;
    void setType(std ::string type);
    void makeSound()const;

};
#endif