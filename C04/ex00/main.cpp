#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(int ac,char *argv[])
{
    (void) argv;
    if(ac == 1)
    {
        const Animal *meta=new Animal();
        const Animal *j=new Dog();
        const Animal *i=new Cat();
        std::cout << j->getType() << " " <<std::endl;
        std::cout << i->getType() << " " <<std::endl;
        std::cout << meta->getType() << " " <<std::endl;

        i->makeSound();
        j->makeSound();
        meta->makeSound();
       // const WrongCat cat;
       // cat.makeSound();
        const WrongAnimal *k = new WrongCat();
        std::cout << k->getType() << " " <<std::endl;
        k->makeSound();
        delete meta;
        delete j;
        delete i;
        delete k;

    }
    else 
    {
        std::cout <<"Wrong argument"<<std::endl;
        return(1);
    }
    return(0);
}