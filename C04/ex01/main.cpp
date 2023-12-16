#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main(int ac,char *argv[])
{
    (void) argv;
    if(ac == 1)
    {
       const Animal *j = new Dog();
        const Animal *i = new Cat(); 
        delete j;
       delete i;
       Dog basic;
       {
            Dog tmp = basic;
       }
       Animal *meta[6] = {new Dog(),new Cat(),new Dog(),new Cat(),new Dog(),new Cat()};
       for(int i = 0; i < 6; i++)
       {
           meta[i]->makeSound();
           delete meta[i];
       }


    }
    else 
    {
        std::cout <<"Wrong argument"<<std::endl;
        return(1);
    }
    return(0);
}