#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
	
	private:
	Brain *brain;
    public:
	Dog();
	~Dog();
	Dog(const Dog &oobj);
	Dog &operator=(const Dog &oobj);
   void makeSound()const;
};
#endif