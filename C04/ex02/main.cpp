#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void ff(void)
{
    system("leaks  brain");
}
int main(int ac,char *argv[])
{
    (void) argv;
        atexit(ff);
    if(ac == 1)
    {
       const Animal *j = new Dog();
        const Animal *i = new Cat(); 
        //const Animal k;
        delete j;
       delete i;
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